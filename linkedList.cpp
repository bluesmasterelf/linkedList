//A linked list implementation in C++
#include<iostream>
//#include<string>
using std::cout;
using std::cin;
using std::string;

//template <class T>
struct node{
  //T data;
  string data;
  node *next;

  node(string initdata){
    data=initdata;
  }//regular constructor; or just set from outside?
  node(){
    data="";
    
  }
};

class LinkedList{
private:
  node head;
  node tail;//one way of speeding up push
public:
  LinkedList(string initdata){
    head.data=initdata;

  }//regular constructor
  ~LinkedList(){
    //will need to walk the list and destruct all the nodes.
    //It would be clever to have a node terminator send the
    //terminator message to the next node
  }//destructor
}; //class LinkedList



int main(){
  cout << "What string to initialize?";
  string initdata;
  cin >> initdata;
  LinkedList sampleList(initdata);




  return 1;
}
