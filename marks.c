#include<stdio.h>
int main()
{
    int a,b,c,d,e,p,t,cp;
    printf("Enter the marks");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    p=(t/500)*100;

    if (t>=500 || t<=0)
       printf("VALID MARKS");
      else if (p>=90)
       printf("grade A");
      else if (p>=70) 
       printf("grade B");
      else if (p>=40)
       printf("grade C");
      else if (p<40)
       printf("Failed");
return 0;       ;

} 