
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
   
    map<string , string >attrmap;
    vector<string>tags;

void intomap(string& name , string& value){
    string temp;
    for(int i=0 ; i<tags.size(); i++){
        temp+=tags[i]+".";
    }
        temp.pop_back();
        temp+= "~" + name;
        attrmap[temp]= value;

    //  for(string & str : tags){
    //     temp += str + ".";
    //        }      //tag1.tag2.
    // temp.pop_back();        //tag1.tag2
    // temp += "~" + name;     //tag.tag2~name
    // attrmap[temp] = value;    
     
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int inpLine , Q;
    cin>>inpLine>>Q;
     for(int i = 0; i < inpLine; ++i){
        char l;
        cin>>l;
        if(cin.peek()=='/'){
            string waste ; cin>>waste;
            tags.pop_back();
        }
        else{
            string input;
            cin>>input;
            
            if(input.back()=='>'){
                input.pop_back();
                tags.push_back(input);                
            }
            else{
                tags.push_back(input);                
                for( ; ; ){
                    string atrName , sign , atrVal;
                    cin>>atrName>>sign>>atrVal;
                    if(atrVal.back()=='>'){
                        atrVal.pop_back();
                        atrVal.pop_back();
                        atrVal=atrVal.substr(1);
                        intomap(atrName , atrVal);
                        break;
                    }
                    else{
                        atrVal.pop_back();
                        atrVal=atrVal.substr(1);
                        intomap(atrName , atrVal);
                    }
                }
            }
        }
    }
    for(int i =0 ; i<Q ; ++i){
        string input;cin>>input;
        if(attrmap.find(input) != attrmap.end()){
            cout<<attrmap[input]<<endl;
        }
        else{cout<<"Not Found!"<<endl;}
    }
    return 0;
}

