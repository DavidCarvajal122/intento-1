#include <stdio.h>
int main (){
    int i, num; 
    int factorial = 1;
    printf ("ingrese numero\n");
    scanf ("%d",&num);
    for (i=1;i<=num; i++){
        factorial = factorial * i; 
    }
    printf ("El factorial es: %d",factorial);
    return 0;
}
