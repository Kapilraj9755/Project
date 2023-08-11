// kisi bhi digit ko add kr k use ek banana example 
// 56 = 5+6=11 , 1+1=2 
//output is 2

#include<bits/stdc++.h>
using namespace std;

int adddigit(int n){
    if(n<10) return n;

    int sum=0;
    while(n){
        sum=sum+n%10;
        n=n/10;
    }

    return adddigit(sum);

}
int main(){
    int n;
    cin>>n;
    int ans=adddigit(n);
    cout<<ans<<endl;
    


    return 0;
}