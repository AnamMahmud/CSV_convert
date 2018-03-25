#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetCalRational(void){
		char input[1024];
	int count;
	count=2;

	File = fopen("data2.csv","r");
	while(fgets(data,1024,File)){


	char *set;
	//printf("%s\n",data);
	set=strtok(data,",");
		while(count--){
			set=strtok(NULL,",\n");
		}
		return set;
}
fclose(File);
	
}
char *GetValue(void){
	char input[1024];
	int count;
	count=1;

File = fopen("data2.csv","r");
while(fgets(data,1024,File)){


	char *set;
	//printf("%s\n",data);
	set=strtok(data,",");
	while(count--){
		set=strtok(NULL,",\n");
	}
}
fclose(File);
	return set;

}

char *GetProperty(char data[1024]){
	char input[1024];
	char *set;
	set=strtok(data,",");
	//set=strtok(NULL,",");
	return set;

}


int main(){


FILE *File, *FileV2, *FileV3,*file;
File = fopen("data2.csv","r");
//file = fopen("data2.csv","w+");
char *test, *Test;
char data[1024];

while(fgets(data,1024,File)){
		char *set2;
	set2=GetProperty(data);
	//printf("-Property\n");
	printf("Property=%s\n",set2);


	char *set;
	set=GetCalRational(data);
	//printf("-GetCal\n");
	printf("CAL=%s\n",set);

		//char *set1;
	set=GetValue(data);
	//printf("-Value");
	printf("Value=%s\n",set);

}
fclose(File);
/*File = fopen("data1.csv","r");
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
}*/
//fclose(File);
return 0;


}