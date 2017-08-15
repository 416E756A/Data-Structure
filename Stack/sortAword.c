#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c[]="programming";
	int i;
	int count[26]={0};
	for(i=0;c[i]!='\0';i++)
		++count[c[i]-'a'];
	for(i=0;i<26;i++)
	{
		while(count[i]!=0){
			printf("%c",i+97);
			count[i]--;
		}

	}

	return 0;
}