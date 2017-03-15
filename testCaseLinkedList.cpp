#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

using namespace std;

struct listNode{
  int data;
  listNode* next;
};

void insertInLinkedList(listNode *head, int position, int data)
{
  listNode *p, *q;

  p = head;

  cout << head <<endl;

}

int main(int argc, char const *argv[])
{
    listNode *head;
    int data;
    int position;

    cout << "Enter data to be inserted:" << endl;
    cin >> data;

    cout << "Insert position: ";
    cin >> position;

    cout << head << endl;
    //insertInLinkedList(head, data, position);



  return 0;
}
