#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

float multiplication(int a, int b)
{
	int resultat;
	resultat = a * b;
	return resultat;
}

float division(int a, int b)
{
	int resultat;
	resultat = a / b;
	return resultat;
}

int factoriel(int nb)
{
	int resultat=1;
	for(int i=nb; i > 0; i--)
	{
		resultat = resultat*i;
	}
}

int exposant(int nb, int exp)
{
	int resultat;
	
	resultat = pow(nb, exp);
	
	return resultat;
}


float distance(point a, point b)
{
	float dx,dy;
	dx = a.x - b.x;
	dy = a.y - b.y;
	return sqrt((dx*dx) + (dy*dy));

int nombrePremier(int Nombre)
{
	int Nombre,i=1,nb=0,d;
	bool premier;
	 
	 
	while(nb<Nombre)
	{
		i++;
		premier=true;
		d=2;
		while(premier && d*d<=i)
				if(i%d==0)
					premier=false; 
				else
					d++;
 
		if(premier==true)
			nb++;
	}
	 
	return i;
}
