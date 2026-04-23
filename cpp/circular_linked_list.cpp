#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

node * head = NULL;

void insert_at_the_end(int num){
    if(head == NULL){
        head = new node;
        head->data = num;
        head->next = head;
        return;
    }
    else{
        node * ptr = head;
        while(ptr->next != head){
            ptr = ptr-> next;
        }
        node * temp = new node;
        temp->data = num;
        temp->next = head;
        ptr->next = temp;

    }
}

void insert_at_the_beginning(int num){
    if(head == NULL){
        node * new_node = new node;
        new_node->data = num;
        new_node->next = head;

        //last ponting to head
        node * current = head;
        while(current-> != head ){
            current = current->next;
        }
        current->next = new_node;
        new_node->head = head;
        return;
    }
    else{
        node *new_node = new node;
        new_node->data = num;
        new_node->next = head;
        head = new_node;
        //maiking last point to head

    }
}

void delete_all_node(){
    if(head == NULL){
        return;
    }
    node *current = head;
    while(current->next != head){
        node * temp = current;
        current = current->next;
        delete temp;
    }
    head = NULL;
    delete current;
}

int main(){
    int num;
    cout<<"Enter the nunber : ";
    cin>>num;
    insert_at_the_end(num);
    delete_all_node();
    return 0;

}
