#include <stdio.h>
#include <stdlib.h>

int i, j, moves =0;
int main(){
    int matrix [5][5];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d",&matrix[i][j]);
        if(matrix[i][j]==1){
            moves = abs(i-2)+abs(j-2);
        }
        }
    }
    printf("%d", moves);
return 0;}
