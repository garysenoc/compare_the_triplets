#include <stdio.h>


int compareTriplets();
main(void)
{


   compareTriplets();


}

int compareTriplets()
{
   int a[3] = {};
   int  b[3] = {};
   int res[2] = {0,0};

   scanf("%d %d %d", &a[0],&a[1],&a[2]);
   scanf("%d %d %d", &b[0],&b[1],&b[2]);

   for(int i = 0 ;i<=2;i++)
   {


       if(a[i]>b[i])
       {
           res[0] = res[0]+1;

       }
       else if(a[i]<b[i])
       {
          res[1] = res[1]+1;

       }



   }

   for(int j = 0; j<=1;j++)
   {

         printf("%d ",res[j]);
   }
   return 0;
}
