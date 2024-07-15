/*The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n
 eyes, m
 mouths and k
 bodies, what is the largest number of Katryoshkas he can make?
Input
Only one line containing three numbers n
, m
 and k
 (0≤n,m,k≤1018
) – the number of eyes, mouths and bodies respectively.

Output
Print the largest number of Katryoshkas he can make.

Examples
inputCopy
1 2 3
outputCopy
1
inputCopy
0 11 2
outputCopy
0
inputCopy
90 24 89
outputCopy
57
*/
#include<stdio.h>
  int main(){
    long long int e,m,b,m1,b1,e1,e2,b2,body;
    scanf("%lld %lld %lld",&e,&m,&b);
    if(e==0){
        printf("0");
    }
    else if(m<=e&&m<=b){
        m1=m+0;
         b1=b-m1;
         e1=e-m1;
         e2=(e1/2);
        if(e2<=b1){
         b2=e2;
         body=m+b2;
        printf("%lld",body);
        }
        // body=m+b2;
        //printf("%d",body);
        else if(e2>b1){
            e2=b1;
            body=m+e2;
            printf("%lld",body);
        }
    }
    else if(b<=e&&b<=m){
        body=b;
        printf("%lld",body);
    }
    else if(e<=b&&e<=b){
        body=e;
        printf("%lld",body);
    }
    else if((e/2)==b){
        body=b;
        printf("%lld",b);
    }
    else{
        printf("0");
    }
    return 0;
}