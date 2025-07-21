#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    const vector <int> burger = {1, 2, 3, 1};
    
    for (int i : ingredient)
    {
        stack.push_back(i);
        
        if (stack.size() >= 4)
        {
            bool isBurger = true;
            for (int j = 0; j < 4; ++j)
            {
                    if (stack[stack.size() - 4 + j] != burger[j]) 
                    {
                    isBurger = false;
                    break;
                    }
            }
            if (isBurger) 
            {
                for (int j = 0; j < 4; ++j)
                    stack.pop_back();
                answer++;
            }
        }
    }
    
    return answer;
}