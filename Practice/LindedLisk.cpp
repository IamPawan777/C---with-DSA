#include <iostream>
#include <stdlib.h>

//using namespace std;
struct Node
{
    int data;
    struct Node * next; 
};

void linkedListTravers(struct Node *ptr)
{
    while(ptr!= NULL)
    { 
    std::cout<<"Element : "<< ptr->data << std::endl;
    ptr = ptr->next;
    }
   
}


int main()
{
    struct Node * head ;
    struct Node * second;
    struct Node * third ;
    struct Node * fourth ;

    //allocate memory
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    
    //link first & second node
    head->data = 7;
    head->next = second;

    //link second  & third node
    second->data = 11;
    second->next = third;

    //link third & fourth node
    third->data = 66;
    third->next = fourth;

    //link fourth & terminate
    fourth->data = 101;
    fourth->next = NULL;

    linkedListTravers(head);
    
    return 0;
}