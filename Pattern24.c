#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k,q;
    printf("Enter n:");
    scanf("%d",&n);
    q=ceil(n/2);
    for(i=0;i<n+1;i++){
        for(k=i;k<n;k++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            if(j==0||j==i-1)
printf("1 ");
    
        else
        printf("2 ");
        }    
        printf("\n");
    }
}
/*
Output:
Enter n:5
     
    1 
   1 1 
  1 2 1 
 1 2 2 1 
1 2 2 2 1 
*/