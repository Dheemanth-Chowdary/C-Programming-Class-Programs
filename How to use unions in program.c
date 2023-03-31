#include<stdio.h>
#include<string.h>
union Data{
	int i;
	float f;
	char str[20];
};
int main()
{
	union Data data;
	data.i=10;
	data.f=220.5;
	strcpy(data.str,"C Programming");
	printf("Data.i:%d]n",data.i);
	printf("Data.f:%f\n",data.f);
	printf("Data.str:%s\n",data.str);
	return 0;
}
