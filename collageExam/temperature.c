#include <stdio.h>

int main(){
    //program that converts celsuis to fahrenhiet

    int tempInC = 0;
    float tempInF = 0;
    printf("enter temperatue in celsius\n");
    scanf("%d", &tempInC);
    
    tempInF = (9.0/5.0)*tempInC +32;
    printf("temprature in fahrenheit is : %.1f", tempInF);
}