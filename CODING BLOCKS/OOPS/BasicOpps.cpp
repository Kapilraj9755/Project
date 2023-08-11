#include<bits/stdc++.h>
using namespace std;

class student 
{
public :

string name ;
int age;
bool gender;

void printinfo(){

    cout << "Name = ";
    cout <<name<<endl;
     cout << "Age = ";
    cout <<age<<endl;
     cout << "Gender = ";
    cout <<gender<<endl;
}

};

int main (){

//student a;
//a.age = 22;
//a.gender = 1;
//a.name =  "Kapil";



student arr[3];
for (int i=0 ; i <3; i++){
    cin>>arr[i].name;
    cin>>arr[i].age;
    cin>>arr[i].gender;
}
for (int i=0 ; i <3; i++){

    arr[i].printinfo();
    }


    return 0;
}