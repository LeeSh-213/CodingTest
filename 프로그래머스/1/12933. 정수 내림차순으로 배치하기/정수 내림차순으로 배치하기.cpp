#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    int arr[20];
    int count = 0;
    long long answer = 0;
    while (n > 0) {
        arr[count++] = n % 10;
        n /= 10;
    }    
    
    for (int i = 0; i < count -1; ++i)
    {
        for(int j = 0; j < count - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < count; ++i)
    {
        answer = answer * 10 + arr[i];
    }
    return answer;
}
