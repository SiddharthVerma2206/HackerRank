#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Workshops {
    int starttime , endtime , duration;    
};


struct Available_Workshops{
    int N;
         vector<Workshops>works;
     Available_Workshops(int n){
         works=vector<Workshops>(n);
         N=n;
     }
};

bool ascending(Workshops &w1 , Workshops &w2){
    return w1.endtime<w2.endtime;
}

 Available_Workshops* initialize (int start_time[], int duration[], int n){
     Available_Workshops* inptr = new Available_Workshops(n);
     for(int i =0 ; i<n ; i++){
         inptr->works[i].starttime = start_time[i];
         inptr->works[i].duration = duration[i];
         inptr->works[i].endtime = start_time[i] + duration[i];
     }
     
     sort(inptr->works.begin() , inptr->works.end() , ascending);
     return inptr;
 }
int CalculateMaxWorkshops(Available_Workshops* ptr){
    int lastendtime=0 , max = 0 ;
    for(int i= 0 ; i<ptr->N ; i++){
        if(ptr->works[i].starttime >= lastendtime){
            max++;
            lastendtime= ptr->works[i].endtime;    
        }
    }
    return max;
}


int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}