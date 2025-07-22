#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    unordered_map<char, int> score;
    
    for (char ch : {'R','T','C','F','J','M','A','N'}) 
    {
        score[ch] = 0;
    }    
    
    for (int i = 0; i < survey.size(); ++i) 
    {
        char disagree = survey[i][0];
        char agree = survey[i][1];
        int choice = choices[i];

        if (choice < 4) 
        {
            score[disagree] += 4 - choice; 
        } 
        else if (choice > 4) 
        {
            score[agree] += choice - 4;    
        }
    }    
    
        vector<pair<char, char>> indicators = {
        {'R', 'T'}, {'C', 'F'}, {'J', 'M'}, {'A', 'N'}
    };

    string result = "";
    for (auto [a, b] : indicators) {
        result += (score[a] >= score[b]) ? a : b;
    }

    return result;
}