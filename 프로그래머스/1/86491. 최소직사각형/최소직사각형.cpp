#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxW = 0;
    int maxH = 0;
    
    for (int i = 0; i < sizes.size(); ++i)
    {
        int w = sizes[i][0];
        int h = sizes[i][1];
        if (w < h) 
        {
            int temp = w;
            w = h;
            h = temp;
        }
        
        if (w > maxW)
        {
            maxW = w;
        }
        
        if (h > maxH)
        {
            maxH = h;
        }
    }
    answer = maxW * maxH;
    return answer;
}