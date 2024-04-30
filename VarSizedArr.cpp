#include<iostream>
using namespace std;

int main(){
    int narr,narg,t=0;
    cin>>narr>>narg;
    int* arr[narr];
    while(narr--){
        int num;
        cin>>num;
        arr[t]=new int[num];
        for (int i = 0; i < num; i++)
        {
            cin>>arr[t][i];
        }
        t++;
    }
    while(narg--)
    {
       int a , b;
       cin>>a>>b;
       cout<<arr[a][b]<<endl;
    }
    
return 0;
}