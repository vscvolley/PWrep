#include <stdio.h>
#include <stdlib.h>




void contarletras(char *frase,char letra,char l1){
	int d,contador=0;
	
	
	for(d=0;d< strlen(frase);d++){
		if(frase[d]==letra)
		frase[d]=l1;
		contador++;
	}

	printf("A letra a aparece %s vezes",frase);

}





int main() {
	int d;
	char frase[50];
	char letra,l1;

	
	printf("Intruduza a sua frase:");
	gets(frase);
	printf("Letra:");
	scanf("%c",&letra);
	fflush(stdin);
	printf("Letra nova:");
	scanf("%c",&l1);

	contarletras(frase,letra,l1);
	

	return 0;
}
