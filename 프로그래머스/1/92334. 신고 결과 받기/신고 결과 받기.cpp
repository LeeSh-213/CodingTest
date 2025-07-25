#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{
    unordered_map<string, unordered_set<string>> report_map; 
    unordered_map<string, unordered_set<string>> user_reports; 
    unordered_map<string, int> result_mail; 
    
    for (string r : report) 
    {
        int space = r.find(' ');
        string reporter = r.substr(0, space);
        string reported = r.substr(space + 1);

        // 동일한 신고는 1번만 반영
        if (user_reports[reporter].insert(reported).second) 
        {
            report_map[reported].insert(reporter);
        }
    }
    
    for (auto& entry : report_map) 
    {
        if (entry.second.size() >= k) 
        {
            for (string reporter : entry.second) 
            {
                result_mail[reporter]++;
            }
        }
    }
    
    vector<int> answer;
    for (string id : id_list) 
    {
        answer.push_back(result_mail[id]);
    }
    
    return answer;
}