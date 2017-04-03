//A linked list implementation in C++
#include<iostream>
using std::cout;
using std::cin;
using std::string;

template <class T>
class Node{
private:
  T data;
  Node *next;
public:
  //some public things, perhaps an accessor
}

class LinkedList{
private:
  Node head;
public:
  LinkedList(T initdata){
    Node<T> head=Node(initdata)

  }//regular constructor
  ~LinkedList(){
    //will need to walk the list and destruct all the nodes
    //It would be clever to have a node terminator send the
    //terminator message to the next node
  }//destructor
}//class LinkedList



int main(){
  cout << "What string to initialize?";
  string initdata;
  cin >> initdata;
  LinkedList sampleList(initdata);




  return 1;
}
