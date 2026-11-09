#include<iostream>
using namespace std;

int main(){
    int prdctnum;
    double price;
    double total=0;
    double avr;
      cout <<"How many products?"<<endl;
      cin>>prdctnum;
      for (int i=1;i<=prdctnum;i++){

         cout <<"Enter price of product "<<i<<endl;
         cin>>price;
        total=total+price;
      }
      avr=total/prdctnum;
      cout <<"Total price: "<<total<<endl;
      cout <<"Average price: "<<avr;
}
