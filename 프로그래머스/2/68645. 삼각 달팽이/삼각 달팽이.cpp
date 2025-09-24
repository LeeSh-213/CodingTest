#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    vector<vector<int>> board(n, vector<int>(n, 0));

    int num = 1;
    int x = -1, y = 0;
    int dir = 0;
    int total = n * (n + 1) / 2;

    for (int i = 0; i < total; i++) 
    {
        if (dir == 0) 
        {
            x++;
        } else if (dir == 1) 
        {
            y++;
        } 
        else 
        {          
            x--;
            y--;
        }
        board[x][y] = num++;

        int nx = x, ny = y;
        if (dir == 0) nx++;
        else if (dir == 1) ny++;
        else { nx--; ny--; }

        if (nx >= n || ny >= n || nx < 0 || ny < 0 || board[nx][ny] != 0) 
        {
            dir = (dir + 1) % 3;
        }
    }

    vector<int> answer;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            answer.push_back(board[i][j]);
        }
    }
    return answer;
}
