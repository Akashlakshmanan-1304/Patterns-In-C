#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k,q=0,q2,q3=0;
    printf("Enter n:");
    scanf("%d",&n);
    q2=ceil(n/2);
    for(i=q2;i>=0;i--){
        for(k=0;k<i;k++)
        printf(" ");
        for(j=0;j<n-1;j++)
        printf("*");
        printf("\n");
        }
    
    for(i=q2+1;i<n;i++){
        for(k=1;k<i-1;k++)
        printf(" ");
        for(j=0;j<n-1;j++)
        printf("*");
        printf("\n");
        }
}
/*
Output:
Enter n:5
  ****
 ****
****
 ****
  ****
*/