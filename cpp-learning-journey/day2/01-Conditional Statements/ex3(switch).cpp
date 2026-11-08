#include <iostream>
using namespace std;

 int main () {

 int a;

    cout << "===== ATM MENU =====" << endl;
    cout <<" 1. Check Balance"<<endl;
    cout <<" 2. Withdraw Money"<<endl;
    cout <<" 3. Deposit Money"<<endl;
    cout <<" 4. Exit"<<endl;
    cout <<" chose a number ";
    cin>>a ;
    switch(a){
      case 1 :
        cout <<"Your balance is 2500 RMB"<<endl;
        break;
      case 2 :
        cout <<"Withdrawal selected"<<endl;
        break;
      case 3 :
        cout <<"Deposit selected"<<endl;
        break;
      case 4 :
        cout <<"Thank you for using our ATM"<<endl;
        break;
     default:
    cout << "Invalid option" << endl;
    break;

    return 0;
}
