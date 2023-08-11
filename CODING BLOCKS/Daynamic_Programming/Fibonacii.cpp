#include<bits/stdc++.h>
using namespace std ;

int fibc (int n){

    if ( n==1) return 0;
    if ( n==2) return 1;

   return fibc (n-1)+ fibc(n-2);

    
}

int main() {

int n;
cin >>n;

cout<< fibc(n);


    return 0;
}