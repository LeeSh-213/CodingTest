#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) 
{
    int answer = 0;

    unordered_map<string, int> wantMap;
    for (size_t i = 0; i < want.size(); ++i) {
        wantMap[want[i]] = number[i];
    }

    int n = discount.size();
    if (n < 10) return 0; 

    unordered_map<string, int> windowMap;
    for (int i = 0; i < 10; ++i) {
        windowMap[discount[i]]++;
    }

    auto isMatch = [&](unordered_map<string, int>& a, unordered_map<string, int>& b) {
        for (auto& p : a) {
            if (b[p.first] != p.second) return false;
        }
        return true;
    };

    if (isMatch(wantMap, windowMap)) ++answer;

    for (int i = 10; i < n; ++i) {
        string outItem = discount[i - 10];
        windowMap[outItem]--;
        if (windowMap[outItem] == 0) {
            windowMap.erase(outItem);
        }

        string inItem = discount[i];
        windowMap[inItem]++;

        if (isMatch(wantMap, windowMap)) {
            ++answer;
        }
    }

    return answer;
}