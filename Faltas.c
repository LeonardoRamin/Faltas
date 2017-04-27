#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float nota1;
	float nota2;
	float media;
	float guardar;
	float exame;
	float falta;
	float frequencia;
	float carga_h;
	float ausencia;
	float nota_exame;
	
	printf("Digite a primeira nota:");
	scanf("%f",&nota1);
	printf("Digite a segunda nota:");
	scanf("%f",&nota2);
	media=(nota1+nota2)/2;
	
	printf("Qual a carga horaria total do curso?");
	scanf("%f",&carga_h);
	falta=carga_h*0,25;
	
	printf("Quantas faltas voce teve?");
	scanf("%f",&ausencia);
	frequencia=ausencia*3;	
	
	if(frequencia<=falta && media>=7,0){
		printf("APROVADO, com as notas %f e %f.",nota1,nota2);
	}
	if(frequencia<=falta && media>4,0 || media<7,0){
		printf("Voce vai fazer o EXAME FINAL!");
		printf("\nQual foi sua nota no exame?");
		scanf("%i",&nota_exame);
		guardar=(100-media);
		exame=100-guardar;
		if(exame>=nota_exame){
			printf("Voce passou no exame final, esta APROVADO.");
		}
		else{
			printf("Infelizmente voce nao passou no exame final, esta REPROVADO.");
		}
	}
	if(frequencia>falta || media<4){
		printf("Voce foi REPROVADO, com as notas %f e %f.",nota1,nota2);
	}
	
	
	return 0;
}
