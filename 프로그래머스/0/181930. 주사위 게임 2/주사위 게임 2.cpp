#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    
    if(a == b && b == c)
    {
        answer = (a * 3) * ((b * b) * 3) * ((c * c * c) * 3); 
    }
    else if(a == b || b == c || a == c)
    {
         answer = (a + b + c) * (a * a + b * b + c * c);
    }
    else answer = a + b + c;
    
    return answer;
}