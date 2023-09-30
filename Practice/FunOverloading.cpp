/*.1...Error (ambiguity problam)..because we can't take 'int' and 'float' argument in function overloding....*/

// #include <iostream>
// using namespace std;

// int sum(int a)
// {
//     return a;
// }

// float sum(float b)
// {
//     return (b);
// }

// int main()
// {
//     cout << "Value of a with int arg : " << sum(3) << endl;
//     cout << "Value of a with float arg : " << sum(3.33);

//     return 0;
// }





/*.2....Volume of 'Cylinder' & 'Ractangle'.......*/

// #include <iostream>
// using namespace std;
// #define pia 3.14

// //cylinder volume
// int volume(double r, int h)
// {
//     return (pia * r * h);
// }

// //.....Ractengle Volume...
// int volume(int l, int b, int h)
// {
//     return (l * b * h);
// }

// int main()
// {
//     cout << "Volume of Cylinder : " << volume(2.234, 3) << endl;
//     cout << "Volume of Ractangle : " << volume(2, 3, 4);

//     return 0;
// }





 /*.3....ambiguity....*/

// #include <iostream>
// using namespace std;

// void sum(int);
// void sum(int, int);

// void sum(int a)
// {
//     cout<<"Read one Argument a :"<<a<<endl;
// }

// void sum(int a=3, int b = 4)
// {
//      cout<<"Read two Argument a & b :"<<a<<" "<<b;
// }

// int main()
// {
//     //sum(2);
//     sum();
//     return 0;
// }

