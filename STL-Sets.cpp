#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int>numbers;        //creates a integer set named numbers
    int Q,t,query;
    cin>>Q;                 //takes in no. of queries
    while(Q--){
        cin>>t>>query;      //takes in type of and the query
        switch (t) {
                case 1 : numbers.insert(query);   //adds an element to set 
                break;
                case 2 : numbers.erase(query);    //removes the specified element from the set 
                break;
                case 3 :
                set<int> :: iterator itr = numbers.find(query);   // sets itr to iterate set and find "query"
                 if(itr != numbers.end()){            //if "query" is not in there it returns "numbers.end()"
                     cout<<"Yes"<<endl;
                 }
                 else{cout<<"No"<<endl;}
                 break;
        }
    } 
    return 0;
}
