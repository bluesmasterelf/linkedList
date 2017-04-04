//A linked list implementation in C++
#include<iostream>
//#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

//template <class T>
struct node{
  //T data;
  string data;
  node *next;
};

class LinkedList{
private:
  node *head;
  int length;
//  node tail;//one way of speeding up push
public:

  LinkedList(){
    node* head = NULL;
  }

  void addNode(string data){
    node* nodePointer = new node;
    nodePointer->next=head;
    nodePointer->data=data;

    head=nodePointer;
    length++;
  }

  void printList(){
    node *tempptr;
    tempptr=head;
    for (int i=0; i<length; i++){
      cout << tempptr->data << endl;
      tempptr= tempptr->next;
    }
    //delete tempptr; ??
  }

  ~LinkedList(){
    node *tempptr=new node;
    tempptr=head;
    for (int i=0; i<=length; i++){
      delete tempptr;
      tempptr=tempptr->next;  //bad practice, don't call a deleted pointer
    }
  }//destructor

}; //class LinkedList

int main(){
  cout << "What string for node 1?";
  string initdata;
  cin >> initdata;
  LinkedList sampleList;
  sampleList.addNode(initdata);

  string moredata;
  cout << "What string for node 2?";
  cin >> moredata;
  sampleList.addNode(moredata);

  sampleList.printList();

  node* testNode=new node;
  testNode->data="test word";
  testNode->next=NULL;

  cout << testNode->data << endl;

  delete testNode;

  node* overwrite=new node;
  overwrite->data="sufficient to delete test word.";
  overwrite->next=NULL;
  cout << testNode->data << endl;


  return 0;
}
