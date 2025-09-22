#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) 
{
    int answer = 0;
    stack<int> sub;
    int currentBox = 1;
    int n = order.size();

    for (int i = 0; i < n; i++) 
    {
        int target = order[i];

        while (currentBox <= n && currentBox <= target) 
        {
            if (currentBox == target) 
            {
                answer++;
                currentBox++;
                target = -1;
                break;
            } 
            else 
            {
                sub.push(currentBox);
                currentBox++;
            }
        }

        if (target != -1) 
        {
            if (!sub.empty() && sub.top() == target) 
            {
                sub.pop();
                answer++;
            } 
            else 
            {
                break;
            }
        }
    }

    return answer;
}
