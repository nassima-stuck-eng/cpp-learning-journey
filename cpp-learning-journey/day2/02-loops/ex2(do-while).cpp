#include<iostream>
using namespace std;

int main (){

    int choice;
    int total=0;
    do {
        cout<<"===== RESTAURANT MENU ====="<<endl;
        cout<<"1. Pizza - 50 RMB"<<endl;
        cout<<"2. Burger - 30 RMB"<<endl;
        cout<<"3. Juice - 10 RMB"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"choose a number"<<endl;
        cin>>choice;
        switch (choice){
    case 1:
        total=total+50;
        break;
    case 2:
        total=total+30;
        break;
    case 3:
        total=total+10;
        break;
    default:
    cout << "Invalid choice!" << endl;
    break;
        }
    }while (choice!=4);
    cout <<"total="<<total<<" RMB"<<endl;
    return 0;

}
