#include<iostream>
using namespace std;
class Rectangle
{
    public:
    void area()
    {
        cout<<"Area of Rectangle"<<endl;
    }
};
class Cuboid:public Rectangle
{
    public:
    void volume()
    {
        cout<<"Cuboid volume"<<endl;
    }
};
int main()
{
    Rectangle r;
    Cuboid *q=&r;
    Cuboid c;
    Rectangle *p=&c;
    p->area();
}