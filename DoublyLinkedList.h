
#ifndef _DOUBLY_LINKED_LIST_
#define _DOUBLY_LINKED_LIST_

template<class T>
struct DoublyLinkedList
{
  DoublyLinkedList* createDoublyLinkedList(int N, T Min, T Max);
  void deleteDoublyLinkedList( DoublyLinkedList* list);
  void printDoublyLinkedList() { printForwards();}
  void printForwards();
  void printBackwards();

  DoublyLinkedList* head;
  DoublyLinkedList* tail;
  DoublyLinkedList* next;
  DoublyLinkedList* prev;
  T data;
};

#endif //_DOUBLY_LINKED_LIST_
