#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <string>

using namespace std;

struct listNode
{
    int userId;
    string userName;
    struct listNode *next;
};

/*
*   Inser Element in linked List
*/
void insertInSinglyLinkedList(node **head, int userId, string userName)
{
  cout << "User Id \t : \t\t " << userId << endl;
  cout << "User Name \t : \t\t " << userName << endl << endl;

  struct node *temp, *p;

  temp = (node *)malloc(sizeof(node));

  if (!temp)
  {
    cout << "Can't allocate memory....please try again later...." << endl;
    exit(0);
  }

  temp -> next = NULL;
  temp -> userId    = userId;
  temp -> userName  = userName;

  if(*head == NULL)
  {
      *head          =   temp;
      //*head -> next  =   NULL;
  }
  else
  {
    p = *head;

    while (p -> next != NULL)
      p = p -> next;

    p -> next = temp;

  }

  cout << "Element inserted successfully...." << endl;

}

/*
*   Display elements from linked List
*/

void displayLinkedList(node **head)
{
  node *p;

  p = *head;

  cout << "Head ";

  while(p != NULL)
  {
    cout << "\t-> | " << p -> userId << " | " << p -> userName << " |" << endl;
    p = p -> next;
  }

  cout << "\t-> NULL" << endl;

}


/*
*   find Nth node from end of Linked List function
*/

struct listNode *nthNodeFromEnd(struct listNode *head, int nthNode)
{
    struct listNode *pNthNode   =   head;
    struct listNode *pTemp      =   head;

    for(int count = 1; count < nthNode; ++count)
        if(pTemp)
            pTemp = pTemp -> next;

    while (pTemp)
    {
            if(pNthNode == NULL)
                pNthNode = head;
            else
                pNthNode = pNthNode -> next;

            pTemp = pTemp -> next;
    }

    if(pNthNode)
        return pNthNode;

return NULL;

}

int main(int argc, char const *argv[])
{

    struct listNode *head, *pNthNode;
    int             data, ch;
    char            choice = 'y';

    cout << "Enter data : " << endl;
    cin >> data;

    cout << "Enter your choice" << endl;
    cin >> ch;

    switch (ch) {
        case 1: insertInSinglyLinkedList(&head, data)
        break;

        case 1:
        break;
    }


    return 0;
}
