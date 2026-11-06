#include<iostream>
using namespace std;

int main()
{
    double x ;
    cout <<"enter a number"<<endl;
    cin >> x;
    cout <<"initial value:"<<x<<endl;
    x+=5;
    cout <<"after +=5:"<<x<<endl;
    x-=3;
    cout <<"after -=3:"<<x<<endl;
    x*=2;
    cout <<"after *=2:"<<x<<endl;
    x/=4;
    cout <<"after /=4:"<<x<<endl;

    return 0;
}
