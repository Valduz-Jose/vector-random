#include <stdio.h>
#include <stdlib.h>
#define T 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vector[T];
	int x,nv,cp,cimp;
	
	do{
		printf("Numero de elementos[5-%d]: ",T);
		scanf("%d",&nv);
	}while(!(nv>4&&nv<=T));
	srand(time(0));
	for(x=0;x<nv;x++){
		vector[x]=rand()%100+100;
	}
	for(x=0;x<nv;x++){
		printf("\n%d",vector[x]);
		if(x%5==0&&x>0){
			printf("\n\n\t");
			system("PAUSE");
		}
	}
	cp=0;cimp=0;
	for(x=0;x<nv;x++){
		if(vector[x]%2==0){
			cp++;
		}else{
			cimp++;
		}
	}
	return 0;
}

