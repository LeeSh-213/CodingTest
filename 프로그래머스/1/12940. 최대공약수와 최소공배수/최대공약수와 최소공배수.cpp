#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = 1;
    int min_v = (n < m ) ? n : m;
    
    for (int i = min_v; i >= 1; i--)
    {
        if ( n % i == 0 && m % i == 0)
        {
            a = i;
            break;
        }
    }
    
    int max_v = n * m;
    int l = max_v;
    for (int i = 1; i <= max_v; i++)
    {
        if ( i % n == 0 && i % m ==0)
        {
            l = i;
            break;
        }
    }
    answer.push_back(a);
    answer.push_back(l);
    return answer;
}