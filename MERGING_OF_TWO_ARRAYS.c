#include<stdio.h>
int main(){
int n,I,k=0;
printf("enter n");
scanf("%d",&n);
int a1[n],a2[n],a[n];
printf("enter array 1 elements:");
for(I=0;I<n;I++)
scanf("%d",&a1[I]);
printf("enter array 2 elements:");
for(I=0;I<n;I++)
scanf("%d",&a2[I]);
\\Merging
for(I=0;I<n;I++){
a[k]=a1[i];
k++;
a[k]=a2[i];
k++;
}
printf("after merging");
for(I=0;I<2*n;I++)
printf("%d",a[i]);

return 0;
}
