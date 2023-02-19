#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void writeToFile(char num[]){
	char name[50];
	printf("Name ");
	scanf("%s",name);
	FILE* fp;
	fp = fopen(name, "a");	
	fputs(num, fp);
	fclose(fp);
}
int main(){
	char num[11];
	while(1){
	printf("1 TO ADD\n2 TO DELETE\n3 TO SEARCH\n0 TO EXIT\n");
	int i;
	scanf("%d",&i);
	switch(i){
	case 1:
	printf("Number ");
	scanf("%s",num);
	writeToFile(num);
	printf("Added\n");	
	break;
	case 2:
	char name[50];
	printf("Name ");
	scanf("%s",name);
    remove(name);
    printf("Deleted\n");
  	break;
	case 3:
	FILE* ptr;
	char str[100];
	printf("Name ");
	scanf("%s",name);
	ptr = fopen(name,"r");
	while (fgets(str, 50, ptr) != NULL) {
    printf("Number %s\n", str);
    }
    if(ptr==NULL){
	printf("Contact Not Found\n");
	}
    break;
	case 0:
	exit(0);
}
}
	return 0;
}

