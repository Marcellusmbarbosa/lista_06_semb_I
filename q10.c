# include <stdio.h>
typedef struct{
	int x, y;
	char c;
} t_ponto;

int main(){
	printf("%ld bytes\n", sizeof(t_ponto));
return 0;
}