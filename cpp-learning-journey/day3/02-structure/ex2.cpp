#include<iostream>
using namespace std;

int main(){

struct Date{
      int day;
      int month;
      int year;
};
struct Employee{
     int ID;
     string name;
     double salary;
     Date joiningDate;
};
 typedef struct Employee  EMPLOYEE;

       EMPLOYEE employees[3];
        employees[0]={101,"sara",5000,{10,3,2023}};
        employees[1]={102,"Adam",6500,{15,6,2022}};
        employees[2]={103,"Lina",4500,{20,9,2024}};

        for(int i=0;i<3;i++){

            cout<<"Employee "<<i+1<<endl;
            cout<<"ID:"<<employees[i].ID<<endl;
            cout<<"name:"<<employees[i].name<<endl;
            cout<<"salary:"<<employees[i].salary<<endl;
            cout<<"Joining Year:"<<employees[i].joiningDate.year<<endl;
            cout<<endl;
        }
        double avr=((employees[0].salary)+(employees[1].salary)+(employees[2].salary))/3;
        cout <<"average ="<<avr;
        return 0;
}
