#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto &a : queries)
    {
        for(int i = a[0]; i<=a[1]; i++)
            arr[i]++;
    }
    return arr;
}