#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i = 0; i < lost.size(); ++i) {
        auto it = find(reserve.begin(), reserve.end(), lost[i]);
        if (it != reserve.end()) {
            lost[i] = -1;
            *it = -1;
        }
    }

    for (int l : lost) {
        if (l == -1) continue;
        auto it = find(reserve.begin(), reserve.end(), l - 1);
        if (it != reserve.end()) {
            *it = -1;
            continue;
        }
        it = find(reserve.begin(), reserve.end(), l + 1);
        if (it != reserve.end()) {
            *it = -1;
            continue;
        }
        n--;
    }        
    return n;
}