#include <iostream>
using namespace std;

int main()
{
    int choice;
    
    cout<<"1.Compute Area of Circle"<<endl;
    cout<<"2.Compute Area of Rectangle"<<endl;
    cout<<"3.Exit"<<endl;
    
    cout<<"Enter your choice: ";
    cin>>choice;
    
    switch(choice) {
        case 1 :
            cout<<"Area of Circle";
            break;
        case 2 :
            cout<<"Area of Rectangle";
            break;
        case 3 :
            cout<<"Goodbye!";
            break;
        default :
            cout<<"Invalid Choice";
    }
    
    return 0;
}