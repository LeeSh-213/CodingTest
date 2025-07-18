#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i = 0;
    
    while (i < s.length())
    {
        char x = s[i];
        int xCount = 0;
        int otherCount = 0;
        
        for (int j = i; j < s.length(); ++j)
        {
            if (s[j] == x)
            
                ++xCount;
            else
                ++otherCount;
            
            
            if (xCount == otherCount)
            {
                ++answer;
                i = j + 1;
                break;
            }
            
            if ( j == s.length() - 1 )
            {
                ++answer;
                i = s.length();
            }
        }
    }   
    return answer;
}