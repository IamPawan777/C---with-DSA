//....right shift......
#include <iostream>
using namespace std;
int main()
{
for(int i=1024; i; i>>=1)   //right shift (1024,512,256,128,64,32,16,8,4,2,1)
{
    cout<<"hello"<<endl;
}
return 0;
}