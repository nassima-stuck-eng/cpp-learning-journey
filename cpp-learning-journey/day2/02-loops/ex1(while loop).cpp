#include<iostream>
using namespace std;

int main(){
    int stock=100;
    int sold;
    int intsold=0;
    cout <<"Enter quantity sold"<< endl;
    cin >>sold;
    if (sold>100){
            cout <<"the stock is only 100"<<endl;
        }
   else{ while (intsold<sold){
            stock=stock-1;


        intsold++;
    }
    if (stock<=0){
     cout<<"solde out"<<endl;}
    else{ cout <<"remaining stock="<<stock;
    }}
}
