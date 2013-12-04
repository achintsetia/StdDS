#include "includes.h"

#include "SinglyLinkedList.cpp"

int main(int argc, char** argv)
{
  SinglyLinkedList<int>* sLL = new SinglyLinkedList<int>();

  sLL->createSinglyLinkedList(10, 0, 100);

  sLL->printSinglyLinkedList();

  sLL->deleteSinglyLinkedList(sLL->head);
  return 0;
}
