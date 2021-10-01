#include<iostream>
#include<conio.h>

using namespace std;

int fib (int z)
{
	int w, a, s, d;
	
	w=0, a=1;
	
	d=1;
	while(d<z)
	{
	 s= w+a;
	 w = a;
	 a = s;	
	 
	 d++;
	}
	
	return a;
}

main()
{
	int l, i;
	float v[40];
	
	for(l=1, i=1; i<=40; l++, i++)
	{
		v[i] = fib(l);
	}
	
	float r;
	
	for(i=1; i<=40; i++)
	{
		r = v[i+1] / v[i];
		
		cout<< v[i+1] << "/" << v[i] << " = " << r << endl;
		
	}
	
	getch();
	
	
}
