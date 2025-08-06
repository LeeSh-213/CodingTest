#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    unordered_map<int, int> countMap;
    for (int size : tangerine) 
    {
        countMap[size]++;
    }
    
    vector<int> counts;
    
    for (auto& p : countMap) 
    {
        counts.push_back(p.second);
    }
    sort(counts.begin(), counts.end(), greater<int>());    
    
    int sum = 0;
    for (int c : counts) 
    {
        sum += c;
        answer++;
        if (sum >= k) break;
    }
        
    
    return answer;
}