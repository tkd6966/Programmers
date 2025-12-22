#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    if(0 < age <= 120)
    {
        int answer = 2022 - age + 1;
        return answer;
    }
}