#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(k=0;k<i;k++){
            printf(" ");
        }
        for(j=i;j<n;j++){
printf("%d ",i+1);
        }
        
        printf("\n");
    }
}
/*
Output:
Enter n:5
1 1 1 1 1 
 2 2 2 2 
  3 3 3 
   4 4 
    5 
*/