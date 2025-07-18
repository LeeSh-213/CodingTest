#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) 
{
    unordered_map<char, int> dict;
    
    for(auto& key : keymap)
        for (int i = 0; i < key.size(); ++i)
            dict[key[i]] = dict.count(key[i]) ? min(dict[key[i]], i + 1) : i + 1;
    
    vector<int> answer;
    for (auto& word : targets) {
        int sum = 0;
        for (char c : word) {
            if (!dict.count(c)) {
                sum = -1;
                break;
            }
            sum += dict[c];
        }
        answer.push_back(sum);
    }
    return answer;
}