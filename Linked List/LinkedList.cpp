// /*.........1.Linked List........*/
// /*..three node(node1, node2, node3) create but not linked together..*/

// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     string data;
//     Node* next;

//     Node(string d)
//     {
//         data = d;
//         next = NULL;
//     }
// }; 
// int main()
// {
//     Node* node1 = new Node("rohit yadav");       //dynamic obj in heap
//     Node* node2 = new Node("Harry");       
//     Node* node3 = new Node("Sakshi 123");       

//     cout<<"Name : "<<node1->data<<endl;         //"->" use in pointer || [node1.data]
//    //cout<<"Address next : "<<node1->next<<endl<<endl;

//     cout<<"Name : "<<node2->data<<endl;             //like "node2.data" but pointer "node2->data"
//    //cout<<"Address next : "<<node2->next<<endl<<endl;

//     cout<<"Name : "<<node3->data<<endl;        
//   // cout<<"Address next : "<<node3->next<<endl<<endl;

// return 0;
// }





// /*......2.Linked List.......*/ 
// /*..three node(first,second, third) create linked together..*/

// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data ;
//     Node* next;
// } ;

// void print( Node* &n )           //print Node value
// {
//     while(n != NULL)
//     {
//         cout<<"-"<<n->data;
//         n = n->next;
//     }
// }

// int main()
// {
// //     Node* first = NULL;
// //     Node* second = NULL;
// //     Node* third = NULL;
 
//      Node* first = new Node ();      // dynamically allocate 3 nodes in the heap
//      Node* second = new Node ();
//      Node* third = new Node ();
 
//      first->data = 11; 
//      first->next = second;

//      second->data = 22;
//      second->next = third;

//      third->data = 33;
//      third->next = NULL;

//      print(first);

// return 0;
// }





/*.........3.Insert At Head in single linked list........*/

#include <iostream>
using namespace std;

class Node
{
    public:
    string data;
    Node* next;

    Node(string data)
    {
        this -> data = data;
        next = NULL;
    }
}; 

  void headInsert(Node* &head, string d)
    {
        Node* first = new Node(d);   //new node
        first->next=head;
        head = first;
    }

    void print(Node* &head)
    {
        Node* first = head;
        while(first != NULL)
        {
            cout<<first->data<<" ";
            first = first->next;
        }
        cout<<endl;
    }

int main()
{
    Node* node1 = new Node("rohit");       //dynamic obj in heap     
    // cout<<node1->data<<endl;     
    // cout<<node1->next<<endl;      
    
    Node* head = node1;    //head points to first node 

    print(head);
    headInsert(head, "hello");
    print(head);
    headInsert(head, "Hey!");
    print(head);

    return 0;
}








// /*.........4.Insert At Tail in single linked list........*/

// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     string data;
//     Node* next;

//     Node(string data)
//     {
//         this -> data = data;
//         next = NULL;
//     }
// };

//     void tailInsert(Node* &tail, string d)
//     {
//         Node* first = new Node(d);   //now node
//         tail->next= first;
//        tail = first;
//     }

//     void print(Node* &head)
//     {
//         Node* first = head;
//         while(first != NULL)
//         {
//             cout<<first->data<<" ";
//             first = first->next;
//         }
//         cout<<endl;
//     }

// int main()
// {
//     Node* node1 = new Node("rohit");       //dynamic obj in heap     
//     // cout<<node1->data<<endl;     
//     // cout<<node1->next<<endl;      
    
//     Node* head = node1;    //head points to first node 
//     Node* tail = node1;

//     print(head);
//     tailInsert(tail, "hello");
//     print(head);
//     tailInsert(tail, "Hey!");
//     print(head);

//     return 0;
// }