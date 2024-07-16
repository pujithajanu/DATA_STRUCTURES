#include <stdio.h>

int main() {
    int n,i,j,ab,count=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        ab=a[i];
        c=0;
        for(j=i;j<n;j++){
            if(ab==a[j])
            c++;
        }
        if(c>1)
        count=count+1;
    }
    printf("no of duplicates:%d",count);
    return 0;
}
