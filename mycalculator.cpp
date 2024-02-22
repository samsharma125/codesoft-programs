#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,z;
    cout<<"welcome to my calculator program"<<endl;
    cout<<"press 1 for Addition "<<endl;
    cout << "press 2 for Subtration " << endl;
    cout << "press 3  for Multiplication " << endl;
    cout << "press 4  for Division" << endl;

    cin>>z;
    if(z==1)
    {
        cout<<"enter number for Addition"<<endl;
        cin>>a>>b;
        c=a+b;
        cout<<"Addition is" <<c;
    }
    else if (z == 2)
    {
        cout << "enter number for Subtraction" << endl;
        cin >> a >> b;
        c = a-b;
        cout << "Subtration is " << c;
    }
   else if (z == 3)
    {
        cout << "enter number for Multiplication" << endl;
        cin >> a >> b;
        c = a*b;
        cout << "Multiplication is" << c;
    }
   else if (z == 4)
    {
        cout << "enter number for DIvision" << endl;
        cin >> a >> b;
        c = a/b;
        cout << "Division is" << c;
    }
else 
{
    cout<<"invalid number "<<endl;
}
    return 0;
}
