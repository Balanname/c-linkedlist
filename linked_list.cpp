#include "linked_list.h"
#include <iostream>
// 멤버 변수를 초기화한다
LinkedList::LinkedList(){
    head_ = nullptr;
    size_ = 0;
}

//메모리를 적절히 해제한다
LinkedList::~LinkedList(){
    
    Node* current = head_;
    if(current != nullptr){
        Node* deletes = current;
        current = current ->next_;
        delete deletes;
    }
}

// head 부터 순서대로 노드를 출력한다
void LinkedList::print(){

    Node* current = head_;
    if(current != head_){
        std::cout<<current->value_<<" ";
        current = current -> next_;
    }
    std::cout<<std::endl;

}

// index 위치에 노드를 삽입한다
void LinkedList::insert(int index, int value){

    if(index < 0 || index > size_) return;
    
    Node* new_node = new Node(value);
    if(index == 0){
        new_node -> next_ = head_;
        head_ = new_node;
    }
    else{
        Node* current = head_;
        for(int i = 0; i < index - 1; ++i){
            current = current ->next_;
        }
        new_node ->next_ = current ->next_;
        current -> next_ = new_node;
    }
    ++size_;

}

 // index에 위치한 노드의 값을 반환한다.
int LinkedList::get(int index){
    if(index < 0 || index > size_) return -1;

    Node* current = head_;
    for(int i = 0; i < index; ++i){
        current = current -> next_;
    }
    return current -> value_;
  }

// index에 위치한 노드를 제거하고 메모리 상에서 해제한다.
void LinkedList::remove(int index){
    if (index < 0 || index >= size_) return;

    Node* deletes = head_;
    if(index == 0){
        deletes = head_;
        head_ = head_ ->next_;
    }
    else{
        Node* current = head_;
        for(int i = 0; i < index -1; ++i){
            current = current->next_;
        }
        
        deletes = current -> next_;
        current -> next_ = deletes -> next_;
    }
    delete deletes;
    --size_;
  }
Node *head_;
int size_;

// TODO: LinkedList 클래스 구현 작성