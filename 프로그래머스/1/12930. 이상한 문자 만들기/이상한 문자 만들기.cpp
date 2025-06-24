#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int wordindex = 0;
    
    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        
        if ( c == ' ')
        {
            answer += c;
            wordindex = 0;
        }
        else
        {
            if (wordindex % 2 == 0)
            {
                if (c >= 'a' && c <= 'z')
                    answer += c - 32;
                else 
                    answer += c;
            }
            else 
            {
                if (c >= 'A' && c <= 'Z')
                    answer += c + 32;
                else 
                    answer += c;
            }
            wordindex++;
        }
    }
    return answer;
}