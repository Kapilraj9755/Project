#include<bits/stdc++.h>
using namespace std;
int main (){

// syntax
priority_queue<int>pq;  // by deafult maximum heap

pq.push(4);
pq.push(-1);
pq.push(3);
pq.push(5);

// print ka kaam

while( !pq.empty()){

    cout<< pq.top()<< " ";
    pq.pop();
}


    return 0;
}

// output 5 4 3 -1