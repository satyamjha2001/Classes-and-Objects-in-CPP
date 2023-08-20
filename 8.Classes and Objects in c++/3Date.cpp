#include<iostream>
using namespace std;
class Date
{
    int d,m,y;
    public:
    void setValue(int x,int y,int z)
    {   
        d=x;
        m=y;
        this->y=z;
    }
    void display()
    {
        cout<<"d="<<d<<", m="<<m<<", y="<<y;
    }
};
int main() {
Date d;
d.setValue(31,12,2022);
d.display();
return 0;
}