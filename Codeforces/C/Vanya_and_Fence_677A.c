#include <stdio.h>

int main(){
    int width = 0;
    int n;
    scanf("%d",&n);
    int h;
    scanf("%d",&h);
    int heightList [n];
    for(int i = 0; i < n; i++){
        scanf("%d",&heightList[i]);
        if(heightList[i] > h){
            width+= 2;
        }
        else{
            width++;
        }
    }
    printf("%d",width);
return 0;
}
