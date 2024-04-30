/*
takes input as 
1. no of times you want to run the code 
2. size of the array
3. how many numbers you want to compare at a time to get the max of the compared no.
4. input the array 
OUTPUt:-
gives you the biggest element between the compared from the array
*/
#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int &n, int& k){
    //Write your code here.
    deque<int>dequee(arr , arr+k);   //makes a deque and initializes values from arr0 to required size
    for(int i =  0 ;i<(n-k+1) ; i++){  //runs loop for the times required 
        cout<<*(max_element(dequee.begin() , dequee.end()))<<" "; //outputs the maximum element of the deque
        dequee.push_back(arr[i+k]);    //adds the next element from the aray at the end
        dequee.pop_front(); // removes an element from the front
        }
        cout<<endl;
    }

int main(){
  
	int t;
	cin >> t;  //no of times to run the code
	while(t>0) {
		int n,k;
    	cin >> n >> k; // n - size of the array , k- no of elements to be compared at a time 
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}