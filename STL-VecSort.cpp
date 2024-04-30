#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    vector<int>myVec;
    int temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        myVec.push_back(temp);
    }
    sort(myVec.begin(),myVec.end());
    
    for(int i=0;i<myVec.size();i++){
        cout<<myVec[i]<<" ";
    }
    return 0;
}
