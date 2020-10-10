#include <iostream>

using namespace std;

int main()                                                                                     
{                                                                              
srand((unsigned)time(0));                                                      
int i;    
i = (rand()%6)+1;
cout << i << "\n";                                          
srand((unsigned)time(0));                                                          
int t;    
t = (rand()%26)+58;                                                        
cout << t << "\n";     
int w;                                                
cout<<"Podaj iloczyn liczb powyżej\n";                              
cin>>w;                                                                                    

if(w == i*t)                                                                                   
   {                                                                                
   cout<<"Brawo, podałeś dobry wynik";                                  
   }                                                                                                        
   else                                                                                                
   {                                                                                      
   cout<<"Niestety, popełniłeś błąd";                                          
   }                                                                                            
return 0;                                                                                        
} 
