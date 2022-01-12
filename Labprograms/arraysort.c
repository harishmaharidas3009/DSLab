#include<stdio.h>
void main()
{
int a[20],b[20],s1,i,s2,n,temp;
printf("\nEnter the size of 1st array :\n");
scanf("%d",&s1);
printf("\nEnter sorted elements:");
for(i=0;i<s1;i++)
    {
    scanf("%d",&a[i]);
    }
printf("\nEnter the size of 2nd array:\n");
scanf("%d",&s2);
printf("\nEnter sorted Elements:\n");
 for(i=0;i<s2;i++)
    {
    scanf("%d",&b[i]);
    }
   n=s1+s2;
int c[n];
int j=0;
for(i=0;i<n;i++)
{
   if(i<s1)
    {
    c[i]=a[i];
    }
   else
   {
    c[i]=b[j];
    j++;
   }
}
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
     if(c[i]>c[j])
     {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
     }
    }
}
printf("\n The elements are:");
for(i=0;i<n;i++)
{
    printf("%d\t",c[i]);
}
}




