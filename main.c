#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculaPageSize(int n){

	return n*1024;
}

long potencia(int n){
	
	int aux,pot;

	pot = 2;
	aux = n;

	while(aux > 1){
		pot  = pot*2;
		aux--;
	}
	return pot;

}

void calculaAlocation(long* tableSize,long* memSize,long memtotal,int s,int d){

	printf("s:%d d:%d",s,d);
	 *tableSize = potencia(s);
	 *memSize = potencia(d);
	 *memSize =  *memSize -  *tableSize;

}

int calculaBitsPage(int pagesize){

	int s,tmp;
	s= 0;
	tmp = pagesize;
	while(tmp>1){
		tmp=  tmp>>1;
		s++;
	}

	return s;


}

int main(int argc, char* argv[]){

	char adress[7];
	char permision; 
	char aux[5],aux2[5];
	int s,d;
	long pagesize,tablesize,memsize,memtotal;

	strcpy(aux,argv[1]);
	strcpy(aux2,argv[2]);
	pagesize = atoi(aux);
	pagesize = calculaPageSize(pagesize);
	memtotal = atoi(aux2);
	memtotal = calculaPageSize(memtotal);
	printf("memtotal: %ld\n", memtotal);

	printf("pagsize: %ld\n",pagesize );
	s = calculaBitsPage(pagesize);
	d = calculaBitsPage(memtotal);
	calculaAlocation(&tablesize,&memsize,memtotal,s,d);
	printf("d e s: %d %d\n",d,s);

	printf("tablesize:%ld memsize:%ld s:%d\n",tablesize,memsize,s); 

	scanf("%s",adress);
	getchar();
	scanf("%c",&permision);
	getchar();
	while((scanf("%s",adress)) != EOF){
		getchar();
		scanf("%c",&permision);
		getchar();
	}

	return 0;
}