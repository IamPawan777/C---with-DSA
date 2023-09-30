//.....1.const keyword.....

// #include<stdio.h>
// int main() {
//     const int pi = 3.14 ;
//     // pi = 3.14;            //error
//     const char ch = 'a';
//     const float f = 99.90003;
//     const char st[] = "hello world";
//     const int l = 0765;

//     printf("%c",pi);             //
//     printf("\n%d",ch);
//     printf("\n%f",f);
//     printf("\n%s",st);
//     printf("\n%o",l);
//     printf("\n%d",l);       //change octal to decimal

//     return 0;
// }





// //........2.const........

// #include <stdio.h>
// int main() {
//     const int a;        //garbage value stored
//     // a=99;        //error (a read-only variable)
//      //a++;
//     printf("a: %d",a);
//     return 0;
// }




// //.....another way by #define keyword....

// #include <stdio.h>
// #define A 99
// int main() {
//     int a;        //garbage value stored
//     a = 2;
//     a = A;
//     printf("a: %d",a);
//     return 0;
// }