#include<stdio.h>
int main(){
    int n,i,j,k,q,m=65,m2=64;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n+1;i++){
        for(k=i;k<n;k++){
            printf(" ");
        }
        for(j=0;j<i;j++){
printf("%c",m);

        }
for(k=0;k<i;k++){
    if(i==1)
    {
    printf(" ");   
    }
    else{
        printf("%c",m2);
    }
}    
         m2++;
        printf("\n");
    }
}
/*
Output:
Enter n:5
     
    A 
   AABB
  AAACCC
 AAAADDDD
AAAAAEEEEE
*/