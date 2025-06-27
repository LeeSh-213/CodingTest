#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string result = "";
    string temp = "";
    
    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        
        if (c >= '0' && c <= '9')
        {
            result += c;
        }
        
        else
        {
            temp += c;
            
            for (int j = 0; j < 10; ++j)
            {
                if (temp == words[j])
                {
                    result += to_string(j);
                    temp = "";
                    break;
                }
            }
        }
        
        
    }
    
    answer = stoi(result);
    
    return answer;
}