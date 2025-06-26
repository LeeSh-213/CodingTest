#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.length();
    long long pValue = stoll(p);
    
    for ( int i = 0; i <= t.length() - len; ++i)
    {
        string sub = t.substr(i, len);
        long long subValue = stoll(sub);
        if ( subValue <= pValue)
        {
            answer++;
        }
    }
    
    return answer;
}