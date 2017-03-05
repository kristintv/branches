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
	return 0;
}
