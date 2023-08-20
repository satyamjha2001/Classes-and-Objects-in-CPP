#include<iostream>
using namespace std;
class Circle
{
    float r;
    public:
    void setRadius(float a)
    {
        r=a;
    }
    float getRadius()
    {
        return r;
    }
    float calArea()
    {
        return 3.14*r*r;
    }
    float calcircum()
    {
        return 3.14*r*2;
    }
};
int main() {
Circle c;
c.setRadius(5.0);
cout<<"Radius is "<<c.getRadius()<<endl;
cout<<"Area of circle is "<<c.calArea()<<endl;
cout<<"Circumference of circle is "<<c.calcircum();
return 0;
}