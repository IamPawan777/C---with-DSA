/* '#include<string.h>' is use for tradition 'char arr[]' where we use strycpy(), strcmp(), strstr() function
since '#include<string>' is use for 'string' class where we use assign(), compare(), append(), insert(), replace(),  function...*/

// //......1.string only define .......

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     //.....traditional.......
//      const char* arr = "hello";     //mostly use in argument in string
//     // char arr[] = {'p','a','w','a','n',' ','b','i','s','h','t','\0'};
//     // char arr[] = {'p','a','w','a','n','\0'};
//     // char arr[] = {"pawan bisht"};
//     // char arr[16] = {"pawan bisht"};
//     // char arr[] = "pawan bisht";
//     // char arr[20];        
//     // arr = "pawan bisht";         //error this syntex is wrong
//     cout<<arr<<endl;

//     //.....new.......
//     // string s1 = "hello";             //constructor call
//     // string s1;                   
//     // s1 = "hello";                    //assignment operator
//     // string s1("Hello");
//     // string s1 = string("hello");            //string is class so s1 is an object
   
//     // cout<<s1<<endl;
// return 0;
// }






// #include <iostream>
// using namespace std;
 
// int main()
// {
//     string s = "simultaniously";
//     for (int i = 0; i < s.length(); i++)                //or s.size()
//     {
//         cout<<s[i]<<" ";
//     }
    
//     return 0;
// }






// #include <iostream>
// using namespace std;
 
// int main()
// {
//     string s(5,'ap');                    //error string s(5,"a"); & string s(5,'aap');
//     cout<<s;
//     return 0;
// }




// //.......2.string copy, compare......

// #include <iostream>
// #include <string.h>
// using namespace std;
 
// int main()
// {
//     //....copy......
//     // char s1[10] = "Hello";
//     // char s2[10];
//     // s2 = s1;                  //error this syntex is wrong
        
//     // char s1[10] = "Hello";          
//     // // char s2[10];              //or   char s2[10] = "";
//     // strcpy(s2, s1);              //correct but include string.h file
    
//     // char s1[] = "Hello";
//     // strcpy(s1, "World");        //replace



//     //....compare.......
//     char s1[] = "hello";
//     char s2[] = "Hello"; 
//     int x = strcmp(s1,s2);
    
//     cout<<x<<endl;
// return 0;
// }





// //......3.string concatinate......

// #include <iostream>
// #include <string.h>
// using namespace std;
 
// int main()
// {
//     // char s1[] = "hello";
//     // char s2[] = "world"; 
//     // char s3[] = s1 + s2;         //error this syntex is wrong
    
//     // char s1[9] = "hello";
//     // char s2[9] = " world";
//     // strcat(s1, s2);          //correct
//     // cout<<s2<<endl;

//     char s1[9] = "hello";
//     char s2[9] = " world";
//     char s3[20];
//     strcpy(s3,strcat(s1,s2));
//     cout<<s3<<endl;

// return 0;
// }





// //......4.string class with operator(+,=,+=,<,<=,[],<<,>>)......

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     // string s1 = "Hello";
//     // string s1("Hello");         //both default constructor call

//     // string s2;
//     // s2 = "Hello world";             //here assignment operat.
//     // cout<<s2;

//     //.......concatinate..........
//     string s1 = "hello ";
//     string s2 = "Duniyain";
//     cout<<s1+s2<<endl;
//     s1+=s2;                     //concatinate
//     cout<<s1<<endl;

//     //........compair....
//     // string s1 = "hello ";
//     // string s2 = "Duniyain";
//     // string s3 = "Duniyain";
//     // int x = (s3==s2);               //equal
//     // int y = (s3!=s2);               //not equal
//     // cout<<x<<endl<<y<<endl;

//     // string s = "HHello";
//     // string s2 = "Hello";
//     // int x = s>s2;                   //true = 0
//     // cout<<x;
    
    
// return 0;
// }






// /*....all about String......*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//        string str = "Hello guys!! XYZ";
// //      string str;
//      cin>>str;
//      cout<<str;             //override
    
//    return 0;
// }





///////////.......funtion.........//////////
// /*.....'getline()' to get complete sentence.....*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//      string s;
//      getline(cin, s);
//      cout<< s <<endl;
     
//      return 0;
// }




// //.......copy data........

// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
//     string s1("Hello Pawan");
//     string s2;
//     // s2 = s1;
//     s2.assign(s1);
//     cout<<"copy :"<<s2;
// return 0;
// }





// // .......at(index_no) retirn character in perticular index........

// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
//     string s1("Hello Pawan");
//     string s2;
//     // s2 = s1;
//     // s2.assign(s1);
//     cout<<"copy :"<<s1.at(2);
// return 0;
// }




// // ......s1.swap(s2); or swap(s1,s2); string........ 

// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
//     string s1(" Hello Pawan..");
//     string s2(" Ha ji..");
//     cout<<s1+s2<<endl;
//     s1.swap(s2);
//     cout<<s1.append(s2);
// return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
//     string s1("Hello");
//     string s2("Gi");
//     cout<<s1+s2<<endl;
//     // swap(s1[0],s2[0]);
//     // int  a = s1[0];
//     // int b  = s2[0];
//     s1[0] = s2[0];
//     cout<<s1.append(s2);
// return 0;
// }







// /*...'append()' function to append(add) the two String......*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//      string st1 = "congara";
//      string st2 = "tulation";
     
//       //st1.append(st2);  //or
//       st1 = st1 + st2;       //st1 +=st2;
//      cout<<st1<<endl;
     
//      cout<<st1[2]<<" "<<st2[1+1];  //can get any index character
     
// return 0;
// }





// //......replace(from_index, total_char, "string")......

// #include <iostream>
// using namespace std;
 
// int main()
// {
// string s = "hey brother where are you going now.";
// // s.replace(2,9,"HHHKKJKHHKHKHK");             //java s.replace("are", "is");
// cout<<s;
// return 0;
// }





// //...........find(string)- return shearching string & rfind() last shearching string

// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
//     string s("ThisArenewclass");
//     int x = s.find("are");
//     cout<<x;
//     return 0;
// }





// //......substr(from_index, total_char): return sub string.....

// #include <iostream>
// #include<string>
// using namespace std;
 
//     int main()
//     {
//         string s = "hey brother where are you going now.";
//         cout<<s.substr(12,7);           //java s.replace("are", "is");

//         return 0;
// }




// //..........size() and length() method to return int value.....

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     cout<<"Enter string: ";
//     string s;
//     getline(cin,s);
//     cout<<s<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.length()<<endl;
//     return 0;
// }

// //...........without size() and length() method.......
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     string st("pawan");
//     int x=0;
//     for(int i=0; st[i]!='\0'; i++){
//       x++;
//     }
//     cout<<"size: "<<x;
//     return 0;
// }





// /*.....clear() function to clear string......*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//      string st1 = "congara pawan";
//     //  st1.clear();
//     st1.erase();
//      cout<<st1;
     
//      return 0;
// }




// /*....'erase()' to erase charecter from any of index....*/
 
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//      string st1 = "Pawan Bisht";
//      st1.erase(3,3);       //(from index, no of charater)
//      cout<<st1;
//      return 0;
// }





// /*...'compare()' 2 string ...equal or not....*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//      string st1 = "Pawan";
//      string st2 = "Bisht";
     
//      if(st1.compare(st2) == 0)
//      {
//           cout<<"String are Equal.";
//      }
  
//    else if(st1.compare(st2) != 0)
//      {
//           cout<<"String are not Equal.";
//      }
//   return 0;
// }






//  /*....'insert()' to insert the other charactor wherever you want.....*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//  string st = "PBisht";
 
//  st.insert(1, "awan");
//  cout<<st;
 
//  return 0;    
// }




/*..conversion 'stoi()'- string to int ||'to_string()'- int to string..*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
     string s1 = "786";
     int x=2;
     
     int a=stoi(s1);     //String to int 'stoi()'
     cout<<'A'+a+x<<endl;               //here A = 65 convert
     
     string b = to_string(x);       //int to String 'to_string()'
     cout<<b+"Hello";      
     
     return 0;
}





// /*...sort of string with 'sort()' but begining 'algorithm' include..*/

// #include <iostream>
// #include<algorithm>
// #include <string>
// using namespace std;

// int main()
// {
//  string st = "KUGZDWRTPABCMQ  asdfgh";
 
// //  sort(st.begin(), st.end());             //...increasing order.......
// sort(st.begin(), st.end(), greater<char>());                  //...decreasing order.......
//  cout<<st;
  
//   return 0;
// }







// // //........reverse the string check  palimdrom or not.......

// #include <iostream>
// using namespace std;
 
// int main()
// {
//     string st;
//     cout<<"Enter string: ";
//     getline(cin, st);
//     int x = st.size();

//     int start=0;
//     int end = x-1;
//     while (start < end)
//     {
//         swap(st[start++], st[end--]);
//     }
//     cout<<st;
    
//     return 0;
// }



// #include <iostream>
// using namespace std;
 
// int main()
// {
// string s = "abcbcba";
// string sr;
// for(int i = s.length()-1; i>=0; --i){
//     sr.push_back(s[i]);                            //or sr += s[i];
// }
//     cout<<"reverse: "<<sr<<endl;
//     if(s==sr)
//         cout<<"yes palimdrom.";
//     else if(s!=sr) 
//         cout<<"not palimdrom";
// return 0;
// }





//........capitezed.......

// #include <iostream>
// using namespace std;
 
// int main()
// {
// string s("ASdfghjKl");
// // cout<<'A' - 'a';            /65-97
// for(int i=0; i<s.size(); ++i) {
//     if(s[i]>='a' && s[i]<='z')
//         s[i] -= 32;
// }
// cout<<s;
// return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
 
// int main()
// {
// string s = "ASdfghjKl";
// transform(s.begin(), s.end(), s.begin(), ::toupper);
// cout<<s<<endl<<endl;
// transform(s.begin(), s.end(), s.begin(), ::tolower);
// cout<<s;
// return 0;
// }




// //.............find grater no in numeric string......

// #include <iostream>
// #include <algorithm>
// using namespace std;
 
// int main()
// {
// string s;
// getline(cin,s);
// sort(s.begin(), s.end());           //or sort(s.begin(), s.end(), greater<char>()); 
// cout<<s[s.size()-1];
// return 0;
// }




// //...string::npos(not position)....

// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
// string s = "jdioebpcj";
// string n;
//     if(s.find("s")==string::npos)           //s.find("s") 's' is not in string so return string
//         n += s;
// cout<<n;
// return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
// string s = "pawanbisht";
// string ss = "ais";
// string n;
// for(int i=0; i<s.size(); i++){
//     if(ss.find(s[i])==string::npos)         //a = a return not in position
//         n = n+s[i];
// }
// cout<<n;
// return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a;
//     cin>>a;
//     // int cubeRoot = cbrt(a);
//     int cubeRoot = a.pow();
//         cout<<cubeRoot;
//     return 0;
// }