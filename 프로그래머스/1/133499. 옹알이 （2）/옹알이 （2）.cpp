#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> sounds= {"aya","ye", "woo", "ma"};
    
    for (const string& word : babbling)
    {
        int i = 0;
        string prev = "";
        bool isValid = true;
        
        while (i < word.length())
        {
            bool matched = false;
            
            for (const string& sound : sounds)
            {
                int len = sound.length();
                
                if (word.substr(i, len) == sound && sound != prev)
                {
                    prev = sound;
                    i += len;
                    matched = true;
                    break;
                }
            }
            
            if (!matched)
            {
                isValid = false;
                break;
            }
        }
        
        if (isValid)
        {
            answer++;
        }
    }
    
    return answer;
}