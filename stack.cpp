#include "stack.h"


void stacks::push(int data){
    LinkedList::insert(0,data);
    
} // Stack의 정의에 맞게 데이터를 삽입한다.
int stacks::pop(){
    
    int value = get(0);
    remove(0);
    return value;

} // Stack의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
int stacks::peek(){

    return get(0);

} // Stack의 정의에 맞게 다음에 pop 될 값을 미리 본다.
// TODO: Stack 클래스 구현 작성