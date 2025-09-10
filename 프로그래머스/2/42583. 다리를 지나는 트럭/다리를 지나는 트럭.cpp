#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> bridge;
    int time = 0;
    int current_weight = 0;
    
    for (int i = 0; i < bridge_length; i++) 
    {
        bridge.push(0);
    }

    int idx = 0;
    while (idx < truck_weights.size()) 
    {
        time++;

        current_weight -= bridge.front();
        bridge.pop();

        if (current_weight + truck_weights[idx] <= weight) 
        {
            bridge.push(truck_weights[idx]);
            current_weight += truck_weights[idx];
            idx++;
        }
        else 
        {
            bridge.push(0);
        }
    }

    time += bridge_length;

    return time;
}
