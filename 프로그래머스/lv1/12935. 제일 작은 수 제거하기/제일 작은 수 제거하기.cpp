#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = *min_element(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
        if(arr[i] == min)
            arr.erase(arr.begin()+i);
    if(arr.size()==0)
        arr.push_back(-1);
    return arr;
}