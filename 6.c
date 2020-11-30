#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 128
#define MINTA "AAA-123"
int getline(char s[],int lim);




void main(void){
	char c;
	int j,i,hossz;
	char szoveg[MAX];
	char s[MAX];
	int joe;

	joe=1;

	printf("Kerem rendszamot, pl.:%s\n",MINTA);
	hossz = getline(s,MAX);
	if (hossz != 7){
		printf("rossz hossz\n");
		joe =0;
	}
	else {
		for (i=0;i<3;i++){
			if(!isupper(s[i])){
				printf("Nem nagy betu: %c\n",s[i]);
				joe=0;
			}
			
		}
		if (s[3] != '-'){
			printf("Nem kotojel a kozepe!\n");
			joe=0;
		}
		for (i=4;i<hossz;i++){
			if(!isdigit(s[i])){
				printf("Nem szam: %c\n",s[i]);
				joe=0;
			}
			
		}

	}
	
	if (joe == 1){
		printf("Jo a rendszam!\n");
	}

	getchar();
}

int getline(char s[],int lim)
{
	int i,c;
	for(i=0; i<lim && (c=getchar())!=EOF && c!='\n'; ++i) s[i]=c;
	s[i]='\0';
	while(c!=EOF && c!='\n') c=getchar();
	return i;
}