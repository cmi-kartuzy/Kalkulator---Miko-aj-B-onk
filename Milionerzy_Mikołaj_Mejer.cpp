
#include <iostream>
using namespace std;


int main()
{
cout << "     Milionerzy\n";
cout << "   Wybierz pytanie\n";
cout << "          1      \n";
cout << "          2      \n";
cout << "          3      \n";
cout << "          4      \n";
    
int g;
    string h;
    string i;
cin >> g;
if (g == 1)
    {
cout << "W ktorym roku premieremial system Windows Vista?\n";
cout << "A - 2001\n";
cout << "B - 2006\n";
cout << "C - 2012\n";
cout << "D - 2015\n";
cin >> h;

if (h == "b")

        {
cout << "Dobra odpowiedz!\n";
        }
else
        {

cout << "Zla odpowiedz, poprawna to: B - 2006\n";

        }
    }
if (g == 2) 

    { 
        cout << "Jaka architektura procesora najczęsciej wystepuje na telefonach?\n"; 
        cout << "A - ARM\n"; 
        cout << "B - x86-32\n"; 
        cout << "C - PowerPC\n"; 
        cout << "D - x86-64\n"; 
        cin >> h; 
        if (h == "b") 
        { 
            cout << "Dobra odpowiedz!\n"; 
        } 
        else 
        { 
            cout << "Zla odpowiedz, poprawna to: A - ARM\n"; 
        } 
    } 

    if (g == 3) 
    { 
        cout << "Czy Windows XP mial wersje 64-bitową?\n"; 
        cout << "A - NIE\n"; 
        cout << "B - TAK\n"; 
        cin >> h; 
        if (h == "b") 
        { 
           cout << "Dobra odpowiedz!\n"; 
        } 
        else 
        { 
            cout << "Zla odpowiedz, poprawna to: B - TAK \n"; 

        } 
    } 
    if (g == 4) 
    { 
        cout << "Czego skrótem jest WWW?\n"; 
        cout << "A - WideWoolWalker\n"; 
        cout << "B - WielkaWrogaWrona\n"; 
        cout << "C - WorldWideWeb\n"; 
        cout << "D - WidmoWielkiejWrony\n"; 
        cin >> h; 
        if (h == "c") 
        { 
            cout << "Dobra odpowiedz!\n"; 
        } 
        else 
        { 
            cout << "Zla odpowiedz, poprawna to: C - WorldWideWeb\n"; 
        } 
    
        return 0; 
    } 

} 
