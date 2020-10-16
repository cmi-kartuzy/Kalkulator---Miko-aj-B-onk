#include <iostream>
using namespace std;
int main() 
{
    
    int a, b, x;
x=0;
cout<<"Wpisz liczbę\n";
cin>>a;
for(int b=1 ; b<=a ; b++ )
{
if(a%b==0)
{
   
x++;
}
}
if(x==2)
    {
       cout<<"Liczba jest liczbą pierwszą:)"; 
    }
   else 
    {
        cout<<"Liczba nie jest liczbą pierwszą:(";
    }


    return 0;
}
