# include<stdio.h>
# include<conio.h>
struct  person
{
char name[50] ;
int age ;
float height ;
} ;

int  main( )
{
struct person per={ "Hari", 19, 5.6 } ;
printf("\n Person Details are : " ) ;
printf("\n Name: %s" ,per.name ) ;
printf("\n Age: %d" ,per.age ) ;
printf("\n Height: %f\n",per.height ) ;
return 0 ;
}
