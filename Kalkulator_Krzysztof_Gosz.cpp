#include <iostream> 
#include <math.h> 

using namespace std; 

int main() 

{ 
    float x ,a ,b; 

cout<<"Wybierz działanie\n"; 
cout<<"1 Dodawanie\n"; 
cout<<"2 Odejmowanie\n"; 
cout<<"3 Mnożenie\n"; 
cout<<"4 Dzielenie\n"; 
cout<<"5 Kwadrat liczby\n"; 
cout<<"6 Pirewiastek kwadratowy\n"; 
cin>>x; 

if(x==1) 

  { 
cout<<"Wybrałeś dodawanie\n"; 
cout<<"Wpisz pierwszą liczbę\n"; 
 cin>>a; 
 cout<<"Wpisz drugą liczbę\n"; 
 cin>>b; 
 cout<<"Suma wynosi "; 
cout<<a+b; 
 }  

if(x==2) 

{ 
cout<<"Wybrałeś odejmowanie\n"; 
cout<<"Wpisz pierwszą liczbę\n"; 
 cin>>a; 
 cout<<"Wpisz drugą liczbę\n"; 
 cin>>b; 
 cout<<"Suma wynosi "; 
cout<<a-b; 
 }  

if(x==3) 
{ 
cout<<"Wybrałeś mnożenie\n"; 
cout<<"Wpisz pierwszą liczbę\n"; 
 cin>>a; 
 cout<<"Wpisz drugą liczbę\n"; 
 cin>>b; 
 cout<<"Suma wynosi "; 
cout<<a*b; 
 }  

 if(x==4) 
  { 
cout<<"Wybrałeś dzielenie\n"; 
cout<<"Wpisz pierwszą liczbę\n"; 
 cin>>a; 
 cout<<"Wpisz drugą liczbę\n"; 
 cin>>b; 
 cout<<"Suma wynosi "; 
cout<<a/b; 
 }   

 if(x==5) 
  { 
cout<<"Wybrałeś kwadrat liczby\n"; 
cout<<"Wpisz liczbę\n"; 
 cin>>a; 
 cout<<"Kwadrat liczby wynosi "; 
cout<<a*a; 
 }   

if(x==6) 
  { 
cout<<"Wybrałeś pierwiastek kwadratowy\n"; 
cout<<"Wpisz pierwszą liczbę\n"; 
 cin>>a; 
 cout<<"Pierwiastek wynosi "; 
cout<<sqrt(a); 
 }   

    return 0; 

} 
