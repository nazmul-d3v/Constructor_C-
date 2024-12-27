
#include<iostream>
using namespace std;

class demo
{
    int a,b;

public :
    demo(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void putdata()
    {
        cout<<"\n a="<<a<<"\n b="<<b;

    }


};

int main()
{

    demo aa(20,30);
    aa.putdata();
    return 0;
}












