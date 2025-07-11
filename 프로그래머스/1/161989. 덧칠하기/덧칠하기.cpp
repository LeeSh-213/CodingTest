#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int i = 0;
    int size = section.size();
    
    while (i < size)
    {
        int start = section[i];
        int end = start + m - 1;
        
        answer++;
        
        while (i < size && section[i] <= end)
        {
            i++;
        }
    }
    
    return answer;
}