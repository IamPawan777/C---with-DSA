// //.....1.template function..use for any type of data values can store in arg list......

// #include <iostream>
// using namespace std;
//     // int print(int a, int b) {
//     template <class X> X print(X a, X b) {            //X = placeholder(generalised type)
//         if(a>b) {
//             return a;
//         }
//         else {
//             return b;
//         }
//     }
//     int main() {
//         cout<<"int: "<<print(55, 77)<<endl;
//         cout<<"float: "<<print(221.2f, 34.3f)<<endl;
//         cout<<"char: "<<print('C', 'A')<<endl;
//     return 0;
//     }






// //.....2.template function.......

// #include <iostream>
// using namespace std;
//     template <class X, class Y> X bigger(X a, Y b) {            //X & Y = placeholder(generalised type)
//         if(a>b) {
//             return a;
//         }
//         else {
//             return b;
//         }
//     }
//     int main() {
//         cout<<"float: "<<bigger(371.2f, 311)<<endl;
//         cout<<"char: "<<bigger( 69,'C')<<endl;
//     return 0;
//     }






// //.........3.without template class..............

// #include <iostream>
// using namespace std;
//     class Demo {
//         private:
//         struct ControlBlock {
//             int capacity;
//             int *arr;
//         };
//         ControlBlock *s;                        //pointer of struct (->) but for object(.)

//         public:
//         Demo(int capacity) {
//             s = new ControlBlock();             //obj of struct
//             s->capacity = capacity;
//             s->arr = new int(s->capacity);              //arr[capacity]   here dynamically
//         }
         
//         void addElement(int index, int data) {
//             if(index>=0 && index<=s->capacity-1) 
//                 s->arr[index] = data;
//             else
//                 cout<<"Array index not valid"<<endl;
//         }

//         void viewElement() {
//             for (int i=0;  i<s->capacity;  i++)
//                 cout<<" "<<s->arr[i];       
//         }   
//     };

//     int main()
//     {
//         Demo obj(4);
//         obj.addElement(0, 23);
//         obj.addElement(1, 44);
//         obj.addElement(2, 99);

//         obj.viewElement();
//     return 0;
//     }









//.........3.template class......any type value can store in class........

#include <iostream>
using namespace std;
    template <class X> class Demo {             //template class
        private:
        struct ControlBlock {
            int capacity;
            int *arr;
        };
        ControlBlock *s;                       

        public:
        Demo(int capacity) {
            // ControlBlock *s = new ControlBlock()                //don't do this bcz 's' local
            s = new ControlBlock();             //obj of struct
            s->capacity = capacity;
            s->arr = new X(s->capacity);              //arr[capacity]   here dynamically
        }
         
        void addElement(int index, X data) {
            if(index>=0 && index<=s->capacity-1) 
                s->arr[index] = data;
            else
                cout<<"Array index not valid"<<endl;
        }

        void viewElement() {
            for (int i=0;  i<s->capacity;  i++)
                cout<<" "<<s->arr[i];       
        }   
    };

    int main()
    {
        Demo<int> obj(4);
        obj.addElement(0, 22);         
        obj.addElement(1, 33);
        obj.addElement(3, 44);

        obj.viewElement();
    return 0;
    }



