#include <iostream>
using namespace std;

int main()
{
    int grade;
    
    cout<<"Enter grade: ";
    cin>>grade;
    
    if (grade>=75) {
        
        if (grade>=90) {
            cout<<"Excellent";
        }
        else if (grade>=80) {
            cout<<"Very Good";
        }
        else {
            cout<<"Satisfactory";
        }
    }
    else {
        cout<<"Fail";
    }

    return 0;
}