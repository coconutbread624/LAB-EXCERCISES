#include <iostream>
using namespace std;

int main()
{
    int grade;
    int code;
    
    cout<<"Enter your grade: ";
    cin>>grade;
    
    cout<<"Enter course code: ";
    cin>>code;
    
    if (grade >= 75) {
        cout<<"Result: Pass"<<endl;
    }
    else {
        cout<<"Result: Fail"<<endl;
    }

    switch (code) {
        case 1 :
            cout<<"Course: Discrete Math";
            break;
        case 2 :
            cout<<"Course: Data Structures";
            break;
        case 3 :
            cout<<"Course: Network Communication";
            break;
        default :
            cout<<"Invalid Course Code";
    }
    
    return 0;
}