#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n+1;i++){
        for(k=i;k<n;k++){
            printf("  ");
        }
        for(j=0;j<i;j++){
printf("* ");
        }
        
        printf("\n");
    }
}
/*
Output:
Enter n:5
          
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
*/