int main() 

{ 

int q,w,e,r,t,y,u,i,o; 

do 

{ 

cout<<" Kalkulator \n"; 
cout<<"Wybierz Akcje\n"; 
cout<<"1-Dodawanie\n"; 
cout<<"2-Odejmowanie\n"; 
cout<<"3-Mnożenie\n"; 
cout<<"4-Dzielenie\n"; 
cout<<"5-Koniec\n"; 
cout<<"\n"; 
cin>>q; 

if(q==1) 
{ 
cout<<" Dodawanie \n"; 
cout<<"Podaj Pierwszą Liczbę\n"; 
cin>>w; 
cout<<"Podaj Drugą Liczbę\n"; 
cin>>e; 
cout<<"Suma To: "; 
cout<<w+e; 
cout<<"\n"; 
cout<<"\n"; 
} 

if(q==2) 
{ 
cout<<" Odejmowanie \n"; 
cout<<"Podaj Pierwszą Liczbę\n"; 
cin>>r; 
cout<<"Podaj Drugą Liczbę\n"; 
cin>>t; 
cout<<"Różnica To: "; 
cout<<r-t; 
cout<<"\n"; 
cout<<"\n"; 
} 

if(q==3) 
{ 
cout<<" Mnożenie \n"; 
cout<<"Podaj Pierwszą Liczbę\n"; 
cin>>y; 
cout<<"Podaj Drugą Liczbę\n"; 
cin>>u; 
cout<<"Iloczyn To: "; 
cout<<y*u; 
cout<<"\n"; 
cout<<"\n"; 
} 

if(q==4) 
{
cout<<" Dzielenie \n"; 
cout<<"Podaj Pierwszą Liczbę\n"; 
cin>>i; 
cout<<"Podaj Drugą Liczbę\n"; 
cin>>o; 
cout<<"Iloraz To: "; 
cout<<i/o; 
cout<<"\n"; 
cout<<"\n"; 
} 

  

} 
while(q!=5); 

return 0; 
} 
