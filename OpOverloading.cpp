/*program to take N no of 2 matrix as input and return the addition of those matrix */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix{
    public:
  vector<vector<int>>a; 
  
  friend  Matrix operator+(Matrix& X , Matrix& Y ){
        Matrix temp;
        temp.a.resize(X.a.size());  // make temp.a {} the same size of x.a{} 
        for(int i=0 ; i<X.a.size();i++){
            temp.a[i].resize(X.a[i].size());  //make the ith element in temp.a the same size of ith element 
        }
        for(size_t  i = 0 ; i < X.a.size() ; i++){
            for(size_t  j = 0 ; j < X.a[0].size() ; j++){
                temp.a[i][j] = X.a[i][j] + Y.a[i][j];   //save addition of the two matrix into temp
            }
        }
        return temp;
  } 
      // function to take input of matrix 
      void inputmatrix (int N , int M){
          for(int i=0;i<N;i++) {
         vector<int> b;
         int num;
         for(int j=0;j<M;j++) {
            cin >> num;
            b.emplace_back(num);
         }
         a.emplace_back(b);
      }
      }
};
int main () {
   int N,k;
   cin >> N;
   for(k=0;k<N;k++) {
      Matrix x; 
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m; //takes n as rows and m as colums for matrix
      x.inputmatrix(n ,m);      
      y.inputmatrix(n ,m);      
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}