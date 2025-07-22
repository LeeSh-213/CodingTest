#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    bool answer = true;
    
    int o = x;
    int sum = 0;
    
    while(x > 0 )
    {
        sum += x % 10;
        x /= 10;
    }
    if (o % sum != 0)
    {
        return false;
    }
    
    return answer;
}