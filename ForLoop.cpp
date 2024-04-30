#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b,i;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cin>>b;
    for (i=a; i<=b; i++) {
        if(i<=9){
        cout<<arr[i-1];
        }
        
        else if (i>9 && i%2==0) {cout<<"even";}
        else if (i>9 && i%2!=0) {cout<<"odd";}
        cout<<"\n" ;   
    }
    return 0;
}
