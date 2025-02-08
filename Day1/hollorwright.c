#include<stdio.h>
int main()
{
  int n=5,i,j;
  for(i=0;i<n;i++){
  	for(j=0;j<i+1;j++){
  		if(i==n-1||j==0||i==j){
  			printf("* ");
		  }
		  else{
		  	printf(" ");
		  }
	  }
	  printf("\n");
  }	
  return 0;
}
