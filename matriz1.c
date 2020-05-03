#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>





#define NUMELEM 2







void ler_matriz(int mat[][NUMELEM])

{

	int i,j;

	for(i=0;i<NUMELEM;i++)

		for(j=0;j<NUMELEM;j++)

		{

			printf("[%d][%d]=",i,j);

			scanf("%d",&mat[i][j]);

		}

}

void listar_matriz(int mat[][NUMELEM])

{

	int i,j;



	for(i=0;i<NUMELEM;i++){

		for(j=0;j<NUMELEM;j++)

			printf("%d\t",mat[i][j]);

		printf("\n");

	}



}



void pesquisa_matriz(int mat[][NUMELEM],int n)

{

	int i,j,flg=0;

	for(i=0;i<NUMELEM;i++)

		for(j=0;j<NUMELEM;j++)

			if(mat[i][j]==n){

				printf("[%d][%d]=%d\n",i,j,mat[i][j]);

				flg=1;

			}

	if(!flg)

		printf("O numero %d nao existe na matriz\n",n);



}



char menu()

{

	char opcao;

	printf("\n\nMENU\n");

	printf("[I]nserir dados\n");

	printf("[L]istar dados\n");

	printf("[P]esquisar\n");

	printf("[S]air\n");

	fflush(stdin);

	printf("\n\nQual é a opção: ");

	opcao=getchar();

	return tolower(opcao);



}



void main()

{

/*

matriz como variavel local a funcao main

*/



int matriz[NUMELEM][NUMELEM];



	int n;

	char op;

	do{

		op=menu();

		if(op!='s')

			switch(op)

			{

				case 'i':ler_matriz(matriz);

					break;

				case 'l':listar_matriz(matriz);

					break;

				case 'p':printf("Indique o numero a procurar : \n");

					scanf("%d",&n);

					pesquisa_matriz(matriz,n);

					break;



				default: printf("Opção errada!!!\n");



			}

	}
	while(op!='s');



}