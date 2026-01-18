#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer1 = 0;
    int answer2 = 0;
    
    if (arr1.size() == arr2.size())
    {
        for (int i = 0; i < arr1.size(); i++)
        {
            answer1 += arr1[i];
        }
        for (int i = 0; i < arr2.size(); i++)
        {
            answer2 += arr2[i];
        }
        if (answer1 == answer2) return 0;
        else if (answer1 > answer2) return 1;
        else if (answer1 < answer2) return -1;
    }
    else if (arr1.size() > arr2.size()) return 1;  
    else if (arr1.size() < arr2.size()) return -1; 
}