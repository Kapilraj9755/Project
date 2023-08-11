#include<bits/stdc++.h>
using namespace std;

int main ( ) {

int n;
cin>>n;

int a=-1 ,  b=1, c;

for (int i=1;i<n;i++){

    for (int PrintWalaKaam = 0; PrintWalaKaam <= i; PrintWalaKaam++);
    {
        c = a+b;
        cout << c << " ";
        a=b;
        b=c;
    }
    cout <<endl;
    }
    return 0;
}