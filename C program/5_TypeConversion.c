//......1.implicit type conversion (permotion)

// #include <stdio.h>

// int main() {
// int a = 3;
// float c = a;
// printf("c = %f",c);
//     return 0;
// }




//......2.implicit type conversion (demotion - data loss)

// #include <stdio.h>

// int main() {
// float a = 3.23f;             //float a = 3.23;
// int c = a;
// printf("c = %d",c);          //here data will be loss
//     return 0;
// }





// //.........3.implicit type conversion

// #include <stdio.h>
// int main() {
// char ch = 'F';
// int a = 'F';
// printf("c = %d", a);
//     return 0;
// }





// //..........4.implicit type conversion

// #include <stdio.h>
// int main() {
// char ch = 'F';
// int a = 10;
// double d = 12.5;
// float f = 5.5f;

// int cal1 = ch*a+d-f;
// char cal2 = ch*a+d-f;
// float cal3 = ch*a+d-f;
// double cal4 = ch*a+d-f;
// printf("c = %d", cal1);
// printf("\nc = %c", cal2);
// printf("\nc = %f", cal3);
// printf("\nc = %lf", cal4);
//     return 0;
// }






//.......5.explicit type casting

// #include <stdio.h>
// int main() {
// int a = 3, b = 10;
// float c = a;
// printf("c = %f", (int)c);
//     return 0;
// }