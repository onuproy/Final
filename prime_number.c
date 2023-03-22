#include<stdio.h>
#include<conio.h>
    void main(){
    int n;
    int prime=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (int i= 2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
        if(prime==0 ){
            printf(" %d is not prime number.\n",n);
        }
    else{
         printf(" %d is prime number\n",n);
    }

    return 0;
}

