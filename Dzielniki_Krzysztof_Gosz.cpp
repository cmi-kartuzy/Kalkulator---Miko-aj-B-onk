#include <iostream>
using namespace std;
int main() 
{
    
    int a, b;

cout<<"Wpisz liczbę\n";
cin>>a;
for(int b=1 ; b<=a ; b++ )
{
if(a%b==0)
{
   cout<<b;
   cout<<" ";
}
}
    return 0;
}
