#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) 
{
    long long sum1 = accumulate(queue1.begin(), queue1.end(), 0LL);
    long long sum2 = accumulate(queue2.begin(), queue2.end(), 0LL);
    long long total = sum1 + sum2;
    
    if (total % 2 != 0) return -1;
    long long target = total / 2;
    
    vector<int> arr;
    arr.insert(arr.end(), queue1.begin(), queue1.end());
    arr.insert(arr.end(), queue2.begin(), queue2.end());
    
    int n = queue1.size();
    int m = arr.size();
    
    int i = 0;
    int j = n;
    int cnt = 0;
    
    while (i < m && j < m && cnt <= 3 * n) 
    {
        if (sum1 == target) return cnt;
        
        if (sum1 > target) 
        {
            sum1 -= arr[i++];
        }
        else 
        {
            sum1 += arr[j++];
        }
        cnt++;
    }
    return -1;
}