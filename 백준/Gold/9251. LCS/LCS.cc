#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
string str1, str2;

void DynamicPrograming(){
    for(int i = 1; i <= str1.size(); i++){
        for(int j = 1; j <= str2.size(); j++){
            if(str1[i-1] == str2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
}

int main(){
    cin >> str1 >> str2;
    DynamicPrograming();
    cout << dp[str1.size()][str2.size()];
}