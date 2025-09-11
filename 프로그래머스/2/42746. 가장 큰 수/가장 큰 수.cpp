#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers) 
{
    vector<string> strs;
    for (int num : numbers) 
    {
        strs.push_back(to_string(num));
    }

    sort(strs.begin(), strs.end(), [](string &a, string &b) 
         {
        return a + b > b + a;
    });

    string answer;
    for (string &s : strs) 
    {
        answer += s;
    }

    if (answer[0] == '0') return "0";

    return answer;
}