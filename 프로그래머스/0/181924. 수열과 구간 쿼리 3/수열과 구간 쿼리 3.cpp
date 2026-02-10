#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    for (int i = 0; i < queries.size(); i++)
    {
        int idx1 = queries[i][0];
        int idx2 = queries[i][1];
        
        swap(arr[idx1], arr[idx2]);
    }
    
    return arr;
}