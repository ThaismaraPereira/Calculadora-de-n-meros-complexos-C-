#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	/* Calculadora de números complexos	*/

	float r1, r2, i1, i2, mo1, mo2, an1, an2, realR, imagR, modR, angR, aux;
	int op, ex, sair;

	do
	{
		printf(" Escolha em qual forma esta a sua expressao \n");
		printf(" 1. retangular \n");
		printf(" 2. polar \n");
		fflush(stdin);
		scanf("%d", &ex);


		if (ex == 1)
		{
			printf(" Digite aqui a parte real: ");
			fflush(stdin);
			scanf("%f", &r1);

			printf(" Digite aqui a parte imaginaria: ");
			fflush(stdin);
			scanf("%f", &i1);

			aux = r1 * r1 + i1 * i1;
			mo1 = sqrt(aux);
			an1 = atan(i1 / r1) * 180 / 3.14159265359;
		}
		else
		{
			if (ex == 2)
			{
				printf(" Digite aqui o modulo: ");
				fflush(stdin);
				scanf("%f", &mo1);

				printf(" Digite aqui o angulo: ");
				fflush(stdin);
				scanf("%f", &an1);

				r1 = mo1 * cos(an1 / 180 * 3.14159265359);
				i1 = mo1 * sin(an1 / 180 * 3.14159265359);
			}
		}

		printf(" 1. Adicao \n");
		printf(" 2. Subtracao \n");
		printf(" 3. Divisao \n");
		printf(" 4. Multiplicacao \n");
		printf(" 5. Angulo \n");
		printf(" 6. Modulo \n");
		printf(" 7. Parte real \n");
		printf(" 8. Parte imaginaria \n");
		printf(" 9. complexo conjugado\n");
		fflush(stdin);
		scanf("%d", &op);

		if (op <= 4)
		{
			printf(" Escolha em qual forma esta a sua expressao \n");
			printf(" 1. retangular \n");
			printf(" 2. polar \n");
			fflush(stdin);
			scanf("%d", &ex);
		}
		else
		{

		
			if (ex == 1)
			{
				printf(" Digite aqui a parte real: ");
				fflush(stdin);
				scanf("%f", &r2);

				printf(" Digite aqui a parte imaginaria: ");
				fflush(stdin);
				scanf("%f", &i2);

				aux = r2 * r2 + i2 * i2;
				mo2 = sqrt(aux);
				an2 = atan(i2 / r2) * 180 / 3.14159265359;
			}
			else
			{
				printf(" Digite aqui o modulo: ");
				fflush(stdin);
				scanf("%f", &mo2);

				printf(" Digite aqui o angulo: ");
				fflush(stdin);
				scanf("%f", &an2);

				r2 = mo2 * cos(an2 / 180 * 3.14159265359);
				i2 = mo2 * sin(an2 / 180 * 3.14159265359);

			}
		}
		
		switch (op)
		{

		case 1:
		
			realR = r1 + r2;
			imagR = i1 + i2;
			aux = realR * realR + imagR * imagR;
			modR = sqrt(aux);
			angR = atan(imagR / realR) * 180 / 3.14159265359;
			printf(" Resultado da soma e: %f +j%f \n", realR, imagR);
			printf(" Resultado da soma e: %f/_%f \n", modR, angR);

			break;

		case 2 :
		
			realR = r1 - r2;
			imagR = i1 - i2;
			aux = realR * realR + imagR * imagR;
			modR = sqrt(aux);
			angR = atan(imagR / realR) * 180 / 3.14159265359;
			printf(" Resultado da subtracao e: %f +j%f \n", realR, imagR);
			printf(" Resultado da subtracao e: %f/_%f \n", modR, angR);
			
			break;
		
		case 3 :
		
			modR = mo1 / mo2;
			angR = an1 - an2;
			realR = modR * cos(angR / 180 * 3.14159265359);
			imagR = modR * sin(angR / 180 * 3.14159265359);
			printf(" Resultado da divisao e: %f +j%f \n", realR, imagR);
			printf(" Resultado da divisao e: %f/_%f \n", modR, angR);
		
			break;

		case 4 : 

			modR = mo1 * mo2;
			angR = an1 + an2;
			realR = modR * cos(angR / 180 * 3.14159265359);
			imagR = modR * sin(angR / 180 * 3.14159265359);
			printf(" Resultado da multiplicacao e: %f +j%f \n", realR, imagR);
			printf(" Resultado da multiplicacao e: %f/_%f \n", modR, angR);

			break;

		case 5 :
			printf(" O angulo e: %f\n, ", an1);

			break;

		case 6 :
		
			printf(" O modulo e: %f\n, ", mo1);

			break;
		
		case 7 :
		
			printf(" A parte real e: %f\n, ", r1);

			break;

		case 8 :
		
			printf(" A parte imaginaria e: %f\n, ", i1);

			break;

		case 9:
			realR = r1;
			imagR = -i1;
			modR = mo1;
			angR = -an1;
			printf(" Resultado do complexo conjugado e: %f +j%f \n", realR, imagR);
			printf(" Resultado do complexo conjugado e: %f/_%f \n", modR, angR);

			break;

		default: 

			printf("Invalido !");

		}

		printf("Deseja fazer um novo calculo?\n");
		printf("1. Sim\n");
		printf("2. Nao\n");
		fflush(stdin);
		scanf("%d", &sair);
	} while (sair == 1);
	printf("\n\n");
	system("PAUSE");
	return 0;
}
