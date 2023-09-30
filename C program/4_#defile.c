// // ......1.#define pre-processor.....

// #include <stdio.h>   
// #define PI 3.14         //PI is Macro

// int main() {
//     int a = 10;
//     float b = a*PI;
//     printf ("%f", b);

//     return 0;
//  }





//.....2.macro should be write in capital letter

// #include <stdio.h>   
// #define a 3.14         //a is Macro

// int main() {
//    // int a = 10;     //error because a is macro
//     // char a = 12;     //error because a is macro
//     printf ("%f", a);
//     return 0;
//  }





// //........3.#define macros functions....

// #include <stdio.h>
// #define MI(a,b) (a<b)?a:b

// int main() {
//     printf("Minimum No is : %d", MI(16,44));
//     return 0;
// }





// //......4.#define  for string.....

// #include <stdio.h>   
// #define MSG "Hey...! your code would not work ?"

// int main() {
   
//     printf ("%s",MSG);

//     return 0;
//  }






// //........4.#undef precessor.........

// #include <stdio.h>   
// #define PI 3.14

// void print() {
//     int a = 22;
//     float b = a*PI;
//     printf ("print : %f",b);
// }

// #undef PI          //release PI value after use '#undef' pre-processor

// void print2() {
//     int a = 33;
//     // float PI = 3;
//     float b = a*PI;         //error or you can define PI value manually
//     printf ("\nprint2 : %f",b);
// }

// int main() {
// print();
// print2();
//     return 0;
//  }





// //.......5.'##' is use for concatinate to character

// #include <stdio.h>
// #define C 3## 44

// int main() {
//     printf("%d", C);
//     return 0;
// }







//.......6.#define also can use in multiple line but with "\" operator

#include <stdio.h>
// #define GREATER(a,b) if(a>b) printf("a is greater"); else printf("b is greater"); 
#define GREATER(a,b) \
    if(a>b)\
    printf("%d is greater %d",a,b);\
    else printf("%d is greater %d",b,a); 

int main() {
    GREATER(53,66);    
    return 0;
}