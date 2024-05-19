#include "list.h"


void list::insert(int index, int value){
  LinkedList::insert(index, value);

}
// index 위치에 노드를 삽입한다
  int list::get(int index){
    LinkedList::get(index);
  } // index에 위치한 노드의 값을 반환한다
  void list::remove(int index){
    LinkedList::remove(index);
  } // index에 위치한 노드를 제거하고 메모리 상에서 해제한다.

  /*void list::print(){
    LinkedList::print();
  }
  */
// TODO: List 클래스 구현 작성