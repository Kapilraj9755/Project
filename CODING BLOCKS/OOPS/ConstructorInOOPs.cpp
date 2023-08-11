#include<bits/stdc++.h>
using namespace std;

class student 
{
public :

string name ;
int age;
bool gender;

// constructor
// Default constructor
student(){
    cout << "  default consturctor"<<endl;
}
// perametrized consturcter

student(string s, int a, int g){
    cout << "perametrized consturcter"<<endl;
   name = s;
   age = a;
   gender = g;
}

// copy consturctor

student (student &a){
    cout << "copy consturcter" <<endl;
name = a.name;
age =a.age;
gender =a.gender;

}

// destructor  automatic call hoga
~student(){
    cout <<" destructor call" <<endl;
}

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

student a("kapil",20,10);
a.printinfo();

student b;  // default constructor

student c = a ; // copy constuctor ya bhi lik skte he student c(a);
    return 0;
}