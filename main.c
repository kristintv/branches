#include <stdio.h>

int main()
{
	int srok;
	float summa, summao;
	printf("Input srok vklada:");
	scanf("%f", &srok);
	printf("Input summu vklada:");
	scanf("%f", &summa);
	summao=summa;
	if ((srok<0) || (srok>365)) printf("\nIncorrect data");
	if (summa<10000) printf("\nIncorrect data");
	if (summa<100000)
	{
		if (srok<31) summao-=0.1*summa;
		if ((srok>30) && (srok<121)) summao+=0.02*summa;
		if ((srok>120) && (srok<241)) summao+=0.06*summa;
		if ((srok>240) && (srok<366)) summao+=0.12*summa;
	}
	if (summa>=100000)
	{
		if (srok<31) summao-=0.1*summa;
		if ((srok>30) && (srok<121)) summao+=0.03*summa;
		if ((srok>120) && (srok<241)) summao+=0.08*summa;
		if ((srok>240) && (srok<366)) summao+=0.15*summa;
	}
	printf("\nSumma okonchaniya vklada: %f", summao);
	return 0;
}
