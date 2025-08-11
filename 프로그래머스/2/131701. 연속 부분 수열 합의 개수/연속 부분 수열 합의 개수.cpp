#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) 
{
    int n = elements.size();
    unordered_set<int> sums;
    
    vector<int> extended(elements.begin(), elements.end());
    extended.insert(extended.end(), elements.begin(), elements.end());
    
        for (int length = 1; length <= n; ++length)
    {
        for (int start = 0; start < n; ++start)
        {
            int sum = 0;
            for (int i = start; i < start + length; ++i)
            {
                sum += extended[i];
            }
            sums.insert(sum);
        }
    }
    
    int answer = sums.size();
    return answer;
}
    
