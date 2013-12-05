
#ifndef _SINGLY_LINKED_LIST_
#define _SINGLY_LINKED_LIST_

template<class T>
struct SinglyLinkedList
{
  SinglyLinkedList* createSinglyLinkedList(int N, T Min, T Max);
  void deleteSinglyLinkedList( SinglyLinkedList* list);
  void printSinglyLinkedList();

  SinglyLinkedList* head;
  SinglyLinkedList* tail;
  SinglyLinkedList* next;
  T data;
};

#endif //_SINGLY_LINKED_LIST_
