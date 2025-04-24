#include <stdio.h>

int main(){
    int p, i, j, sum = 0, count = 0 ;
    scanf("%d",&p);

    int checkList [p][3];
    for(i=0; i<p; i++){
            sum =0;
        for(j=0; j<3; j++){
        scanf("%d",&checkList[i][j]);
        sum += checkList[i][j];
    }
    if(sum>=2){
            count++;
}
  }
    printf("%d",count);

return 0;
}
