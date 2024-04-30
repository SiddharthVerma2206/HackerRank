#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student {
    int age,code;
      string name , last;
    public:
    void setage(){cin>>age;};
    void setname(){cin>>name;};
    void setlast(){cin>>last;};
    void setcode(){cin>>code;};
    
    void getage(){cout<<age;};
    void getname(){cout<<name;};
    void getlast(){cout<<last;};
    void getcode(){cout<<code;};
    
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      
      student s1;
      s1.setage();
      s1.setname();
      s1.setlast();
      s1.setcode();
      
      s1.getage();
      cout<<"\n";
      s1.getlast();
      cout<<", ";
      s1.getname();
      cout<<"\n";
      s1.getcode();
      cout<<"\n";
      cout<<"\n";
      
      s1.getage();
      cout<<",";
      s1.getname();
      cout<<",";
      s1.getlast();
      cout<<",";
      s1.getcode();
      
      
    return 0;
}
