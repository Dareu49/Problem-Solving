// Started: 09 May 2025, 09:30 pm
// Solved: 10 May 2025, 10:39 am
#include <stdio.h> //scanf(), printf()

int main(){
    int count = 0;
    long long n;
    scanf("%lld",&n);

    while(n != 0){
        if(n % 10 == 4 || n % 10 == 7){
            count++;
        }
            n = n / 10;
    }

    if(count == 4 || count == 7){
        printf("YES");
    }
    else{
        printf("NO");
    }

return 0;
}
