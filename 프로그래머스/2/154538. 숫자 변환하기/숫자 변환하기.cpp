#include <string>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

int solution(int x, int y, int n) 
{
    queue<pair<int,int>> q;
    unordered_set<int> visited;

    q.push({x, 0});
    visited.insert(x);

    while (!q.empty()) {
        auto [cur, cnt] = q.front();
        q.pop();

        if (cur == y) return cnt;

        int next[3] = {cur + n, cur * 2, cur * 3};
        for (int val : next) {
            if (val <= y && visited.find(val) == visited.end()) {
                visited.insert(val);
                q.push({val, cnt + 1});
            }
        }
    }

    return -1;
}
