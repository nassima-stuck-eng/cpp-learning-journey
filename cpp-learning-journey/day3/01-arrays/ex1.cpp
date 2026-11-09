#include<iostream>
using namespace std;

int main() {
    int grade[5] ;
    int sum=0;
    int highest;
    int lowest;

       for (int i =0;i<5;i++){
        cout <<"enter grade "<<endl;
        cin >>grade[i];
        sum=sum+grade[i];

        if (i==0){
            highest=grade[0];
            lowest=grade[0];

        }else {
          if(grade[i]>=highest){

            highest=grade[i];}
         if(grade[i]<=lowest){
         lowest=grade[i];
         }
       }
        double avr=sum/5;
        cout <<"highest is  "<< highest<<endl;
        cout <<"lowest is  "<<lowest <<endl;
       cout<<"sum= "<< sum<<endl;
       cout <<"avr ="<<avr <<endl;
       return 0;
}
