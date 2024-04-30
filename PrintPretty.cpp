#include <iostream>
#include <iomanip> 
using namespace std;


int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase); //sets the outputs from here on out to uppercase   
	cout << setw(0xf) << internal;       //sets the width of padding of the next output to 15 (0xF in hexa is 15)  
	//we dont need these 2 lines above
	while(T--) {
		double A; cin >> A;   
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
   long long a=A;
       cout<<resetiosflags(std::ios::uppercase)<<setw(0)<<"0x"<<hex<<a<<endl;
	//first op should be hexa of A 
	  cout << right << fixed << setw(15)  << showpos << setprecision(2) << setfill('_') << B << endl;
	//adds padding of _ to make total o/p of 15 characters including just 2 no. after decimal
	//showpos -> adds a sign to the outputting number
	   cout<<noshowpos<<setprecision(9)<<fixed<<uppercase<<scientific<<C<<endl;
	//removes the showpos from before and makes the O/P scientific 
	}
	return 0;

}