#include "queue.h"


void  Queue::push(int data){
    insert(size_, data);
} // Queue의 정의에 맞게 데이터를 삽입한다.
  int Queue::pop(){
    int value = get(0);
    remove(0);
    return value;

  } // Queue의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
  int Queue::peek() {

    return get(0);


  } // Queue의 정의에 맞게 다음에 pop 될 값을 미리 본다.
  Queue& Queue::operator +=(int data){
    push(data);
    return *this;
  }

// TODO: Queue 클래스 구현 작성