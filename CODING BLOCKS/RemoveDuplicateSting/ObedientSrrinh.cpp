#include<bits/stdc++.h>
using namespace std;
bool checkstring(string input){
    if(input.length()==0) return true;

    if(input[0]=='a'){
        if(input.length()>=2 &&input.substr(1,2)=="bb"){
            return checkstring(input.substr(3));
        }
        else{
            return checkstring(input.substr(1));
        }

    }
    else{
        return false;
    }



}
int main(){
    string input;
    cin>>input;

    if(checkstring(input)) cout<<"true";
    else cout<<"false";



    return 0;
}

/*
condition
start a se hona
bb k baad a aana



*/