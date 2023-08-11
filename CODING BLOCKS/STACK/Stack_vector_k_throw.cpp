#include<bits/stdc++.h>
using namespace std;

class Stack {

public :
vector<int>arr;
  int top () {
    // top element konsa he
    if (arr.size()>0){
        return arr.back();
    }
    else{
        return -1;
         }
  }
void pop (int){
    if (arr.size()>0)
    {
      arr.pop_back();
    }
}

void push (int value){
   arr.push_back(value);
    
        return;
    
}

bool empty (){

    if (arr.size()==0){
        return true;
    }
    else {
        return false;
    }
}

};

int main() {

Stack obj;
obj.push(10);
obj.push(20);
obj.push(30);

cout<<obj.top() <<endl ;  // top element aajaye ga 30

obj.pop(30); 


    return 0;
}