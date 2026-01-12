#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret = "";
    int mode = 0;
   for(int i = 0; i < code.length(); i++)
   {
       if(code[i] == '1')
       {
           mode = (mode == 0) ? 1 : 0;
       }
       else
       {
           if(mode == 0)
           {
               if(i % 2 == 0) ret += code[i];
           }
           else if(mode == 1)
           {
               if(i % 2 != 0) ret += code[i];
           }
       }
   }
    return ret.empty() ? "EMPTY" : ret;
}