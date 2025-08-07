#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isValid(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty(); 
}

int solution(string s) {
    int answer = 0;
    
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        string rotated = s.substr(i) + s.substr(0, i);
        if (isValid(rotated)) {
            answer++;
        }
    }

    return answer;
    
    return answer;
}