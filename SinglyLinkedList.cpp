
#include "includes.h"
#include  "SinglyLinkedList.h"

template<class T>
SinglyLinkedList<T>* SinglyLinkedList<T> :: createSinglyLinkedList(int N, T Min, T Max)
{
  assert( Max >= Min);
  head = (SinglyLinkedList*) malloc( sizeof(SinglyLinkedList));
  head->data = (T) Min + random( Max-Min);

  SinglyLinkedList* temp = head;

  for(int i=1; i<N; i++)
  {
    temp->next = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    temp->next->data = (T) Min + random(Max-Min);
    temp = temp->next;
  }

  tail = temp;
  temp->next = NULL;
  return head;
}

template <class T>
void SinglyLinkedList<T> :: deleteSinglyLinkedList( SinglyLinkedList<T>* start)
{
  if( start == NULL) return;

  if( start->next != NULL)
  {
    deleteSinglyLinkedList( start->next);
    start->next = NULL;
  }

  if( start->next == NULL)
  {
    cout << "Deleting Node: " << start->data << endl;
    free(start);
  }
  return;
}

template <class T>
void SinglyLinkedList<T> :: printSinglyLinkedList()
{
  SinglyLinkedList* temp = head;

  while( temp!=NULL && temp->next != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << temp->data << endl;
}
