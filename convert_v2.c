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


int main(){


FILE *File, *FileV2;
File = fopen("data2.csv","r");
//FileV2= fopen("data2.csv","w+");

char *test, *Test;
char data[1024];
static int i,j,k;
while(fgets(data,1024,File)){

	char *set,*meta[8];
	set=GetCalRational(data);
	//meta[i++]=set;
	printf("%s\n",set);
}
fclose(File);
File = fopen("data2.csv","r");
char data2[1024];
while(fgets(data2,1024,File)){

	char *set1,*Value[8];
	set1=GetValue(data2);
		//Value[j++]=set1;
	//printf("%s\n",Value[]);
	printf("%s\n",set1);
}
fclose(File);
File = fopen("data2.csv","r");
char data3[1024];
while(fgets(data3,1024,File)){

	char *set2, *Property[8];
	set2=GetProperty(data3);
	//printf("-Property\n");
	printf("%s\n",set2);
}
fclose(File);
return 0;


}