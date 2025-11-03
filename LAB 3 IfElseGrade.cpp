#include <iostream>
using namespace std;

int main()
{
    int grade;
    
    cout<<"Enter your grade: ";
    cin>>grade;
    if (grade >= 75)
        cout<<"Pass!";
    else
        cout<<"Fail:(";

    return 0;
}