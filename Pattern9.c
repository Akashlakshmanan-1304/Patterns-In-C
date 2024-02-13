#include<stdio.h>
int main(){
    int n,i,j,k,q;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n+1;i++){
        for(k=i;k<n;k++){
            printf(" ");
        }
        for(j=0;j<i+(i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}
/*
Output:
Enter n:5
     
    *
   ***
  *****
 *******
*********
*/