#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int n = number.size();
    for ( int i = 0; i < n-2; i++)
    {
        for ( int j = i+1; j < n-1; j++)
        {
            for ( int a = j+1; a < n; a++)
            {
                if (number[i] + number[j] + number[a] == 0)
                    answer++;
            }
        }
    }
    
    return answer;
}