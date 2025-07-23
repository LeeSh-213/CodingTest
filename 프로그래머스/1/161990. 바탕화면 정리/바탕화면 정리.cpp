#include <string>
#include <vector>
#include <limits>

using namespace std;

vector<int> solution(vector<string> wallpaper) 
{
    constexpr int INF = numeric_limits<int>::max();
    constexpr int NINF = numeric_limits<int>::min();

    int minRow = INF, minCol = INF;
    int maxRow = NINF, maxCol = NINF;
    
    for ( int i = 0; i < wallpaper.size(); ++i)
    {
        const auto& row = wallpaper[i];
        for(int j = 0; j < row.size(); ++j)
        {
            if (row[j] == '#')
            {
            minRow = min(minRow, i);
            minCol = min(minCol, j);
            maxRow = max(maxRow, i);
            maxCol = max(maxCol, j);
            }
        }
    }
    
    return {minRow, minCol, maxRow + 1, maxCol + 1};
    
}