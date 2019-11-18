#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char aux[7];
	unsigned addr,page,s,tmp,pagesize;
	pagesize =  4096;
	strcpy(aux,"5570ce00");
	addr = (int)strtol(aux, NULL, 16);
	printf("addr: %d\n",addr);

	s= 0;
	tmp = pagesize;
	while(tmp>1){
		tmp=  tmp>>1;
		s++;
	}

	page = addr>>s;
	printf("page: %d\n",page);
	printf("s: %d",s);

}