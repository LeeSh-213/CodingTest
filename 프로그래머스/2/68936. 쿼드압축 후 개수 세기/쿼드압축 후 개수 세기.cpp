#include <string>
#include <vector>

using namespace std;

void countQuad(const vector<vector<int>>& arr, int x, int y, int size, int& zeroCount, int& oneCount)
{
    int first = arr[x][y];
    bool same = true;

    for (int i = x; i < x + size; ++i) 
    {
        for (int j = y; j < y + size; ++j) 
        {
            if (arr[i][j] != first) 
            {
                same = false;
                break;
            }
        }
        if (!same) break;
    }

    if (same) 
    {
        if (first == 0) zeroCount++;
        else oneCount++;
    }
    else 
    {
        int half = size / 2;
        countQuad(arr, x, y, half, zeroCount, oneCount);
        countQuad(arr, x, y + half, half, zeroCount, oneCount);
        countQuad(arr, x + half, y, half, zeroCount, oneCount);
        countQuad(arr, x + half, y + half, half, zeroCount, oneCount);
    }
}

vector<int> solution(vector<vector<int>> arr) 
{
    int zeroCount = 0;
    int oneCount = 0;

    countQuad(arr, 0, 0, arr.size(), zeroCount, oneCount);

    return {zeroCount, oneCount};
}