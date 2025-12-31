#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 2 * a * b;
    string ab = to_string(a) + to_string(b);
    if(answer >= stoi(ab)) return answer;
    else return stoi(ab);
}