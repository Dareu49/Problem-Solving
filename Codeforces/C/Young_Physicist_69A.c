// Started: 08 May 2025, 07:59 pm
// Solved: 08 May 2025, 11:36 pm
#include <stdio.h> //scanf(), printf()

int main(){
    int n, sum_x = 0, sum_y = 0, sum_z = 0;
    scanf("%d",&n);
    int force_vectors [n][3];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
                scanf("%d",&force_vectors[i][j]);
                if(j == 0){
                    sum_x += force_vectors[i][j];
                }
                else if(j == 1){
                    sum_y += force_vectors[i][j];
                }
                else{
                    sum_z += force_vectors[i][j];
                }

    }
    }
    if(sum_x == 0 && sum_y == 0 && sum_z == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
return 0;
}
