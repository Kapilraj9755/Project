//  kisi bhi number me set bit kitni he // setbit = 1 // not setbit = 0

#include<bits/stdc++.h>
using namespace std;

int main(){
     
      int no;
      cin>> no;
    
    int setbits = 0;                 
    for (int bit = 0 ; bit < 32 ; bit++){
        int mask = (1 << bit); 
        if ((no & mask) > 0){
            setbits += 1;
        }
    }
    cout << setbits << endl;
}


