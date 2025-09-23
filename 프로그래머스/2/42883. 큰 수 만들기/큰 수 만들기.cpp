#include <string>
#include <vector>
using namespace std;

string solution(string number, int k) 
{
    string answer = "";
    vector<char> st;

    for (char digit : number) 
    {
        while (!st.empty() && k > 0 && st.back() < digit) 
        {
            st.pop_back();
            k--;
        }
        st.push_back(digit);
    }

    while (k > 0) 
    {
        st.pop_back();
        k--;
    }

    answer.assign(st.begin(), st.end());
    return answer;
}
