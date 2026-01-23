#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int sum = 0;
    
    for (int i = 1; i <= 9; i++)
    {
        answer += i;
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }
    
    return answer - sum;
}