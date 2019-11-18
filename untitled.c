#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	int adress;
	char permision; 
	scanf("%x",&adress);
	scanf("%[^\n]c", &permision);
	printf("%x %c",adress,permision); 
	while((scanf("%x",&adress);) != EOF){
		scanf("%[^\n]c", &permision);
		printf("%x %c",adress,permision); 
	}

	return 0;
}