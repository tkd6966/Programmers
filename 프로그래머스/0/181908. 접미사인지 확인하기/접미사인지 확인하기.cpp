#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    
    reverse(my_string.begin(), my_string.end());
    reverse(is_suffix.begin(), is_suffix.end());
    for (int i = 0; i < is_suffix.size(); i++)
    {
        if (my_string[i] != is_suffix[i]) return 0;            
    }
    return 1;
}