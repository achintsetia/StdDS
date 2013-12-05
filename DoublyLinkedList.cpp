
#include "includes.h"
#include  "DoublyLinkedList.h"

template<class T>
DoublyLinkedList<T>* DoublyLinkedList<T> :: createDoublyLinkedList(int N, T Min, T Max)
{
  assert( Max >= Min);
  head = (DoublyLinkedList*) malloc( sizeof(DoublyLinkedList));
  head->data = (T) Min + random(Max-Min);
  head->prev = NULL;

  DoublyLinkedList* temp = head;

  for(int i=1; i<N; i++)
  {
    temp->next = (DoublyLinkedList*) malloc(sizeof(DoublyLinkedList));
    temp->next->data = (T) Min + random(Max - Min);
    temp->next->prev = temp;
    temp = temp->next;
  }

  temp->next = NULL;
  tail = temp;
  return head;
}

template <class T>
void DoublyLinkedList<T> :: deleteDoublyLinkedList( DoublyLinkedList<T>* start)
{
  if( start == NULL) return;

  if( start->next != NULL)
  {
    deleteDoublyLinkedList( start->next);
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
void DoublyLinkedList<T> :: printForwards()
{
  DoublyLinkedList* temp = head;

  while( temp!=NULL && temp->next != NULL)
  {
    cout << temp->data << " <-> ";
    temp = temp->next;
  }
  cout << temp->data << endl;
}

template <class T>
void DoublyLinkedList<T> :: printBackwards()
{
  DoublyLinkedList* temp = tail;

  while( temp!=NULL && temp->prev != NULL)
  {
    cout << temp->data << " <-> ";
    temp = temp->prev;
  }
  cout << temp->data << endl;
}
