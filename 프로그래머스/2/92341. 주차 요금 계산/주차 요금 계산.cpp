#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <cmath>

using namespace std;

int timeToMin(string t) 
{
    int h = stoi(t.substr(0, 2));
    int m = stoi(t.substr(3, 2));
    return h * 60 + m;
}



vector<int> solution(vector<int> fees, vector<string> records) 
{
    map<string, int> inTime;
    map<string, int> totalTime;
    
    for (string r : records) 
    {
        stringstream ss(r);
        string timeStr, car, type;
        ss >> timeStr >> car >> type;
        int t = timeToMin(timeStr);
        
        if (type == "IN") 
        {
            inTime[car] = t;
        } else 
        {
            totalTime[car] += (t - inTime[car]);
            inTime.erase(car);
        }
    }
    
   
    for (auto &p : inTime) 
    {
        totalTime[p.first] += (1439 - p.second);
    }
    
    vector<int> answer;
    for (auto &p : totalTime) 
    {
        int time = p.second;
        int fee = fees[1];
        if (time > fees[0])
        {
            fee += (int)ceil((time - fees[0]) / (double)fees[2]) * fees[3];
        }
        answer.push_back(fee);
    }
    
    return answer;
}