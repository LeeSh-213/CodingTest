#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double result = (double)num1 / num2;
    int answer = result * 1000;
    return answer;
}