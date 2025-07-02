#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> tempSet;
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        for ( int j = i + 1; j < numbers.size(); ++j)
        {
            int sum = numbers[i] + numbers[j];
            tempSet.insert(sum); 
        }
    }
    vector<int> answer(tempSet.begin(), tempSet.end());
    return answer;
}