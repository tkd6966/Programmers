#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp_string = "";
    
    for (int i = 0; i < my_string.length(); i++)
    {
        if (my_string[i] != ' ')
        { 
            temp_string += my_string[i];
        }
        else
        {
            answer.push_back(temp_string);            
            temp_string = "";
        }
    }
    if (temp_string != "")
    {
        answer.push_back(temp_string); 
    }
    return answer;
}