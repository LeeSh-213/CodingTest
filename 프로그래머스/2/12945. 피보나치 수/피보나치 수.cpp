#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int prev = 0;
    int curr = 1;
    
    if (n == 0) return prev;
    
    for (int i = 2; i <= n; ++i)
    {
        int next = (prev + curr) % 1234567;
        prev = curr;
        curr = next;
    }
    
    return curr;

}