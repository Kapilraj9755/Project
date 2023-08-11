// arr = 20 10 11 13 14 output = 20 11 14

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
  cin>>n;
int arr[n];

for( int i = 0;   i< n ; i++){
cin >> arr[i];
}

for( int i = 0;   i< n ; i++)
if (i%2 != 1){
    cout<<arr[i] <<endl;
}
return 0;
}