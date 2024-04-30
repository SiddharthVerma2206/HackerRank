#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/* 
A template basically allows you to use same vaiables , functions , methods for different data types
template<class OR namespace name_of_var_to_use_instead_of_datatypr>
the above line allows to use the specified variable instead of a inbuilt one
*/

template<class T>
class AddElements {
    public:
    T input;
    AddElements(T rec){
        input = rec;
    }
    T add(T temp){
       return  input += temp;
    }
    
   string concatenate(string rec){
      return  input += rec;
   }
};

// template <>
// class AddElements <string> {
//     string str;
//     public:
//     AddElements(string stri){
//         str=stri;
//     }
//     string concatenate(string s){
//         return str + s;
//     }
//};
int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
