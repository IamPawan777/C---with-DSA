// //.......1.string by #define......

// #include <stdio.h>
// #define A "hello World"
// int main() {
//     printf("a: %s",A);
//     return 0;
// }



//......2.size of string.....declare by chars type of array (char ch[] = "Hello";)

#include <stdio.h>
int main() {
    // string st = "PAWAN";        //error...string is not the keyword in c lang...

    //char st[3] = "PAWAN";
   //printf("Size : %s",st);     //error...chars size is too long
  
    char st[44] = "PAWAN";
    printf("\nSize : %d",sizeof(st));

    char st2[] = "PAWAN";
    printf("\nSize : %d",sizeof(st2));       // O/P = 6 (P, A, W, A, N, \0)
    return 0;
}