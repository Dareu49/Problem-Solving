#include <stdio.h>

int main(){
    int n, countAnton = 0, countDanik = 0;
    scanf("%d",&n);
    char s [n+1];
    scanf("%s",s);

    for(int i = 0; i < n; ++i){
        if(s[i] == 'A'){
            countAnton++;
        }
        else if(s[i] == 'D'){
            countDanik++;
        }
    }
    if(countAnton > countDanik){
        printf("Anton");
    }
    else if(countDanik > countAnton){
        printf("Danik");
    }
    else{
         printf("Friendship");
    }

return 0;
}
