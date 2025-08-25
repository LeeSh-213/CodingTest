#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) 
{
    queue<pair<int,int>> q;  
    for (int i = 0; i < priorities.size(); i++) 
    {
        q.push({priorities[i], i});
    }
    
    int answer = 0;
    while (!q.empty()) 
    {
        auto current = q.front();
        q.pop();
         
            bool hasHigher = false;
        queue<pair<int,int>> temp = q;
        while (!temp.empty()) 
        {
            if (temp.front().first > current.first) 
            {
                hasHigher = true;
                break;
            }
            temp.pop();
        }
        if (hasHigher) 
        {
            q.push(current);
        } 
        else 
        {

            answer++;
            if (current.second == location) 
            {
                return answer;
            }
        }
    }
    return answer;
        
    
}