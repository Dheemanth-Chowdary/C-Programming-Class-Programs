# include <stdio.h>
# include <conio.h>
struct  student
{
char name [30] ;
int marks[ 5] ;
int total ;
float perc ;
} ;

int  main( )
{
struct student std ;
int i ;
printf("\n Enter your name: ") ;
gets( std.name ) ;
printf(" Enter 5 subjects marks :\n" ) ;
std.total = 0;
for( i=0; i< 5 ; i++ )
{
    printf(" Marks in subject %d : ", i+1 ) ;
    scanf("%d",&std.marks[i] ) ;
	std.total+= std.marks[i] ;
}
std.perc=(float)((float)std.total/(float)500)*100 ;
printf("\n Name : %s ", std.name ) ;
printf("\n Total Marks obtained : %d ", std.total ) ;
printf("\n Percentage : %.2f", std.perc ) ;
return 0 ;
}
