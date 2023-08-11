

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> brr = {2 , 3 , 3 , 3 , 1 , 2 , 2, 5 , 5 , 5};

    int ans = 0;

    for (int bit = 0 ; bit < 32 ; bit++){
        int mask = (1 << bit); 
        int cnt = 0;
        for (auto ele : brr){
            if ((ele & mask) > 0) cnt++;
        }
        if ((cnt % 3) != 0){
           ans = ans + mask;
        }
    }
    cout << ans << endl;
    return 0;
}