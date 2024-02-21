#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
 
{
	int a,y,z;
	cout<<"guess a random  number  "<<endl;
	cin>>a;
	z=rand();
y=z-a;
if(a>z)
{
cout<<"you have guess a number which is "<<y<<"  "<<" numbers ahead"<<endl;
}
else if(a<z)
{
cout<<"you have guess a number which is "<<y<<"  "<<" numbers back"<<endl;
}
 else
 {
 	cout<<"you have guess the number  "<<z<<endl;
 }
	return 0;
}
