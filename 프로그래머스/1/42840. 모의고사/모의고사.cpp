#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> p1 = {1, 2, 3, 4, 5};
    vector<int> p2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> p3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> scores(3, 0);
    
    for ( int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == p1[i % p1.size()]) scores[0]++;
        if (answers[i] == p2[i % p2.size()]) scores[1]++;
        if (answers[i] == p3[i % p3.size()]) scores[2]++;
    }
    
    int maxScore = max({scores[0], scores[1], scores[2]});
    vector<int> result;
    
    for (int i = 0; i < 3; ++i)
    {
        if (scores[i] == maxScore)
        {
            result.push_back(i + 1);
        }
    }
    
    sort (result.begin(), result.end());
    return result;

}