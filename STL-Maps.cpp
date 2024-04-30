#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

/* code to do specific operations on a map for N no of times
    map<data_type of key , data_type of value>name_of_map
    maps have unique and sorted keys 
*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string , int>Students;
    int Q , T , inNum;
    string key;
    cin>>Q;
    while(Q--){
        cin>>T;
        switch(T){
            case 1 :
            cin>>key>>inNum;
            Students[key]=inNum + Students[key]; //using name_map[key] we can acess the data at the key
            break;
            case 2 :
            cin>>key;
            Students.erase(key);//erases the data at the specified key
            break;
            case 3 :
            cin>>key;
            if(Students[key]==0){
                cout<<0<<endl;
            }
            else{cout<<Students[key]<<endl;}
            break;
    }
    }
    return 0;
}
