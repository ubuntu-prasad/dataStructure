#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string>

using namespace std;

struct node
{
  int userId;
  string userName;
  node* next;
};

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
void deleteFromLinkedList(node **head) {
  /* code */
  //This function delete last node from list
  node *p, *q;

  if(*head == NULL)
      cout << "list is empty..." << endl;

  if((*head) -> next == NULL)
  {
    p = *head;
    *head = NULL;
    free(p);
    cout << "element deleted successfully..." << endl;
  }

}

int main(int argc, char const *argv[]) {

  node   *head;
  int    userId, i, j, ch;
  char   choice;
  string userName;

  head = NULL;

 while(1)
 {
    cout << "=================================================" << endl;

    cout << "\n Menus For Singly Linked List Are:" << endl;
    cout << "\n\t 1. Insert In Singly Linked List \n"
        "\t 2. Delete From Singly Linked List \n"
        "\t 3. Display Singly Linked List \n"
        "\t 4. Exit From Program" << endl << endl;

    cout << "Enter your choice:";
    cin >> ch;

    switch (ch)
    {
      case 1: // Insert element in linked list /* value */:
          cout << "Enter User Id:";
          cin >> userId;

          cout << "Enter Name of User:";
          cin >> userName;

          insertInSinglyLinkedList(&head, userId, userName);
      break;

      case 2: // Delete element from linked list
          deleteFromLinkedList(&head);
      break;

      case 3: // Display Singly linked List
          displayLinkedList(&head);
      break;

      case 4: // Exit
            exit(0);
      break;

      default: //Default case if wrong choice is entered
          cout << "Please enter valid choice..." <<endl;
          break;

    }

}
return 0;
}
