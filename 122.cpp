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
    Cuboid c;
    c.area();
    c.volume();
}