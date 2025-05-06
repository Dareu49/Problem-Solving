// Started: 06 May 2025, 04:40 pm
// Solved: 06 May 2025, 05:03 pm
#include <stdio.h>

int main(){
 int x;
 scanf("%d",&x);
 if(x%5 == 0){
    printf("%d", x /5);
 }
 else{
    printf("%d", x /5 +1);
 }

return 0;
}
