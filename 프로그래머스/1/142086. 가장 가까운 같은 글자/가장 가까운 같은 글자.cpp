#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.size(), -1);
    int last[256] = {}; 

    fill(begin(last), end(last), -1); 

    for (int i = 0; i < s.size(); ++i) {
        if (last[s[i]] != -1)
            answer[i] = i - last[s[i]];
        last[s[i]] = i;
    }

    return answer;
}
