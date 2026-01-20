#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    
    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] != 'x')
        {
            count++;
        }
        else if (myString[i] == 'x')
        {
            answer.push_back(count);
            count = 0;
        }
    }
    answer.push_back(count);
    return answer;
}