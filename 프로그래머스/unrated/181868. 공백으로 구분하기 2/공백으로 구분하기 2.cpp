#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp;
    for(auto &a:my_string)
        if(a==' ')
        {
            if(temp == "")
                continue;
            answer.push_back(temp);
            temp = "";
        }
        else
            temp+=a;
    if(temp!="")
    answer.push_back(temp);
    return answer;
}