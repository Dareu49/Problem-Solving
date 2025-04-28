#include <stdio.h>
#include <string.h>
int main(){
    char input[101], checkList[101] = "";
    int i, count = 0;
    scanf("%s",input);
    int i_length = strlen(input);
    for(i = 0; i < i_length; i++){
        int cL_length = strlen(checkList);
        char *check = strchr(checkList, input[i]);
        if(check == NULL){
            count++;
            checkList[cL_length] = input[i];
            checkList[cL_length+1] = '\0';
        }
    }

    if(count % 2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
return 0;
}
