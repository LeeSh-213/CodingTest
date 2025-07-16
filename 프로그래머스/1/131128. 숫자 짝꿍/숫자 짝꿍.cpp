#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    vector<int> countX(10, 0), countY(10, 0);

    for (char c : X)
        countX[c - '0']++;

    for (char c : Y)
        countY[c - '0']++;

    string result = "";
    
    for (int i = 9; i >= 0; --i) 
    {
        int common = min(countX[i], countY[i]);
        result += string(common, '0' + i);
    }

    if (result.empty()) return "-1";
    if (result[0] == '0') return "0";

    return result;
}