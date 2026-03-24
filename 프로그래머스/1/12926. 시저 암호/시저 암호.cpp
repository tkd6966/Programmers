#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            answer += ' ';
            continue;
        }
        char base = isupper(s[i]) ? 'A' : 'a';
        
        s[i] = (s[i] - base + n) % 26 + base;
        answer += s[i];
    }
    return answer;
}