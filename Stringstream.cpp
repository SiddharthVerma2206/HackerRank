#include <sstream>
#include <vector>
#include <iostream>
#include<string>
using namespace std;

string replacestring(string str , int* ptr) {
	// Complete this function
       vector<int> processed;
    string numstr="";
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==',')    //if there is ',' here it resets the numstr string
        {
            numstr = "";
        }
        else {
            numstr = numstr + str[i];  //if not then kepps adding str characters to numstr
        }
        if(!numstr.empty() && (str[i+1]==',' || str[i+1]=='\0')) //if its not empty OR if the next char is , or end of str
            processed.push_back(stoi(numstr));     // pushes back the numstr while converting it into integer by using "stoi"
    }
    return processed;

    
}


int main() {
    int* ptr = new int(1);          //pointer for no of words in last string(streamed)
    string str;
    cin >> str;
    string integers = replacestring(str , ptr);    //recieves & stores a string in which ',' are replaced with ' '
    stringstream streamed(integers);          //stringstreams that string  
    string opt;
    while((*ptr)--){
        streamed>>opt;
        cout<<opt<<endl;                    // print individual words i.e. numbers
    }
    
    return 0;
}
