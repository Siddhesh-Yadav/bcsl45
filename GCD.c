#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    printf("Enter the value of m and n: ");
    scanf("%d %d",&m,&n);
    int a = m;
    int b = n;
    while (m > 0){
        if (n > m){
            int temp = m;
            m = n;
            n = temp;
        }
        m = m-n;        
    }
    printf("The GCD of the numbers %d and %d is %d",a,b,n);

    return 0;
}