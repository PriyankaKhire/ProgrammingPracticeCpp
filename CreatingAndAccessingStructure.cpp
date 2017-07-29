#include <iostream>
#include <string>
using namespace std;

//Creating a structure node.
struct node{
    int data;
    node *link;
};

int main()
{
  //Accessing the structure node.
  node *newNode = new node;
  cout<<newNode;
  return 0;
}