/* Write a programe to demonstrate the use of static data member */

#include<iostream>
using namespace std;
class item
{
   static int count;
   int num;
   public:
   int getdata(int a)
   {
       num=a;
       count++;
   }
   int getcount()
   {
       cout<<"\ncount is"<<count;
    }

};
int item::count=10;
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    a.getcount();
    b.getdata(300);
    b.getcount();
    c.getdata(500);
    c.getcount();
    a.getcount();
    b.getcount();
    c.getcount();
}
