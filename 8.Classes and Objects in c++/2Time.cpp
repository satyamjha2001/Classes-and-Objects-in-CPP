#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    void setValue(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void display()
    {
        cout<<h<<" hr "<<m<<" min "<<s<<" sec";
    }
};
int main() {
Time t;
t.setValue(3,45,20);
t.display();
return 0;
}