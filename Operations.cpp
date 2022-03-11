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

