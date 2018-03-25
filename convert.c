#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *GetCalRational(char data[1024]){


	char input[1024];
	//input=*data;
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
	char input[1024];
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
	char input[1024];
	char *set;
	set=strtok(data,",");
	set=strtok(NULL,",");
	return set;

}


int main(){


FILE *File, *FileV2, *FileV3,*file;
File = fopen("data1.csv","r");
file = fopen("data2.csv","w+");
char *test, *Test;
char data[1024];

while(fgets(data,1024,File)){

	char *set;
	set=GetCalRational(data);
		printf("-GetCal\n");
	printf("set=%s\n",set);
}
fclose(File);
File = fopen("data1.csv","r");
char data2[1024];
while(fgets(data2,1024,File)){
	char *set1;
	set1=GetValue(data2);
	printf("-Value");
	printf("set1=%s\n",set1);
}
fclose(File);
FileV3 = fopen("data1.csv","r");


char data3[1024];
while(fgets(data3,1024,FileV3)){

	char *set2;
	set2=GetProperty(data3);
	printf("-Property\n");
	printf("%s\n",set2);
}
fclose(File);
return 0;


}