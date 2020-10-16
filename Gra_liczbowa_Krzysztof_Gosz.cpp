#include <iostream>

using namespace std;

int main()
{
    int a, b, x;
    srand(time(NULL));
x=rand()%100;
cout<<"Zgadnij liczbę od 1 do 100 :]\n";
  b=0;
  for(int i=0; i<100; i++)
   {  
     cin>>a;
     b++;
     if(a<x)
     {
         cout<<"Więcej !\n";
     }
     if(a>x)
  {
      cout<<"Mniej!\n";
  }
  if(a==x)
  {
     cout<<"Brawo!!!\n";
    cout<<"Zdobyłeś "
 cout<<10-b;
 cout<<"pkt";
  }
 
   }
   
    return 0;
}
