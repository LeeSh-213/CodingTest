#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for(int r = 0; r < numbers.size(); r++)
    {
        answer += numbers[r];
    }

    return answer/numbers.size();
}