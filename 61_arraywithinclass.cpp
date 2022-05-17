#include<iostream>
#include<conio.h>

//   #define SIZE 3;              //IN VIDEO IT WORKED BUT NOT HERE //
using namespace std;
int SIZE = 3;

class student{
    int roll[3];
    char name[3][10];              // do this in detail //
public:
    void putdata();
    void getdata();

};

void student :: putdata(){
    for(int i = 0; i <= 3; i++){
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<"Enter roll: ";
        cin>>roll[i];
    }

}

int main(){
student stu;    //object creation //
stu.putdata();



return 0;
}
