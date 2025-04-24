#include <stdio.h>
#include <string.h>

int main(){
    int n, i, result =0;
    scanf("%d",&n);
    char statementList [n][10];

    for(i =0; i<n; i++){
        scanf("%s",statementList[i]);
        if(strstr(statementList[i],"++")!= NULL){
            result += 1;
        }
        else if(strstr(statementList[i],"--")!= NULL){
            result -= 1;
        }
    }
    printf("%d",result);

return 0;}
