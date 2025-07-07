#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int> month_days = {31, 29, 31, 30, 31, 30, 
                              31, 31, 30, 31, 30, 31};
    
    vector<string> week = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};    
    
    int total_day = 0;
    
    for ( int i = 0; i < a - 1; ++i)
    {
        total_day += month_days[i];
    }
    
    total_day += b - 1;
    
    return week[total_day % 7];
}