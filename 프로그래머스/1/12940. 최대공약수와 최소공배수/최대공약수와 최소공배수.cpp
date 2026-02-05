#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int a = n;
    int b = m;
    
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    
    int gcd = a;
    int lcm = (n * m) / gcd;
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}