#include<iostream>
#include <string>
using namespace std;

int main(){
 struct book{
    string title;
    double price;
    int pages;
 };

 book b1;

 b1={"C++ Basics",45.5,250};


    cout <<b1.title <<endl<<b1.price<<endl<<b1.pages;

return 0;

}
