#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string answer = to_string(a) + to_string(b);
    string answer2 = to_string(b) + to_string(a);
    if(stoi(answer) > stoi(answer2)) return stoi(answer);
    else return stoi(answer2);
}