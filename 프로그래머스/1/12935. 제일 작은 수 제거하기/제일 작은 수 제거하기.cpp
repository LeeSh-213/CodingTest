#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;              
    if (arr.empty())                   
        return { -1 };                

    int minV = arr[0];                
    int minI = 0;                      

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minV) {         
            minV = arr[i];            
            minI = i;                 
        }
    }

    arr.erase(arr.begin() + minI);    

    if (arr.empty())                 
        return { -1 };                

    answer = arr;                    
    return answer;     
}