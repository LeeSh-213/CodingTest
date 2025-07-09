#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<int>());
    
    int boxCount = score.size() / m ;
    
    for (int i = 0 ; i < boxCount; ++i)
    {
        int minScore = score[i * m + m - 1];
        answer += minScore * m;
    }
    
    return answer;
}