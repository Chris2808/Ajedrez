#include <stdio.h>
#include <stdlib.h>

int Torre(int c, int c1, int d, int d1);
int Reina(int c, int b, int a1, int b1);
int Rey(int c, int c1, int d, int d1);
int alfil(int c, int c1, int d, int d1);

int main(int argc, char *argv[]){
	int i, c, c1, d, d1;
		do{
		printf("Ingrese cordenadas de un tablero de ajedrez, separadas por una coma\n");
		printf("ingrese cordenada 1\n");
		scanf("%d, %d", &c, &c1);
		printf("ingrese cordenada 2\n");
		scanf("%d, %d", &d, &d1);
		if(c>8)||(c1>8)||(d>8)||(d1>8){
		printf("Intenta de nuevo\n");
		}
		}while(c<8&&c1<8)||(d<8&&d1<8);
		
	return 0;
}
int Torre(int c, int c1, int d, int d1){
	if((c-d==0)||(c1-d1==0)){
		print("El movimiento para la torre es valido\n");
	}else{
	printf("El movimiento para la torre no es valido")
	}
}
int Reina(int c, int c1, int d, int d1){
	
}
