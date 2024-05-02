#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

//MY Code From Here TO

class LRUCache : protected Cache{
    public :
    LRUCache(int cap){
        cp=cap;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next=tail;
        tail->prev=head;
    }
void addnode(Node* tobeadded){
    Node* temp = head->next;
    tobeadded->next = temp;
    tobeadded->prev = head ;
    head->next = tobeadded;
    temp->prev = tobeadded;
}

void deletenode(Node* tobedeleted){
    Node* delprev = tobedeleted->prev;
    Node* delnext = tobedeleted->next;
    delprev->next = delnext;
    delnext->prev = delprev;
}
    void set (int key_ , int value_) override{
        if(mp.find(key_)!= mp.end()){
            Node* existing = mp[key_];
            mp.erase(key_);
            deletenode(existing);
        }
        if(mp.size()==cp){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new Node(key_ , value_));
        mp[key_] = head->next;
    }
    
    int get(int key_)override {
        if(mp.find(key_) != mp.end()){
            Node* resultnode = mp[key_];
            int result = resultnode->value;
            deletenode(resultnode);
            addnode(resultnode);
            mp[key_]=head -> next;
            return result;
        }
        else{return -1;}
    }
};

//Here

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
