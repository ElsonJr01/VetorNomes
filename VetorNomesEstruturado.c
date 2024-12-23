//Vetor de nomes
#include<stdio.h>
void entraNomes(char vet[5][20]);
void main(void){
    //char *nome;
	int i, x,y;
	printf("Entre com linha=");
	scanf("%d",&x);
	printf("\nEntre com coluna=");
	scanf("%d",&y);
	char nome[x][y];
	entraNomes(nome[x]);
	
	
    printf("\nImprime os nomes no vetor de nomes\n");
    for(i=0;i<5;i++){
    	printf("%s\n",nome[i]);
	}
}

void entraNomes(char vet[]){
	int i;
	printf("Entra com os nomes\n");
	for(i=0; i<2; i++){
		printf("\nEntre com nome%d=",i+1);
		gets(vet[i]);
	}	
}
