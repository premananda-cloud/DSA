#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};

node * head = NULL;

void insert_at_the_end(int num){
    node *new_node = new node;
    if(head == NULL){
        new_node->data = num;
        new_node->next = head;
        head = new_node;
        return;
    }
    else{
        node *ptr;
        ptr = head;
        while(ptr->next != NULL){
            ptr = ptr-> next;
        }
        ptr->next = new_node;
        new_node->data =  num;
        new_node->next = NULL;

    }
}

void insert_at_the_beginning(int num){
    if(head == NULL){
        node * new_node = new node;
        new_node->data = num;
        new_node->next = head;
        head = new_node;
        return;
    }
    else{
        node *new_node = new node;
        new_node->data = num;
        new_node->next = head;
        head = new_node;

    }
}


void delete_all_node(){
    node *current = head;
    while(current != NULL){
        node * temp = current;
        current = current->next;
        delete temp;
    }
    head = NULL;
}

int main(){
    int num;
    cout<<"Enter the nunber : ";
    cin>>num;
    insert_at_the_end(num);
    delete_all_node();
    return 0;

}
