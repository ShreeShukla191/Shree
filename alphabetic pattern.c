#include <stdio.h>

int main() {
    int n=6,i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf("%c",'A'+j);
        }
        for(k=0;k<2*i-1;k++){
            printf(" ");
        }
        for(j=0;j<n-i;j++){
            if(i==0 && j==0){
              continue;   
            }
            printf("%c",'A'+n-j-i-1);
        }
        printf("\n");
    }
}

