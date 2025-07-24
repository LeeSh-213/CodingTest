#include <string>
#include <vector>
#include <map>

using namespace std;

int convertToDays(const string& date) 
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    return (year * 12 * 28) + (month * 28) + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<string, int> termMap;
    
    for (const string& term : terms)
    {
        string type = term.substr(0, 1);
        int period = stoi(term.substr(2));
        termMap[type] = period;
    }
    
    int todayDays = convertToDays(today);
    
    for (int i = 0; i < privacies.size(); ++i)
    {
        string date = privacies[i].substr(0, 10);
        string type = privacies[i].substr(11);
        
        int collectedDays = convertToDays(date);
        int expiryDays = collectedDays + termMap[type] * 28;
        
        
        if (todayDays >= expiryDays) 
        {
            answer.push_back(i + 1);
        }
    }
    
    
    return answer;
}