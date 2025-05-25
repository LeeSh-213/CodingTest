#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    if (angle==180)
    {
        return 4; 
    }
    if (angle == 90)
    {
        return 2;
    }
    if (0<angle && angle < 90)
    {
        return 1;
    }
    if (90 < angle && angle< 180)
    {
        return 3;
    }

}