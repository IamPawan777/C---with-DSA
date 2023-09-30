/*.............1.doubly linked list........*/

// #include <iostream>
// using namespace std;
 
// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int d)
//     {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int getLength(Node* &head)
// {
//     int length = 0;
//     //Node* temp = head;
//     while(head != NULL)
//     {
//         head = head->next;
//         length++;
//     }
//     return length;
// }

// int main()
// {
//     Node* first = new Node(10);
//     Node* head = first;
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     first->prev = NULL;
//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = NULL;

//     print(head);
//     cout<<"length : "<<getLength(head)<<endl;
// return 0;
// }









/*..........2.user friendly...........*/

// #include <iostream>
// using namespace std;
 
// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

// void getdata()
// {
//     cout<<"insert data : ";
//     cin>>data;
// }
// };

// void print(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }


// int getLength(Node* &head)
// {
//     int length = 0;
//     //Node* temp = head;
//     while(head != NULL)
//     {
//         head = head->next;
//         length++;
//     }
//     return length;
// }

// int main()
// {
//     Node* first = new Node();
//     first->getdata();
//     Node* head = first;
//     Node* second = new Node();
//     second->getdata();
//     Node* third = new Node();
//     third->getdata();
//     Node* fourth = new Node();
//     fourth->getdata();

//     first->prev = NULL;
//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = NULL;

//     print(head);
//     cout<<"length : "<<getLength(head)<<endl;
// return 0;
// }








// /*.............3.Insert at head in doubly linked list........*/

// #include <iostream>
// using namespace std;
 
// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int d)
//     {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// void insertAtHead(Node* &head, int data)
// {
//     Node* node = new Node(data);
//     node->next = head;
//     head->prev = node;
//     head = node;
// }

// int main()
// {
//     Node* first = new Node(10);
//     Node* head = first;
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     first->prev = NULL;
//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = NULL;

//     print(head);

//     insertAtHead(head, 100);
//     print(head);

//     insertAtHead(head, 200);
//     insertAtHead(head, 300);
//     print(head);
// return 0;
// }










// /*.............4.Insert at tail in doubly linked list........*/

// #include <iostream>
// using namespace std;
 
// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int d)
//     {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// void insertAtTail(Node* &tail, int d)
// {
//     Node* node = new Node(d);
//     tail->next = node;
//     node->prev = tail;
//     tail = node;
// }

// int main()
// {
//     Node* first = new Node(10);
//     Node* head = first;
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* tail = fourth;
//     first->prev = NULL;
//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = NULL;

//     print(head);

//     insertAtTail(tail, 88);
//     insertAtTail(tail, 99);
//     print(head);
// return 0;
// }











// /*.............4.Insert at mid(only) in doubly linked list........*/

// #include <iostream>
// using namespace std;
 
// class Node
// {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int d)
//     {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node* &head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// void insertAtMid(Node* &head, int position, int d)
// {
//     Node* temp = head;
//     int count = 1;
//     while(count < position-1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     Node* node = new Node(d);
//     node->next = temp->next;
//     temp->next->prev = node;
//     node->prev = temp;
//     temp->next = node;
// }

// int main()
// {
//     Node* first = new Node(10);
//     Node* head = first;
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* tail = fourth;
//     first->prev = NULL;
//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = NULL;

//     print(head);

//     insertAtMid(head, 1, 99);
//     print(head);
// return 0;
// }










// /*..........5.insert at mid, start, end in doubly linked list..........*/

// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     string data;
//     Node* next;
//     Node* prev;

//     Node(string data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void print(Node* &head)
// {
//    Node* temp = head;
//    while(temp != NULL)
//    {
//        cout<<temp->data<<"  ";
//        temp = temp->next;
//    }
//    cout<<endl;
// }

// void insertAtHead(Node* &head, string data)
// {
//     Node* node = new Node(data);
//     node->next = head;
//     head->prev = node;
//     head = node;
// }

// void insertAtTail(Node* &tail, string d)
// {
//     Node* node = new Node(d);
//     tail->next = node;
//     node->prev = tail;
//     tail = node;
// }

// void insertAtMid(Node* &head, Node* &tail, int position, string data)
// {
//     if(position == 1)           //insert head 
//     {
//         insertAtHead(head,data);
//         return;
//     }

//     Node* temp = head;          //insert Mid
//     int cnt = 1;
//     while(cnt < position-1)
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     if(temp->next == NULL)             //insert tail
//     {
//         insertAtTail(tail, data);
//         return;
//     }

//     Node* node = new Node(data);
//     node->next = temp->next;
//     temp->next->prev = node;
//     node->prev = temp;
//     temp->next = node;

// }

// int main()
// {
//     //class will be started at 11:30 onwards;
//     Node* node1 = new Node("will");
//     Node* head = node1;
//     Node* node2 = new Node("be");
//     Node* node3 = new Node("at");
//     Node* tail = node3;
//     node1->next = node2;
//     node2->prev = node1;
//     node2->next = node3;
//     node3->prev = node2;
//     node3->next = NULL;

//     print(head);
//     insertAtMid(head, tail, 1, "class");        //starting
//     insertAtMid(head, tail, 4, "started");           //mid
//     insertAtMid(head, tail, 6, "11:30");
//     insertAtMid(head, tail, 7, "onwards.");         //last
//     print(head);

//     return 0;
// }










// /*..........6.insert in empty linked-list at mid, start, end..........*/

// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void print(Node* &head)
// {
//    Node* temp = head;
//    while(temp != NULL)
//    {
//        cout<<temp->data<<"  ";
//        temp = temp->next;
//    }
//    cout<<endl;
// }

// void insertAtHead(Node* &head, Node* &tail, int data)
// {
//     if(head == NULL && tail == NULL)                //emply list
//     {
//         Node* node = new Node(data);
//         head = node;
//         tail = node;
//     }
//     else
//     {
//     Node* node = new Node(data);
//     node->next = head;
//     head->prev = node;
//     head = node; 
//     }
// }

// void insertAtTail(Node* &tail, Node* &head, int d)
// {
//     if(head == NULL && tail == NULL)
//     {
//         Node* node = new Node(d);
//         tail = node;
//         head = node;
//     }
//     else
//     {
//     Node* node = new Node(d);
//     tail->next = node;
//     node->prev = tail;
//     tail = node;
//     }
// }

// void insertAtMid(Node* &head, Node* &tail, int position, int data)
// {
//     if(position == 1)           //insert head 
//     {
//         insertAtHead(head, tail, data);
//         return;
//     }

//     Node* temp = head;          //insert Mid
//     int cnt = 1;
//     while(cnt < position-1)
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     if(temp->next == NULL)             //insert tail
//     {
//         insertAtTail(tail, head, data);
//         return;
//     }

//     Node* node = new Node(data);
//     node->next = temp->next;
//     temp->next->prev = node;
//     node->prev = temp;
//     temp->next = node;

// }

// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtHead(head, tail, 11);
//     print(head);
//     cout<<"Head : "<<head->data<<endl;
//     cout<<"tail : "<<tail->data<<endl;
//     insertAtHead(head, tail, 22);
//     print(head);
//     cout<<"Head : "<<head->data<<endl;
//     cout<<"tail : "<<tail->data<<endl;
    
//     insertAtTail(tail,head,33);
//     insertAtTail(tail,head,44);
//     print(head);
//     cout<<"Head : "<<head->data<<endl;
//     cout<<"tail : "<<tail->data<<endl;

//     insertAtMid(head, tail, 1, 100);        //starting
//     insertAtMid(head, tail, 4, 200);           //mid
//     insertAtMid(head, tail, 7, 300);         //last
//     print(head);

//     cout<<"Head : "<<head->data<<endl;
//     cout<<"tail : "<<tail->data<<endl;

//     return 0;
// }







/*.........7.Delete node in Doubly linked List........*/

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        cout<<"Delete node : "<<value<<endl;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<"\n";    
}

void deleteNode(Node* &head, int position) {
    Node* current = head;
    Node* previous = NULL;
    if(position == 1) {    
        current->next->prev = NULL;
        head = current->next;
        current->next = NULL;
        delete current;
    }
    else {
        int count = 1;
        while(count < position) {
            previous = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main()
{
    Node* node1 = new Node(11);
    Node* head = node1;
    Node* node2 = new Node(22);
    Node* node3 = new Node(33);
    Node* node4 = new Node(44);
    // Node* tail = node4;
    node1->prev = NULL;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = NULL;
    print(head);

    deleteNode(head, 4);
    print(head);

    return 0;
}





// /*.........8.Delete Node in doubly linkde-list........*/

// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data)
//     {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         // int val = this->data;
//         // if(next != NULL)
//         // {
//         //     delete next;
//         //     next = NULL;
//         // }
//         cout<<"delete : "<<this->data<<endl;
//     }
// };

// void print(Node* &head)
// {   
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     cout<<"\n";
// }

// void insertAtHead(Node* &head, Node* &tail, int data)
// {
//     if(head == NULL || tail == NULL)
//     {
//         Node* node = new Node(data);
//         head = node;
//         tail = node;
//     }
//     else
//     {
//         Node* node = new Node(data);
//         node->next = head;
//         head->prev = node;
//         head = node;
//     }
// } 

// void insertAtTail(Node* &tail, Node* &head, int data)
// {
//     if(tail == NULL || head == NULL)
//     {
//         Node* node = new Node(data);
//         tail = node;
//         head = node;
//     }
//     else
//     {
//         Node* node = new Node(data);
//         tail->next = node;
//         node->prev = tail;
//         tail = node;
//     }
// }
  
// void insertAtMid(Node* &head, Node* &tail, int position, int data)
// {
//     if(position == 1)
//     {
//         insertAtHead(head, tail, data);
//         return;
//     }

//     Node* temp = head;
//     int count = 1;
//     while(count < position-1)
//     {
//         temp = temp->next;
//         count++;
//     }

//     if(temp->next == NULL)
//     {
//         insertAtTail(tail, head, data);
//         return;
//     }

//     Node* node = new Node(data);
//     node->next = temp->next;
//     temp->next->prev = node;
//     node->prev = temp;
//     temp->next = node;
// }

// void deleteNode(Node* &head, int position)
// {
//     /*delete node from head*/
//     Node* previous = NULL;             
//     Node* current = head;
//     if(position == 1)               
//     {
//         current->next->prev = NULL;
//         head = current->next;
//         current->next = NULL;
//         delete current;
//     }
//     else
//     {
//         /*delete node from tail & middle*/
//         int count = 1;
//         while(count < position)
//         {
//             previous = current;
//             current = current->next;
//             count++;
//         }
//        current ->prev = NULL;
//        previous->next = current->next;
//        current ->next = NULL;
//     //    current->next->prev = previous;
//        delete current;
//     }
// }

// int main()
// {
// //     Node* node1 = new Node(9);
// //     Node* head = node1;
// //     Node* node2 = new Node(8);
// //     Node* tail = node2;
// //     node1->prev = NULL;
// //     node1->next = node2;
// //     node2->prev = node1;
// //     node2->next = NULL;
// //     print(head);

//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtHead(head, tail, 10);
//     insertAtHead(head, tail, 20);
//     print(head);

//     insertAtTail(tail, head, 11);
//     print(head);

//     insertAtMid(head, tail, 3, 1);
//     print(head);

//     deleteNode(head, 2);
//     print(head);
//     cout<<"head : "<<head->data<<" Tail : "<<tail->data<<endl<<endl;

//     return 0;
// }