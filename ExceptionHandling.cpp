#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

//refer to "exceptionHandling" on hackerrank
//commenting is not done

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
    try{  //try to execute this lines of code
        cout<<Server::compute(A , B)<<endl;
    } //if an exception happens catch it according to what type it is
    catch(bad_alloc& error){ //if mem allocation error
        cout<<"Not enough memory"<<endl;
    }
    catch(exception& error){ //if a is negative 
        cout<<"Exception: "<<error.what()<<endl;
    }
    catch(...){  // any other type of exception
        cout<<"other Exception"<<endl;
    }
	}
	cout << Server::getLoad() << endl;
	return 0;
}