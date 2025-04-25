#include <stdio.h>
int main(){
    int n, k, i, count = 0;
    scanf("%d%d",&n,&k);
    int scoreList [n];
    for(i = 0; i < n; i++){
        scanf("%d",&scoreList[i]);
   }
   for(i = 0; i < n; i++){
    if(scoreList[i]>0 && scoreList[i]>=scoreList[k-1]){
        count++;
    }
   }
   printf("%d",count);
return 0;
}
