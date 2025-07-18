#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> skipSet(skip.begin(), skip.end());
    
    for (char c : s )
    {
        int count = 0; 
        char current = c; 
        
        while (count < index)
        {
            current++;
            if (current > 'z') current = 'a';
            if (skipSet.find(current) != skipSet.end()) continue;
            count++;
        }
        
        answer += current;
    }
    
    
    return answer;
}