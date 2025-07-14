#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zeroCount = 0;
    int matchCount = 0;
    
    for ( int i = 0; i < lottos.size(); ++i)
    {
        if (lottos[i] == 0)
        {
            zeroCount++;
        }
        else if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end())
        {
            matchCount++;
        }
    }
    
    auto getRank = [](int count)
    {
        return count >= 2 ? 7 - count : 6;
    };
    
    int bestRank = getRank(matchCount + zeroCount);
    int worstRank = getRank(matchCount);
    
    answer.push_back(bestRank);
    answer.push_back(worstRank);
    
    
    return answer;
}