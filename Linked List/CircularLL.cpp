// /*.........1.Circular linked list using singly LL.........*/

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node* &tail){            //use do while loop only
//     Node* temp = tail;
//     do {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     while(temp != tail ); 
// }

// int main()
// {
//     Node* node1 = new Node(11);
//     Node* node2 = new Node(22);
//     Node* node3 = new Node(33);
//     Node* node4 = new Node(44);
//     Node* node5 = new Node(55);
//     Node* tail = node5;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = node5;
//     node5->next = node1;

//     print(tail);
// return 0;
// }









// /*............2.circular linked list using doubly LL.........*/

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data) {
//         this->data = data;
//         Node* next = NULL;
//         Node* prev = NULL;
//     }
// };

// void print(Node* &tail) {
//     Node* temp = tail;

//     do {
//         cout<<temp->data<<" -> ";
//         temp = temp->next;
//     }
//     while(temp != tail);
// }

// int main()
// {
//     Node* node1 = new Node(111);
//     Node* node2 = new Node(222);
//     Node* node3 = new Node(333);
//     Node* node4 = new Node(444);
//     Node* tail = node4;
//     node1->next = node2;
//     node1->prev = node4;
//     node2->next = node3;
//     node2->prev = node1;
//     node3->next = node4;
//     node3->prev = node2;
//     node4->next = node1;
//     node4->prev = node3;

//     print(tail);
//     return 0;
// }








// /*........3.Insert in circular linked list using singly LL.....*/

// #include <iostream>
// using namespace std;
 
//  class Node {
//      public:
//      int data;
//      Node* next;

//      Node(int data) {
//          this->data = data;
//          this->next = NULL;
//      }
//  };

// void print(Node* &tail) {
//     Node* temp = tail;
//     do {
//        cout<<temp->data<<"  ";
//        temp = temp->next;
//     } 
//     while (temp != tail);
//     cout<<endl;
// }

// void insertNode(Node* &tail, int key, int value) {
//     Node* temp = tail;
//     while(temp->data != key) {
//         temp = temp->next;
//     }
//     Node* node = new Node(value);
//     node->next = temp->next;
//     temp->next = node;
// }

// int main()
// {
//     Node* node1 = new Node(7);
//     Node* node2 = new Node(88);
//     Node* node3 = new Node(999);
//     Node* node4 = new Node(1111);
//     Node* tail = node4;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = node1;
//     print(tail);

//     insertNode(tail, 999, 6);
//     print(tail);

//     return 0;
// }










// /*........4.Insert in 'empty' circular linked list using singly LL.....*/

// #include <iostream>
// using namespace std;
 
//  class Node {
//      public:
//      int data;
//      Node* next;

//      Node(int data) {
//          this->data = data;
//          this->next = NULL;
//      }
//  };

//  void print(Node* tail)
//  {
//      Node* temp = tail; 
//      do {
//          cout<<temp->data<<" ";
//          temp = temp->next;
//      }
//      while (temp != tail);
//      cout<<endl;
//  }

//  void insertNode(Node* &tail, int key, int value) {
    
//     if(tail == NULL) {
//     Node* node = new Node(value);
//     tail = node;
//     node->next = node;
//     }

//     else {
//     Node* temp = tail;
//     while(temp->data != key) {
//          temp = temp->next;
//      }
//      Node* node = new Node(value);
//      node->next = temp->next;
//      temp->next = node;
//     }
  
//  }

// int main() {
//     // Node* node1 = new Node(11);
//     // Node* node2 = new Node(22);
//     // Node* node3 = new Node(33);
//     // Node* tail = node3;
//     // node1->next = node2;
//     // node2->next = node3;
//     // node3->next = node1;

//     Node* tail = NULL;
//     insertNode(tail, 1, 77);
//     insertNode(tail,77, 66);
//     insertNode(tail,66, 55);
//     insertNode(tail,77, 55);
//     print(tail);
// return 0;
// }







// /*.........5.Insert in circular linked list using Doubly LL........*/


// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(Node* &tail) {
//     Node* temp = tail;
//     do {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     while(temp != tail);
// }

// void insertNode(Node* &tail, int key, int value) {
//     Node* temp = tail;
//     while(temp->data != key) {
//         temp = temp->next;
//     }
//     Node* node = new Node(value);
//     node->next = temp->next;
//     node->prev = temp;
//     temp->next = node;
//     temp->next->prev = node;
// }

// int main()
// {
//     Node* node1 = new Node(11);
//     Node* node2 = new Node(22);
//     Node* node3 = new Node(33);
//     Node* tail = node3;
//     node1->prev = node3;
//     node1->next = node2;
//     node2->prev = node1;
//     node2->next = node3;
//     node3->prev = node2;
//     node3->next = node1;

//     print(tail);
//     return 0;
// }









// /*.........6.Insert in empty circular linked list using Doubly LL........*/

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int d) {
//         this->data = d;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print(Node* &tail) {
//     Node* temp = tail;
//     do {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     while(temp != tail);
//     cout<<endl;
// }

// void insertNode(Node* tail, int key, int value) {
//     if(tail == NULL) {
//         Node* node = new Node(value);
//         tail = node;
//         node->next = node;
//         node->prev = node;
//     }
//     Node* temp = tail;
//     while(temp->data != key) {
//         temp = temp->next;
//     }
//     Node* node = new Node(value);
//     node->prev = temp;
//     node->next = temp->next;
//     temp->next = node;
//     temp->next->prev = node;
// }

// int main()
// {
//     Node* node1 = new Node(11);
//     Node* node2 = new Node(22);
//     Node* node3 = new Node(33);
//     Node* node4 = new Node(44);
//     Node* tail = node4;
//     node1->prev = node4;
//     node1->next = node2;
//     node2->prev = node1;
//     node2->next = node3;
//     node3->prev = node2;
//     node3->next = node4;
//     node4->prev = node3;
//     node4->next = node1;
//     print(tail);

//     insertNode(tail,44, 7);
//     print(tail);
//     insertNode(tail,44, 8);
//     print(tail);

// return 0;
// }








// /*............7.delete node in circuler linked list non empty (singly LL).........*/

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node() {
//         int value = this->data;
//         cout<<"Delete value : "<<value<<endl;
//     }
// };

// void print(Node* &tail) {
//     Node* temp = tail;
//     do {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     while (temp != tail);
//     cout<<"\n";
// }

// void deleteNode(Node* &tail, int value) {
//     Node* previous = tail;
//     Node* curr = previous->next;
//     while(curr->data != value) {
//         previous = curr;
//         curr = curr->next;
//     }
//     previous->next = curr->next;
//     curr->next = NULL;
//     delete curr;
// }

// int main()
// {
//     Node* node1 = new Node(11);
//     Node* node2 = new Node(22);
//     Node* node3 = new Node(33);
//     Node* node4 = new Node(44);
//     Node* tail = node4;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = node1;

//     print(tail);
//     deleteNode(tail, 22);       //44 not deleted
//     print(tail);

// return 0;
// }










// /*............8.delete node in circuler linked list (singly LL) empty node & one node & two node.........*/

// #include <iostream>
// using namespace std;
 
// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node() {
//         int value = this->data;
//         cout<<"Delete Node : "<<value<<endl;
//     }
// };

// void print(Node* &tail) {
//     Node* temp = tail;
    
//     if(tail == NULL){
//         cout<<"now empty list... ";
//         return;
//     }

//     do {
//         cout<<temp->data<<"  ";
//         temp = temp->next;
//     }
//     while(temp != tail);
//     cout<<endl;
// } 

// void deleteNode(Node* &tail, int value) {
//     Node* previous = tail;
//     Node* current = previous->next;
//     if(tail == NULL) {                  //emply list
//         cout<<"List is empty..."<<"\n";
//         return;
//     }
//     else {                  //non empty
//         while(current->data != value) {
//             previous = current;
//             current = current->next;
//         } 
//         previous->next = current->next;
//         if (current == previous){       // 1 node LL
//             tail = NULL;
//         }
//        if(tail == current) {      // >2 node LL
//             tail = previous;           //or tail = current->next
//         }
//         current->next = NULL;
//         delete current;
//     }
// }

// int main()
// {
//     // Node* node1 = new Node(11);
//     // Node* node2 = new Node(22);
//     // Node* node3 = new Node(33);
//     // Node* node4 = new Node(44);
//     // Node* tail = node1;
//     // node1->next = node2;
//     // node2->next = node3;
//     // node3->next = node4;
//     // node4->next = node1;

//     Node* node1 = new Node(11);
//     node1->next = node1;
//     Node* tail = node1;

//     print(tail);
//     deleteNode(tail,11);
//     print(tail);
//     return 0;
// }


