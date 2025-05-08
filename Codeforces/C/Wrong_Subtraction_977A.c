// Started: 08 May 2025, 07:26 pm
// Solved: 08 May 2025, 07:42 pm
#include <stdio.h> //scanf(), printf()

int main(){
    int n, k;
    scanf("%d%d",&n,&k);
    while(k > 0){
        if(n % 10 == 0){
            n = n / 10;
        }
        else{
            n = n -1;
        }
        k--;
        }
        printf("%d",n);
return 0;
}
