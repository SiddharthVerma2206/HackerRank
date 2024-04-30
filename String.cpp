#include<iostream>
using namespace std;
int main(){
    int i=0;
    string a , b;
    cin>>a>>b;
   
    for (int n  : a)
    {
        i++;
    }
    cout<<i;
    i=0;
    for (int n  : b)
    {
        i++;
    }
    cout<<" "<<i;
   
    cout<<"\n"<<a<<b<<endl;

    char temp = a[0];
    a[0]=b[0];
    b[0]=temp;

    cout<<a<<" "<<b;
return 0;
}
