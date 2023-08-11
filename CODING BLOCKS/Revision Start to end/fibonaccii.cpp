// fibonacci 0112358
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n; cin>>n;
 int a= -1, b = 1, c;

for (int row =1; row<=n; row++)
{
    for(int fib = 1;fib <=row ; fib++){
        c=a+b;
        cout<<c <<" ";
         a = b;
         b = c;
    }
}
return 0;
}