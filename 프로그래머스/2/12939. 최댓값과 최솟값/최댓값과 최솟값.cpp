#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

string solution(string s) 
{
    string answer = "";
    stringstream ss(s);
    int num;
    
    int min_val = numeric_limits<int>::max();  
    int max_val = numeric_limits<int>::min();    
    
        while (ss >> num) {
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    answer = to_string(min_val) + " " + to_string(max_val);
    
    return answer;
}