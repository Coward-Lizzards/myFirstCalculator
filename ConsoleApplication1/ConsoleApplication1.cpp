// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch;
	double a,b;
	
	// main loop
	while (1) {
		//pegar char
		printf("\nPara sair digite(x)\nDigite um operador (+,-,*,/):");
		scanf_s("%c", &ch);
		
		// pegar valores de a e b
		printf("\nInsira os valores de 'a' e 'b':");
		scanf_s("%lf %lf", &a, &b);

		// sair
		if (ch == 'x')
			exit(0);

		switch (ch) {
			// adição
		case '+':
			printf("\n%.2lf+%.2lf=%.2lf", a, b, a + b);
			break;

			// subtração
		case '-':
			printf("\n%.2lf-%.2lf=%.2lf", a, b, a - b);
			break;

			// multiplicação
		case '*':
			printf("\n%.2lf*%.2lf=%.2lf", a, b, a * b);
			break;

			// divisão
		case '/':
			printf("\n%.2lf/%.2lf=%.2lf", a, b, a / b);
			break;

		default:
			printf("\nErro! digite um operador valido!");
			break;
		}

	}

	return 0;
}