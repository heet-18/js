#include<stdio.h>
int main(){
    int rev=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("Reverse of the number is %d",rev);
    return 0;
}