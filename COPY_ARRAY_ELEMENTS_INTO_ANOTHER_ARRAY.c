#include <stdio.h>

int main() {
    // Write C code here
    int n,i;
    printf("Enter n value:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
    return 0;
    
}
