// #include <iostream>
// using namespace std;

// void bubbleSort (int n, int *arr) {
//     for (int j = 0; j < n-1; j++) {
//     for(int i = 0; i < n-j-1; i++) {
//     if (arr[i] < arr[i+1]) {
//         swap(arr[i], arr[i+1]);
//     }
//     }
//     }
    
// }

// void print(int n, int *arr) {
//     cout<<"Sorted no is :";
//     for(int i=0; i < n; i++) {
//         cout<<arr[i]<<"  ";
//     }
// }

// int main()
// {
//    int n;
//    cout<<"Enter how many no : ";
//    cin>>n;
//    int arr[n];
//    cout<<"Enter Numbers : ";
//    for(int i = 0; i < n; i++)
//    {
//        cin>>arr[i];
//    }

//    bubbleSort(n,arr);
//    print(n, arr);
// return 0;
// }








#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
    }
};

void print(Node* &head) {
    Node* temp = head;
    while(temp->next != NULL) {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

// void insertAtHead(Node* &head, int data) {
//     Node* node = new Node(data);
//      node->next = head;
//      head = node;
    
// }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Node* node1 = new Node(383);
    Node* head = node1;
    Node* node2 = new Node(484);
    Node* node3 = new Node(392);
    Node* node4 = new Node(975);
    Node* node5 = new Node(321);
    
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    
    // print(head);
    // insertAtHead(head, 5);
    print(head);
    
    return 0;
}