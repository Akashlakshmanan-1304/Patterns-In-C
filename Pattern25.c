#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k,q=0;
    printf("Enter n:");
    scanf("%d",&n);
    q=ceil(n/2);
    for(i=0;i<n+1;i++){
        for(k=i;k<n;k++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
    if(j==1){
   printf("%d ",j);
  //  printf("J:%d\n",j);
    }
    else
    {
        printf("%d ",j+(j+1));
  //  printf("J2:%d %d %d\n",j,+(j+1),j+1);
    }
        }    
        for(j=i-1;j>0;j--){
           printf("%d ",j);
        }
        printf("\n");
    }
}
/*
Output:
Enter n:5
          
        1 
      1 5 1 
    1 5 7 2 1 
  1 5 7 9 3 2 1 
1 5 7 9 11 4 3 2 1 
*/