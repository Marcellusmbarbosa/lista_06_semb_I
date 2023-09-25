# include <stdio.h>
int main(){
	enum {black, blue, green, cyan, red} cores;
	cores = green;
	switch(cores){
		case 0:
			printf("Cor preto \n");
			break;
		case 1:
			printf("Cor azul \n");
			break;
		case 2:
			printf("Cor verde \n");
			break;
		case 3:
			printf("Cor ciano \n");
			break;
		case 4:
			printf("Cor vermelho \n");
			break;
		default:
			printf("?? \n");
	}
return 0;
}