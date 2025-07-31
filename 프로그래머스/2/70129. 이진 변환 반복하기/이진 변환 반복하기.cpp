#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

vector<int> solution(string s) 
{
    int convertCount = 0;
    int zeroCount = 0;
    
    while (s != "1")
    {
        int originalLength = s.length();
        
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        
        zeroCount += (originalLength - s.length());
        
        int len = s.length();
        s = bitset<20>(len).to_string();
        s.erase(0, s.find_first_not_of('0'));
        
        convertCount++;
        
    }
    
    return {convertCount, zeroCount};

}