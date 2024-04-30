#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct stu1{
    int age;
    string name;
    string lastname;
    int standard;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct stu1 student;
    cin>>student.age>>student.lastname>>student.name>>student.standard;
    cout<<student.age<<" "<<student.lastname<<" "<<student.name<<" "<<student.standard;
    return 0;
}