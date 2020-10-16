#include <iostream>

using namespace std;

int main()
{
    int a, x;
    srand(time(NULL));
x=rand()%100;
cout<<"Zgadnij liczbę od 1 do 100 :]\n";
  for(int i=0; i<100; i++)
   {  
     cin>>a;
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
     
  }
  
   }
   
    return 0;
}
