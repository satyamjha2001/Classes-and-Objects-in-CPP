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
    const char * getMonthName()
    {
        switch(m)
        {
            case 1:
                return "Jan";
            case 2:
                return "Feb";
            case 3:
                return "Mar";
            case 4:
                return "Apr";
            case 5:
                return "May";
            case 6:
                return "Jun";
            case 7:
                return "Jul";
            case 8:
                return "Aug";
            case 9:
                return "Sep";
            case 10:
                return "Oct";
            case 11:
                return "Nov";
            case 12:
                return "Dec";
        }
    }
    void display(int format=1)
    {   if(format==1)
           cout<<"d="<<d<<", m="<<m<<", y="<<y;
        else if(format==2)
        cout<<d<<"/"<<m<<"/"<<y;
        else if(format==3)
        cout<<d<<"-"<<m<<"-"<<y;
        else if(format==4)
        cout<<d<<"-"<<getMonthName()<<"-"<<y;
    }
};
int main() {
Date d;
d.setValue(23,11,2001);
d.display(4);
return 0;
}