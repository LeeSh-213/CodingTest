#include <string>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

bool isPrime(long long num) 
{
    if (num < 2) return false;

    for (long long i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

string toBaseK(long long n, int k) 
{
    string result = "";
    while (n > 0) 
    {
        result = to_string(n % k) + result;
        n /= k;
    }
    return result;
}

int solution(int n, int k) 
{
    string baseK = toBaseK(n, k);

    stringstream ss(baseK);
    string segment;
    int answer = 0;
    while (getline(ss, segment, '0')) 
    {
        if (segment.empty()) continue;
        long long num = stoll(segment);
        if (isPrime(num)) answer++;
    }
    
    return answer;
}