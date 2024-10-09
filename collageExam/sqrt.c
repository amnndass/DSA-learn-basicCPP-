#include <stdio.h>
#include <math.h>

int check(int n){
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }

    for(int i = 3; i<sqrt(n); i= i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;


}

int main(){

    int num = 0;
    scanf("%d", &num);

    //check if the number is prime
    if(check(num)){
        printf("is prime");
    }else{
        printf("not prime");
    }
}