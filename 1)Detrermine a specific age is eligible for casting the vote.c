#include <stdio.h>
int main()
{
  int vote_age;
  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     
       printf("Sorry, You are not eligible to caste your vote.\n");
     
  else
     printf("Congratulation! You are eligible for casting your vote.\n");
}

