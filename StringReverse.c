#include<stdio.h>
#include<string.h>
int main()
{
  char str[100]="NIAWS TIHSRAD", strrev[100],temp[100];;
  printf("\nEnter the string to be reverse");
  int i,j;
  j=strlen(str);
  //while(str[i]!='\0')
  //{
    // j++;
  //}
  //printf("%d",j);
  i=0;
  j=j-1;
  for(i=0;i<j;i++)
  {
    strrev[i]=str[j];
    j--;
  }
 
}



