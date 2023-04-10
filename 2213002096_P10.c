#include<stdio.h>

int main(){
	int c, cp, ci, n;
	
for(c=1 ; c<=100 ; c++){
	printf("Introduzca un numero\n");
	scanf("%d", &n);
	if(n<=100 && n>=0){
		
		printf("Los pares son: ");
		
		for(cp=0 ; cp<=n; cp+= 2){
 		printf("%d ", cp);		
		}
		
		printf("\nLos impares son: ");
		
		for(ci=1 ; ci<=n ; ci+=2){
		printf("%d ", ci);
		}
		printf("\n");
	}
	
	else{
	printf("Este no es un numero valido\n");
	}
	
}
return 0;
}
