#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<int> topping) 
{
    int n = topping.size();
    vector<int> left(n, 0), right(n, 0);

    vector<int> freq(10001, 0);
    int kind = 0;
    for (int i = 0; i < n; i++) {
        if (freq[topping[i]] == 0) kind++;
        freq[topping[i]]++;
        left[i] = kind;
    }

    fill(freq.begin(), freq.end(), 0);
    kind = 0;
    for (int i = n - 1; i >= 0; i--) 
    {
        if (freq[topping[i]] == 0) kind++;
        freq[topping[i]]++;
        right[i] = kind;
    }

    int answer = 0;
    for (int i = 0; i < n - 1; i++) 
    { 
        if (left[i] == right[i + 1]) answer++;
    }

    return answer;
}