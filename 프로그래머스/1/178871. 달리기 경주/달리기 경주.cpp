#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> nameToIndex;

    for (int i = 0; i < players.size(); ++i) {
        nameToIndex[players[i]] = i;
    }

    for (const string& name : callings) {
        int curIndex = nameToIndex[name];
        int frontIndex = curIndex - 1;

        swap(players[curIndex], players[frontIndex]);

        nameToIndex[players[curIndex]] = curIndex;
        nameToIndex[players[frontIndex]] = frontIndex;
    }

    return players;
}