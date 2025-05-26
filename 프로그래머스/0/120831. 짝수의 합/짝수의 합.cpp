#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int r = 0; r <= n; r++)
        if(r % 2 == 0 )
        {
            answer += r;
        }
    
    
    return answer;
}