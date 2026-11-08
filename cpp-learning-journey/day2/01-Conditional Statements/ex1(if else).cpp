#include <iostream>
using namespace std;

int main(){
    int age;
    double GPA;
    double score;

    cout<<"enter your age "<<endl;
    cin >> age;
    cout << "enter your GPA"<<endl;
    cin>> GPA;
    cout<< "enter your exam score"<<endl;
    cin>> score;
    if(age<=18){
       cout <<"too yong"<<endl;
        }else if (GPA<3.0){
        cout<<"low GPA"<<endl;
        }else if (score>=70){
        cout<<"accepted"<<endl;
        }else{cout<<"exam score too low"<<endl;
            }
            return 0;
}
