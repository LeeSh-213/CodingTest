#include <string>
#include <vector>

using namespace std;

int solution(string word) 
{    
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    vector<int> weights = {781, 156, 31, 6, 1};
    int answer = 0;
    
    for (int i = 0; i < word.size(); i++)
    {
        int idx = 0;
        for (int j = 0; j < 5; j++) {
            if (word[i] == vowels[j]) {
                idx = j;
                break;
            }
        }
        answer += idx * weights[i] + 1; 
    }
    
    return answer;
}