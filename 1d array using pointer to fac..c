#include<stdio.h>
#include<conio.h>
void main()
{
    int n=5,a[10],*ptrn,*ptre,i;
     int *ptrm, max=0;
    ptrn=&n;
    ptre=a;
        for(i=1;i<=*ptrn;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=*ptrn;i++)
    {
        printf("\n%d",(a+i));
         printf("\n%d",*(a+i));
        ptre++;
        //printf("%d",ptre++);
    }


   ptrm=&a[1];
   max=*ptrm;
   for(i=1;i<=n;i++)
   {
       if(max<*ptrm)
        max=*ptrm;
       ptrm++;
   }
   printf("\nmaximum =%d",max);

    return 0;
}
