#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
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