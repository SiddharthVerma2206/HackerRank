#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n , s ,p ,q;
    cin>>n>>s>>p>>q;
    int N= pow(2,31);
    int count=1;  
    int tortoice = s%N;
    int hare = (tortoice*p+q)%N;
    int hare_1,hare_2;
    while(tortoice!=hare){
        if(count==n){
            break;
        }
        tortoice= (tortoice*p+q)%N;
        hare_1 = (hare * p + q) % N;
        hare_2 = (hare_1 * p + q) % N;
        
        hare = hare_2;
        count++;
    }
    if(hare_1==hare_2){count-=1;}
    cout<<count;
    return 0;
}
