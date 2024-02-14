#include<stdio.h>
int main(){
    int n,i,j,k,m=65;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n+1;i++){
        for(k=i;k<n;k++){
            printf(" ");
        }
        for(j=0;j<i;j++){
printf("%c ",m);
m++;
        }
        
        printf("\n");
    }
}
/*
Output:
Enter n:5
     
    A 
   B C 
  D E F 
 G H I J 
K L M N O 
*/