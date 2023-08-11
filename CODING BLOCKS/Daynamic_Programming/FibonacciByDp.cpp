#include<bits/stdc++.h>
using namespace std;

// recursive solution
// dp = recursion + memoization
int func(int n , vector<int> &dp){
    if (n == 1) return 0;
    if (n == 2) return 1;

    if (dp[n] != -1){
       return dp[n];
    }

    int ans = func(n-1 , dp) + func(n-2 , dp);
    // memoization - step
    dp[n] = ans;
    return ans;
}


int main(){

    int n;
    cin >> n; // 6 -> 0 1 2 3 4 5

    vector<int> dp(n+1 , -1); // n+1 se start // -1 initizial value rhaegi us me
    cout << func(n , dp) << endl;

return 0;
}
