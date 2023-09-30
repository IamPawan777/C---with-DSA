#include <iostream>
using namespace std;

class Regist
{
public:
    float id;
    string name;
    int student;
    static int count;

    void setData();
    void getData();

    // int total()
    // {
    //     return count;
    // }
};

void Regist ::setData()
{

    cout << "how many Student : ";
    cin >> student;

    for (int i = 1; i <= student; i++)
    {
        cout << "Id : ";
        cin >> id;

        cout << "name : ";
        cin >> name;
    }
}

void Regist ::getData()
{
    for (int i = 1; i <= student; i++)
    {   
        count++;
    }
    cout << "So total no of student is: " << count;
}

int Regist ::count;

int main()
{
    Regist pawan;
    pawan.setData();
    pawan.getData();

    return 0;
}