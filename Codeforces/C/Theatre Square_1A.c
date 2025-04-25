#include <stdio.h>
#include <math.h>
int main(){
    int n, m, a;
    scanf("%d%d%d",&n,&m,&a);
    printf("%lld",((long long)ceil((double)n/a)) * ((long long)ceil((double)m/a)));
return 0;}
