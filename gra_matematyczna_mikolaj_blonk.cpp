#include <iostream>
using namespace std;


int main()
{
int x,y,z,d,q,w;


q=0;
do
{
srand(time(NULL));
y=rand();
y=y%11;
x=rand();
x=x%11;
cout<<"Nauka Mnożenie\n";
cout<<"Pomnóż ";
cout<<y;
cout<<" przez ";
cout<<x;
cout<<" \n";
cin>>z;

if(z==y*x)

{
cout<<"Brawo!!! Twój wynik jest poprawny.\n";
cout<<"Twoje punkty to ";
q=q+1;
cout<<q;
}
else
{
cout<<"Niestety twój wynik jest niepoprawny. Poprawny wynik to ";
cout<<y*x;
cout<<" \n";
cout<<"Twoje punkty to ";
cout<<q;

}


cout<<" \n";
cout<<"Czy chcesz kontynuować?\n";
cout<<"1-Tak\n";
cout<<"2-Nie\n";
cin>>d;
}


while (d!=2);



return 0;
}
