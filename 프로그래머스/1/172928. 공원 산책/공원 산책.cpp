#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int h = park.size(), w = park[0].size(), y, x;
    unordered_map<char, pair<int, int>> dir = {{'N', {-1,0}}, {'S', {1,0}}, {'W', {0,-1}}, {'E', {0,1}}};
    
    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j)
            if (park[i][j] == 'S') tie(y, x) = {i, j};

    for (const string& r : routes) {
        int dy = dir[r[0]].first, dx = dir[r[0]].second, dist = r[2] - '0';
        int ny = y, nx = x;
        bool valid = true;

        for (int i = 0; i < dist; ++i) {
            ny += dy; nx += dx;
            if (ny < 0 || ny >= h || nx < 0 || nx >= w || park[ny][nx] == 'X') {
                valid = false; break;
            }
        }
        if (valid) tie(y, x) = {ny, nx};
    }

    return {y, x};    
    
}