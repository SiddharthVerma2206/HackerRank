#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Program to take following things as input :-
1.No. of different objects being created (how many times it'll run)
2. input 1 if new professor , else create a new student 
3. if its a professor input name ,age and publications(number)
4. otherwise input name,age and marks of a student in 6 subjects
OUTPUT:-
all the values of input and and a last value indicating which object of the class is it(first , second etc.)
*/
class Person {
    public:
    string name ;
    int age;
    virtual void getdata(){}   //virtual functions that can be overwridden by derived class' ones
    virtual void putdata(){}
};
class Professor : public  Person {
    int publications , cur_id;
    public:
    Professor(){this -> cur_id= ++id;}  //saving number of object created in cur_id
    static int id;
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
    }
};
int Professor ::id = 0;
class Student : public Person {
    int marks[6],cur_id=0;
    public:
    Student(){cur_id = ++id;}
    static int id;
    void getdata(){
        cin>>name>>age;
        for (int i=0 ; i<6 ; i++) {
            cin>>marks[i];
        }
    }
    void putdata(){
        int sum=0;
        cout<<name<<" "<<age;
        for (int i=0 ; i<6 ; i++) {
        sum += marks[i];
        }
        cout<<" "<<sum<<" "<<cur_id<<endl;
    }
};
int Student :: id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];  //pointer array containing objects of Person class

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;  //dynamically allocates memory for obj of proff. & stores pointer to it in ith locatn

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++){
        per[i]->putdata(); // Print the required output for each object.
    }
    return 0;

}
