#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    char wordList [n] [101];
for(int i =0; i<n ; i++){
    scanf("%s",wordList[i]);
}
for (int i =0; i<n; i++){
    int length = strlen(wordList[i]);
    if(length>10){
        printf("%c%d%c", wordList[i][0], length-2, wordList[i][length-1]);
    }
    else{
        printf("%s",wordList[i]);
    }
    if(i != n-1){
        printf("\n");
    }

}

return 0;
}
