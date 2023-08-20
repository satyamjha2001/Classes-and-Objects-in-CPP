#include<iostream>
using namespace std;
class Complex
{
  int a,b;
  public:
  void setValues(int x,int y)
  {
    a=x;
    b=y;
  }
  void display()
  {
    cout<<"Complex number is:"<<endl;
    cout<<a<<"+i"<<b;
  }
};
int main() {
Complex c1;
c1.setValues(3,4);
c1.display();
return 0;
}