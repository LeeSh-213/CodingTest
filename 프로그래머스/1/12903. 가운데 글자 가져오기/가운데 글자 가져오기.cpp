#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int l = s.length();
    if (l % 2 == 0)
    {
        answer = s.substr(l / 2 - 1, 2);
    }
    else 
    {
        answer = string (1, s[l / 2]);
    }
    return answer;
}