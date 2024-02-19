#include<stdio.h>
int main(){
    int n,i,j,k,q;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(k=i;k<n;k++){
            printf("*");
        }
        for(j=0;j<i-1;j++){
printf("  ");
        }
        for(q=j-1;q<i;q++){
            printf("  ");
        }
        for(k=q-1;k<n-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(k=0;k<i+1;k++){
            printf("*");
        }
        for(j=i-1;j<n-1;j++){
printf("  ");
        }
        
        for(k=0;k<i+1;k++){
            printf("*");
        }
        
        printf("\n");
    }
}
/*
Output:
Enter n:5
*****  *****
****    ****
***      ***
**        **
*          *
**        **
***      ***
****    ****
*****  *****

*/