#include<stdio.h>
#include<string.h>
int main()
{
  char str[100]="NIAWS TIHSRAD\n", strrev[100];
  printf("\nEnter the string to be reverse");
  int i,j;
  while(str[i]!='\n')
  {
     j++;
  }
  printf("%d",j);
  i=0;
  for(i=0;i<j;i++)
  {
    strrev[i]=str[j];
    i++;
    j--;
  }
 
}



