#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main () {
	
	int x=0;
	int y=0;
	int lo=0;
	int lr=0;
	
	srand(time(NULL));
	for(int i=0;i<100;i++)
	{
	
	x=rand();
	y=(x%2);
	cout<<y<<"\n";
	
	if (y==0)
	{ 
	lo++;
	 } 
	else lr++;
	
	
}
	cout<<lo<<"\n";
	cout<<lr<<"\n";
}
