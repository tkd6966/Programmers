#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_len = t.length();
    int p_len = p.length();
    
    long long p_value = stoll(p);
    
    for (int i = 0; i <= t_len - p_len; i++)
    {
        string sub = t.substr(i, p_len);
        long long sub_value = stoll(sub);
        
        if (sub_value <= p_value)
        {
            answer++;
        }
    }
    
    return answer;
}