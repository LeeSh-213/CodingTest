#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a) {
        int new_cola = (n / a) * b;  
        answer += new_cola;
        n = new_cola + (n % a);  
    }    
    return answer;
}