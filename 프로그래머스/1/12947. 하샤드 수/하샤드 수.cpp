#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int arr[20];
    int i = 0;
    int o = x;
    int sum = 0;
    while (x > 0)
    {
        int a =  x % 10;
        arr[i++] = a;
        sum += a;
        x = x/10;
    }
    
    return (o % sum == 0);
}