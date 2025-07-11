#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) 
{
    int answer = 0;
    
    for ( int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            for (int k = j + 1; k < nums.size(); ++k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                
                bool isPrime = true;
                if (sum < 2) isPrime = false;
                
                else 
                {
                    for (int d = 2; d * d <= sum; ++d)
                    {
                        if (sum % d == 0)
                        {
                            isPrime = false;
                            break;
                        }
                    }
                }
                if (isPrime) ++answer;
            }
        }
    }
    
    return answer;
}