#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    cout<<"enter the first num:"<< endl;
    cin >> a;
    cout <<"enter the second num:"<< endl;
    cin >> b;

     cout<< "sum:"<<a+b<<endl;
     cout<< "difference:"<<a-b<<endl;
     cout<< "product:"<<a*b<<endl;

     if(b!=0){
     cout<< "division:"<<a/b<<endl;
     }
     else{
        cout<<"division : cannot divide by zero."<< endl;
     }
     int x = (int)a;
     int y= (int)b;
     if(y!=0){
         cout << "Remainder: " <<x%y << endl;
         }
     else {
        cout <<"Remainder cant be found";
     }

     return 0;

}
