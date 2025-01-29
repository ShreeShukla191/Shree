#include <stdio.h>
int main() {
    int n=5,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d",n-j);
        }
        for(j=0;j<2*(n-i-1);j++){
            printf("%d",n-i);
        }
        for(j=1;j<i+1;j++){
            printf("%d",j+n-i);
        }
        printf("\n");
    }
    
    for( i=0;i<n-1;i++){
        for( j=0;j<n-i-1;j++){
            printf("%d",n-j);
        }
        for(j=0;j<2*i+1;j++){
            printf("%d",i+2);
        }
        for( j=0;j<n-i-1;j++){
            printf("%d",i+j+2);
        }
        
        printf("\n");
    }

    return 0;
}

