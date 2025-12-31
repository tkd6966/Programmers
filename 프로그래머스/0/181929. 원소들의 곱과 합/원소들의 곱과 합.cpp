#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0;
    int sumx = 1;
    for(int i = 0; i < num_list.size(); i++)
    {
        sum += num_list[i];
        sumx *= num_list[i];
    }
    if(sumx < (sum*sum)) return 1;
    else return 0;
}