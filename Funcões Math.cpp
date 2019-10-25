#include <stdio.h>
#include<math.h>
/*****************************************************************************/

void num_primo();
void n_num_primo();
void fatorial();
void potencia();
void raiz();
void anobis();
void media();
void matrihexa();
void media_p();

/*****************************************************************************/

int main(void){
	int num;
	num =1;
	while(num!=0){
	
	printf("+++++++++++++++++++++++++++++++++++++++++\n");
	printf("1-para Fatorial\n");
	printf("2-numero primo\n");
	printf("3-para varios numeros primos\n");
	printf("4-potencia(cientifica)\n");
	printf("5-raiz(cientifica)\n");
	printf("6-para ano bissexto\n");
	printf("7-media de 2 notas\n");
	printf("8-media de 3 provas\n");
	printf("9-matricula em hexadecimal\n");
	printf("+++++++++++++++++++++++++++++++++++++++++\n\n");
	printf("digite um numero:");
	scanf("%d",&num);

/******************************************************************************************************/	
	switch(num){
		case 1:
			fatorial();
			break;
		case 2: 
			num_primo();
			break;
		case 3:
			n_num_primo();
		    break;	
		case 4:
			potencia();
			break;
		case 5:
			raiz();
			break;	
		case 6:
			anobis();
			break;	
		case 7:
			media();
			break;	
		case 8:
			media_p ();
			break;
		case 9:
			matrihexa();
			break;		
		default:
		 printf("programa encerrado");    
	}
	
	
}
}

/*****************************************************************************************************/
void num_primo(){
	int num, i, resultado = 0;
 
 	printf("Digite um numero inteiro positivo: ");
 	scanf("%d", &num);
 
 	for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d e um numero primo\n", num);
 else
    printf("%d nao e um numero primo\n", num);
}

void n_num_primo(){

	int num, i,parar, resultado = 0;
	parar=0;
while(parar<=0){
   
 printf("Digite um numero inteiro positivo: ");
 scanf("%d", &num);


 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d e um numero primo\n", num);
 else
    printf("%d nao e um numero primo\n", num);
    printf("******************************\n");
    printf("continuar-0/parar-1:");
    scanf("%d",&parar);
    printf("******************************\n");
}

}

void fatorial(){ 
	int num, cont;
	
	printf("Digite o numero: ");
	scanf("%d", &num);
	for(cont = (num - 1); cont > 1; cont--){
		num *= cont;
	}
	
	printf("O fatorial e: %d\n", num);
}

void potencia (){
	int b;
	float a,result;
	printf("digite um numero decimal:");
	scanf("%f",&a);
	printf("digite um numero natural:");
	scanf("%d",&b);
	printf("%e\n",pow(a,b));// %e ou %E para retornar em notação cientifica
}

void raiz(){
	 float k,a;
	 int b;
	printf("digite um numero decimal:");
	scanf("%f",&a);
	printf("digite um numero:");
	scanf("%d",&b);
 	k = pow(a,1.0/b); 
    printf("%e\n",k);
}

void anobis (){
	long int ano;
	printf("informe um ano:");
	scanf("%d",&ano);
	if ((ano % 4) == 0){
		printf("%d e um ano bissexto\n",ano);
	}
	else 
		printf("%d nao e um ano bissexto\n",ano);
}

void media(){
	 float n1,n2,media;
	printf(" digite uma nota:");
		scanf("%f",&n1);
	printf("digite outra nota:");
		scanf("%f",&n2);
	if (0.0<= n1 && n2<= 10.0){
		
		media = (n1 + n2)/2;
	printf("notas validas\n");
	printf("sua media e:%f\n",media);
	}
	else 
	printf("notas invalidas!!!\n");	
}

void matrihexa(){
	
	printf("lucas helionel\n");
	printf("matricula:%X\n",1820023829);
}

void media_p (){
	int n1,n2,n3,media;
	
	printf("informe a nota 1:");
		scanf("%d",&n1);
	printf("informe a nota 2:");
		scanf("%d",&n2);
	printf("informe a nota 3:");
		scanf("%d",&n3);
		
	media=(n1+n2+(n3*2))/(1+1+2);
	
	if(media >=60){
		printf("sua media foi:%d\n",media);
		printf("APROVADO\n");
	}
	else 
		printf("sua media foi:%d\n",media);
		printf("REPROVADO\n");
}
