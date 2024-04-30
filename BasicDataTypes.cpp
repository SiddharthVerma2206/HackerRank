#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin>>a>>b>>c>>d>>e;
    
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout << setprecision(3) << fixed << d;
    cout <<"\n" << setprecision(10) << fixed << e;
    return 0;
}