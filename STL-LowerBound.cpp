#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,Q,reqNum,input;
    vector<int>numbers;
    cin>>N;
    for(int i=0 ; i<N ; i++){
        cin>>input;
        numbers.push_back(input);               //makes a vector with user input which should be sorted
}
cin>>Q;
while(Q--){             //runs for specified number of queries
    cin>>reqNum;
    auto it = lower_bound(numbers.begin() , numbers.end() , reqNum);  //"it" points to the first no which is !< reqNum;
   if(binary_search(numbers.begin() , numbers.end() , reqNum)){ //serches to find if number is present or not
       cout<<"Yes "<<(distance(numbers.begin() , it )+1)<<endl;  // distance gives no of index between the two parameters
   }
   else {
    cout<<"No "<<(distance(numbers.begin(), it))+1<<endl;
}
}
    return 0;
}
