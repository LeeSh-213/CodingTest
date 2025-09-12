#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(string numbers) 
{
    set<int> numSet;
    vector<char> arr(numbers.begin(), numbers.end());
    sort(arr.begin(), arr.end());

    // 길이 1부터 numbers.size()까지
    for (int i = 1; i <= arr.size(); i++) 
    {
        sort(arr.begin(), arr.end());
        do 
        {
            string temp = "";
            for (int j = 0; j < i; j++) 
            {
                temp += arr[j];
            }
            numSet.insert(stoi(temp));
        } 
        while (next_permutation(arr.begin(), arr.end()));
    }

    int answer = 0;
    for (int num : numSet) 
    {
        if (isPrime(num)) answer++;
    }
    return answer;
}
