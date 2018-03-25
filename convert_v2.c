#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *GetCalRational(char data[1024]){
	int count;
	count=2;
	char *set;
	//printf("%s\n",data);
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
struct Table{
	char *Property;
	char *Value;
	char *Variant_Base;
	char *Variant_name;
	char *Semata_Rationale;
}
typedef Table;

int main(){

static Table TAB[10];
FILE *File, *FileV2;

//FileV2= fopen("data2.csv","w+");


static int i,j,k;
/*-----------------------*/
File = fopen("data2.csv","r");
char data3[1024];
while(fgets(data3,1024,File)){

	char *set2;
	//set2=GetProperty(data3);
	TAB[k].Property=GetProperty(data3);
	printf("%s",TAB[k++].Property);
}
fclose(File);
/*----------------------------*/
printf("\n");
/*-----------------------------------------------------*/
File = fopen("data2.csv","r");
char data2[1024];
while(fgets(data2,1024,File)){

	char *set1;
	//set1=GetValue(data2);
	TAB[j].Value=GetValue(data2);
	printf("%s\n",TAB[j++].Value);
}
fclose(File);
 /*-----------------------------------------------*/
printf("\n");
/*------------------------------------------*/
File = fopen("data2.csv","r");
char data[1024];
while(fgets(data,1024,File)){

	char *set;
	//set=GetCalRational(data);
	TAB[i].Semata_Rationale=GetCalRational(data);
	printf("%s\n",TAB[i++].Semata_Rationale);
}
fclose(File);

//FileV2 = fopen("Newdata.csv","w+");
int cnt;
cnt=0;
printf("i==%d\n",i);
//if(cnt<i){
	//fprintf(FileV2, "%s,%s,%s",TAB[cnt++].Property,TAB[cnt++].Value,TAB[cnt++].Semata_Rationale );
	//printf("%s%s%s\n",TAB[0].Property, TAB[0].Value, TAB[0].Semata_Rationale);
	printf("pro==%s\n",TAB[1].Value);

	//printf("cnt=%d\n",cnt);
	//cnt++;
//}
//fclose(FileV2);


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