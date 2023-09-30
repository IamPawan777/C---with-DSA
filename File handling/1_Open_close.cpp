// /*.....1.ofstream class to write in file.....*/

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//   ofstream file("1_filename.txt");

//   file<<"This is ofstream class...."<<endl;     //output in file

//   string name;
//   cout<<"Enter Your Name: ";      //output in console
//   /* cin>>name; */    getline(cin, name);

//   file<<"name : "<<name;    //writing in file
// return 0;
// }




// /*......2.ifstream class to read from file......*/

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//   ifstream filee("1_filename.txt");     //*read.txt file hona mandatory and some thing should be written
  
//   string name;
//   // filee>>name;  
//      getline (filee, name);
  
//   cout<<"name : "<<name<<endl;
//   cout<<"name : "<<name<<endl;

// return 0;
// }




// /*.....3.ofstream and ifstream class to write in file and read to file.....*/

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//   //write file [console -> file]

//   ofstream obj1("3_New.txt");

//   string com;
//   cout<<"write a comment: ";      //"cout<<" output in console
//   getline(cin, com);     //cin>>com; 
//   obj1<<"Comment : "<<com;    //"ibj1<<" writing in file
//   obj1.close();

  
//   //read file [file -> console]
  
//   ifstream obj2("3_New.txt");
//   string com2;
//   getline(obj2, com2);   //obj2>>com2;
//   cout<<" comment is : "<<com2;
//   obj2.close();

// return 0;
// }






// /*.....4.open file and write data and close file with -1....*/

// #include <iostream>
// #include <string>
// #include <fstream>

// using namespace std;

// int main()
// {   
//     ofstream obj;     //file object
//     string name;
    
//     obj.open("4_first.txt");      //open file
    
//     while(obj){
//     cout<<"Enter Name : ";
//     getline(cin,name);
//     if(name == "-1")
//     { break; }
//       obj<<"Enter name : "<<name<<endl;
//     }
    
//     obj.close();        //close file
//     //cout<<obj;
// return 0;
// }




// /*.......5.Read Data.........*/

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//   ifstream obj;
//   string name;
//   obj.open("4_first.txt");
  
//     getline(obj, name);
//     cout<<name<<endl;
  
//   obj.close();
// return 0;
// }