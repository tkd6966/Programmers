#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for(long long i = 0; i < n; i++)
    {
        answer.push_back(i);
        if(i == 0)
        {
            answer[i] = x;
        }
        else
        {
            answer[i] = x + (x * i);
        }
    }
    
    return answer;
}