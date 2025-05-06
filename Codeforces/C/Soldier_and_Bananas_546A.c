// Started: 06 May 2025, 05:09 pm
// Solved: 06 May 2025, 06:08 pm
#include <stdio.h>
int main (){
    int k, n, w, totalPrice = 0;
    scanf("%d%d%d", &k, &n, &w);
    for(int i = 0; i < w; ++i){
        totalPrice += k * (i+1);
    }
    // borrow amount
    if(n - totalPrice < 0){
        printf("%d",totalPrice - n);
    }
    else{
        printf("0");
    }

return 0;
}

