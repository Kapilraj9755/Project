/* pattern question
_ _ _ _ 1 _ _ _ _
_ _ _ 1 2 1 _ _ _ 
_ _ 1 2 3 2 1 _ _
_ 1 2 3 4 3 2 1 _ 
1 2 3 4 5 4 3 2 1    
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
  cin>>n;

for( int row = 1; row <= n ; row++){
// spaces
for( int space = 1; space <= n-row ; space++){
cout<<" "; }

// increasing number
for ( int inc = 1; inc <= row; inc++) {
     cout << inc;}
// decreasing no.

for (int dec = row-1; dec>=1; dec--  ){
    cout<<dec;
}
cout<< endl;
}

return 0;
}