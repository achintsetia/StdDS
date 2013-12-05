#include "includes.h"

#include "DoublyLinkedList.cpp"

int main(int argc, char** argv)
{
  DoublyLinkedList<int>* dLL = new DoublyLinkedList<int>();

  dLL->createDoublyLinkedList(10, 0, 100);

  dLL->printDoublyLinkedList();

  dLL->printBackwards();

  dLL->deleteDoublyLinkedList(dLL->head);
  return 0;
}
