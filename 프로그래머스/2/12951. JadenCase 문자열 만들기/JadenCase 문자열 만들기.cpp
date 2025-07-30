#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) 
{
    string answer = "";
    bool isStart = true;

    for (char c : s) 
    {
        if (c == ' ') 
        {
            answer += c;
            isStart = true;
        } 
        else 
        {
            if (isStart) 
            {
                answer += toupper(c);
            }
            else 
            {
                answer += tolower(c);
            }
            isStart = false;
        }
    }

    return answer;
}