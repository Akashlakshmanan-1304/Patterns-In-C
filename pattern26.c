#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k,q;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=0;i<n+1;i++){
        for(k=i;k<n;k++){
            printf(" ");
        }
        for(j=1;j<i+1;j++)
        {
            printf("%d",j);
        }
        for(k=i-1;k>0;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
/*
Output:
Enter n:5
     
    1
   121
  12321
 1234321
123454321
*/