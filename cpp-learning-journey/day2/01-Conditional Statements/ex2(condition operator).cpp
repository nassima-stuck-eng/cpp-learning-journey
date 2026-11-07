#include<iostream>
using namespace std;

int main (){
         double a,b,c;
         double avr;

       cout <<"eneter you grades "<<endl;
       cin>>a>>b>>c;
       avr=(a+b+c)/3;
       cout <<"average="<< avr<<endl;
       string result=(avr>=60)?"Passed":"Failed";
       cout <<"result "<<result<<endl;
       char grade=(avr>=90)?'A':(avr>=80)?'B':(avr>=70)?'C':'D';
       cout <<"grade : "<< grade;
       return 0;



}
