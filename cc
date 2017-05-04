#include <stdio.h> // inicialização e finalização
#include <stdlib.h> // funções auxiliares
#include <conio.h> // funções matematicas
#include <math.h> // funções matematicas elaboradasd
#include <time.h> //tempo
#include <string.h> // palavras
#include <windows.h> //alterçãos de cores fundos e letras
#include <locale.h> //

int main () {

	int teste1, teste2;
	float result;
	printf("\n\n  ENTRE COM DOIS VALORES  \n\n");
	printf(" Favor informar o valor: ");
	scanf("%d",&teste1);
	printf(" Favor informar o segundo valor: ");
	scanf("%d",&teste2);
	result = teste1/teste2;
	printf("O resultado é %0.2f", result);
	system("pause");
	
	
	

}


//Variaveis
//char(caracter);
//int(inteiro);
//float(real,flutuante);
//double(ponto flutuante de dupla precisão);
//void(sem valor);
//setlocale(LC_ALL, "PORTUGUESE");


//Atribuição de valores
//quant = 15; -> Atribuição
//sinal de igual x == y
// %0.2f = limitar numero de casas apos a virgula
