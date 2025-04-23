//Write a C program to implement Diffie-Hellman key exchange algirithm

#include<stdio.h>
#include<math.h>

long long int power (long long int a, long long int b, long long int P){
    if (b==1) return a;
    else
    return (((long long int)pow(a, b))%P);
}
int main(){
    long long int P, G, x, a, y, b, ka, kb;
    printf("Enter the value of P:\n" );
    scanf("%lld", &P);
    printf("Enter the value of G:\n" );
    scanf("%lld", &G);
    printf("Enter the private key for Alice:");
    scanf("%lld", &a);
    x=power(G,a,P);
    printf("Enter the private key for Bob:");
    scanf("%lld", &b);
    y=power(G,b,P);
    ka=power(y,a,P);
    kb=power(x,b,P);
    printf("Secret key for the Alice is: %lld\n", ka);
    printf("Secret key for the Bob is: %lld\n", kb);
    return 0;
}


//OUTPUT
//Enter the value of P:
//23
//Enter the value of G:
//9
//Enter the private key for Alice:4
//Enter the private key for Bob:3
//Secret key for the Alice is: 9
//Secret key for the Bob is: 9