#include <iostream>
using namespace std;


int main()
{
int y,x,z;
srand(time(NULL));
cout<<"Zgadnij moją liczbę!!!(1-100)\n";
y=rand();
y=y%101;
do
{
cin>>x;
if (x==y)
{
cout<<"Brawo!!! Zgadłeś!!!\n";
}
if(x<y)
{
cout<<"Moja liczba jest większa!!!\n";
}
if(x>y)
{
cout<<"Moja Liczba jest mniejsza!!!\n";
}

}
while (x!=y);
return 0;

}
