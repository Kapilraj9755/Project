#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n; // 6 -> 0 1 2 3 4 5

   // tabulation dp , iterative dp
    vector<int> TDP(n+1 , -1);
    TDP[0] = 0;
    TDP[1] = 1;

    for (int i = 2 ; i <= n ; i++){
        TDP[i] = TDP[i-1] + TDP[i-2];
    }

    cout << TDP[n] << endl;
    return 0;
}