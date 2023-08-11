#include<bits/stdc++.h>
using namespace std;
// Given a string s. Print all the possible permutations of s given that s does not contain duplicate characters.

void PrintPermutations(string s,string reserve)
{
    if(reserve=="")
    {
        cout<<s<<endl;
        return;
    }

    for(int i=0;i<reserve.size();i++)
    {
      
PrintPermutations(s+reserve[i],reserve.substr(0,i)+reserve.substr(i+1)); 
    }
}

int main() {
    string s; cin>>s;
    PrintPermutations("",s);
}


