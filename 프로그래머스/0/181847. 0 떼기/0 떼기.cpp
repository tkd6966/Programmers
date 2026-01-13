#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    
   while(n_str.length() > 0 && n_str[0] == '0')
   {
       n_str.erase(n_str.begin());
   }
    return n_str;
}