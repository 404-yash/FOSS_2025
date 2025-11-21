#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int l=n+1;
    for(int i=0;i<l;i++){
        for(int j=l-1;j>i;j--){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n\n");
    }
    return 0;
}
