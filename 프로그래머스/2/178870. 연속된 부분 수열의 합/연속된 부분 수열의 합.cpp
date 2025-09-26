#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) 
{
    int n = sequence.size();
    int left = 0, right = 0;
    long long sum = sequence[0];

    int bestL = 0, bestR = n - 1;
    int bestLen = n + 1;

    while (left < n && right < n) 
    {
        if (sum == k) 
        {
            int len = right - left + 1;
            if (len < bestLen || (len == bestLen && left < bestL)) 
            {
                bestLen = len;
                bestL = left;
                bestR = right;
            }
        }

        if (sum >= k) 
        {
            sum -= sequence[left];
            left++;
        } 
        else 
        {
            right++;
            if (right < n) sum += sequence[right];
        }
    }

    return {bestL, bestR};
}