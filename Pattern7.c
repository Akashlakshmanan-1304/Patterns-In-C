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
printf("* ");
        }
        
        printf("\n");
    }
}
/*
Output:
Enter n:5
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/