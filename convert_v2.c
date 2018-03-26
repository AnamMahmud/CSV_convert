#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Table{
	char *Property;
	char *Value;
	char *Variant_Base;
	char *Variant_name;
	char *Semata_Rationale;
}
typedef Table;
char *GetCalRational(char data[1024]){
	int count;
	count=2;
	char *set;
	set=strtok(data,",");
	while(count--){
		set=strtok(NULL,",");
	}
	return set;
}
char *GetValue(char data[1024]){
	//input=*data;
	int count;
	count=1;
	char *set;
	//printf("%s\n",data);
	set=strtok(data,",");
	while(count--){
		set=strtok(NULL,",");
	}
	return set;

}

char *GetProperty(char data[1024]){
	int count;
	char *set;
	set=strtok(data,",");
	//set=strtok(NULL,",");
	return set;

}
static Table TAB[10];
int main(){


FILE *File, *FileV2;

int i,j,k;
i=0;
j=0;
k=0;

/*-----------------------*/
File = fopen("data2.csv","r");
char data3[1024];
while(fgets(data3,1024,File)){
	TAB[k].Property=GetProperty(data3);;
	printf("%s\n",TAB[k++].Property);
}


//fclose(File);
/*----------------------------*/
printf("\n");
/*-----------------------------------------------------*/
File = fopen("data2.csv","r");
char data2[1024];
while(fgets(data2,1024,File)){

	TAB[j].Value=GetValue(data2);
	printf("%s\n",TAB[j].Value);
	j++;
}
//fclose(File);
 /*-----------------------------------------------*/
printf("\n");
/*------------------------------------------*/
File = fopen("data2.csv","r");
char data[1024];
while(fgets(data,1024,File)){

	char *set;
	//set=(Table*)malloc(sizeof(data));
	set=GetCalRational(data);
	TAB[i].Semata_Rationale=set;
	printf("%s\n",TAB[i].Semata_Rationale);
	i++;
}
//fclose(File);

printf("i==%d\n",i);
	printf("pro==%s\n",TAB[0].Property);


	fclose(File);
	/* 0== ead
	   1==ad
	   2==NULL
	   3==bread

	//printf("cnt=%d\n",cnt);
	//cnt++;
//}
//fclose(FileV2);*/


/*FILE *fp;
char* str = "string";
int x = 10;

fp=fopen("test.txt", "w");
if(fp == NULL)
    exit(-1);
fprintf(fp, "This is a string which is written to a file\n");
fprintf(fp, "The string has %d words and keyword %s\n", x, str);
fclose(fp);*/



return 0;


}