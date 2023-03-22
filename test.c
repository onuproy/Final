#include<stdio.h>
int main(){

    int num;
    printf("Please Enter your number=");
    scanf("%d",&num);
    printf("Your password: %d\n",num);


}
// Large , small , average of array
#include<stdio.h>

//int main()
{
    int arr[100], i, num, sum = 0, avg;
    printf("Please Enter Element=");
    scanf("%d",&num);
    for(i = 0; i < num; ++i){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = sum / num;
    printf(" Average %d\n", avg);
    return 0;
}
