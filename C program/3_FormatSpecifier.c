// //1. use of <limits.h> header file 

// #include<stdio.h>
// #include<limits.h>       //range in char, int, long short, unsigned int etc....
// #include<float.h>       // range in float, double and long double...

// int main(void) {
//     printf("\nNumber of bit in Byte:%d",CHAR_BIT);

//     printf("\nmax :%d",INT_MAX);
//     printf("\nmin :%d",INT_MIN);
//     printf("\nunsignd :%u\n",UINT_MAX);

//     printf("\nchar max :%d",CHAR_MAX);
//     printf("\nCHAR min :%d",CHAR_MIN);
//     printf("\nUNSIGNED :%u\n",UCHAR_MAX);

//     printf("\nshort max :%d",SHRT_MAX);
//     printf("\nshort min :%d",SHRT_MIN);
//     printf("\nunsignd short :%u\n",USHRT_MAX);

//     printf("\nLONG MAX :%d",LONG_MAX);
//     printf("\nLONG min :%d",LONG_MIN);
//     printf("\nunsignd :%u\n",ULONG_MAX);

//     printf("\nlong long max :%d",LLONG_MIN);    //very very long range so not store in %d formate specifier
//     printf("\nlong long min :%d",LLONG_MAX);       //very very long range so not store in %d formate specifier
//     printf("\nunsignd long long :%u\n",ULLONG_MAX);

//     printf("\nfloat min :%.4e",FLT_MIN);
//     printf("\nfloat max :%.18e\n",FLT_MAX);

//     printf("\nDouble min :%.10e",DBL_MIN);
//     printf("\nDouble max :%.19e\n",DBL_MAX);

//     printf("\nlong Double max :%.7e\n",LDBL_MAX);


//     // print/f("%lf",sizeof(long double ));
//     return 0;
// }






//..........2.different formate specifier..........

#include <stdio.h>
int main (){
    int a = 80;
    printf("a: %d",a);
    printf("\na: %c",a);

    int b = 1;
    printf("\nb: %c",b);            //char form. speci.

    //0x totally depands on formate specifier not depands on value (0x23, 0X23)....
    int c = 0xA;            //hexadecimal number
    int d = 0xEA;            //hexadecimal number (14*16^1 + 10*16^0)
    int e = 0XA;
    int f = 0xD129;         //(13*16*16*16 + 1*16*16 + 2*16 + 9*1)
    printf("\nc: %d",c);
    printf("\nc: %x",c);
    printf("\nc: %X",c);
    printf("\nc: %f",c);
    printf("\nd: %d",d);
    printf("\nd: %X",d);
    printf("\nd: %c",d);
    printf("\ne: %d",e);
    printf("\ne: %x",e);
    printf("\nf: %d",f);

    int g = 010;         //octal no.
    int h = 0777;         //octal no. (00000777 also octal no)
    // int i = 098;           //error because (0-7), redix-8
    printf("\ng: %o",g);            
    printf("\ng: %d",g);            
    printf("\ng: %c",g);
    printf("\ng: %f",g);
    printf("\ng: %.3f",g);
    printf("\nh: %d",h);
    printf("\nh: %o",h);
    printf("\nh: %X",h);        //octal change in hexa.

    return 0;
}