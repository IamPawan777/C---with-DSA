// #include<iostream>
// using namespace std;

// int strlen(char arr[]) {
//     int i = 0 ;
//     while (arr[i] != '\0')
//     {
//         i++;
//     }
//     return i;
    
// }

// int main() {  
//     char ch[] = "Pawan";
//     cout<<strlen(ch);
//     return 0;
// }





#include<iostream>
using namespace std;
    void print(int a) {
        (a%2==0)?cout<<"Even":cout<<"Odd";
    }
int main() {  
    int a = 10;
    cout<<"Enter no: ";
    cin>>a;
    print(a);
    return 0;
}