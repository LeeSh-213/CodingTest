#include <string>
#include <vector>
#include <unordered_map> 

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    
    unordered_map<string, int> typeCount;
    for (auto &item : clothes) 
    {
        string name = item[0];   
        string type = item[1];   
        typeCount[type]++;       
    }
    

    long long combinations = 1;
    for (auto &p : typeCount) 
    {
        combinations *= (p.second + 1);
    }
    

    answer = combinations - 1;
    
    return answer;
}