#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for (int a = 0; a <= 9; a++) 
    {
        bool found = false;  

        for (int i = 0; i < numbers.size(); i++) 
        {
            if (numbers[i] == a) 
            {
                found = true;
                break;
            }
        }

        if (!found) 
        {
            answer += a;  
        }
    }
    return answer;
}