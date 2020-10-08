#include <iostream> 

using namespace std; 

int main() 

{ 
 int x, y, z, a; 
srand(time(NULL)); 

a=0; 

for(int i=1;i<11;i++) 
{ 
x=rand(); 
x=x%11; 
cout<<x; 
cout<< "*";
y=rand();
y=y%11; 
cout<<y; 
cout<<"="; 
cout<<"?"<<"\n"; 
cin>>z; 

   if(z==x*y) 
   { 
    cout<<"To jest poprawna odpowiedź!:)"<<"\n"; 
    a++; 
   } 
   else 
   { 
      cout<<"Zła odpowiedź:/"<<"\n" ; 
   } 
} 

 if (a==0) 
 {
 cout<<"Zdobyłeś "; 
 cout<<a ; 
 cout<<" punktów"; 
 } 
 else 
 { 
 
  if (a==1) 
 {
 cout<<"Zdobyłeś "; 
 cout<<a ; 
 cout<<" punkt"; 
 } 
   else 
   { 
        if (a==2) 
  { 
  cout<<"Zdobyłeś "; 
  cout<<a ; 
  cout<<" punkty";
 } 
      else 
      { 
 if (a==3) 
 { 
 cout<<"Zdobyłeś "; 
 cout<<a ; 
 cout<<" punkty"; 
 } 
     else 
      { 
 if (a==4) 
 { 
 cout<<"Zdobyłeś "; 
 cout<<a ; 
 cout<<" punkty"; 
 } 
     else 
     { 
      if (a>=5) 
 { 

  cout<<"Zdobyłeś "; 
  cout<<a ;
  cout<<" punktów"; 

 } 

     } 

      } 

      } 
       
   }
 } 
    return 0; 
} 
