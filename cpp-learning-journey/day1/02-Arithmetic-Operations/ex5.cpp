#include<iostream>
using namespace std;

int main(){
    const double PI=3.14159;
    double radius;
    double AREA;

    cout <<"enter the radius"<<endl;
    cin >> radius;
    AREA= PI*radius*radius;
    cout <<"cycle area="<<AREA;
    return 0;
}
