#include<stdio.h>
#include<string.h>
int main() {
	
 char word[4][20] = {"Lamborgini","Marcedes","Supra","Fortunour"};
	int i,j;
for(i=0;i<4;i++){
		puts(word[i]);
        for(j=0;word[i][j]!='\0';j++) {
        	printf("%c\n",word[i][j]);
		}
}
	
	
	
	return 0;
}
