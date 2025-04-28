#include <stdio.h>
#include <string.h>

int main(){
    int i, j, indexCount = 0;
    char temp;
    char string[101], newString[101] = "";
    scanf("%s",string);
    int length = strlen(string);

    for (i = 0; i < length; i++){
        if(string[i] != '+'){
            newString[indexCount++] = string[i];
        }
}
    length = strlen(newString);

    for(i = 0; i < length; i++){
        for(j = i+1; j < length; j++){
        if(newString[i] > newString[j]){
            temp = newString[i];
            newString[i] = newString[j];
            newString[j] = temp;
        }
    }
    }
    for(i = 0; i < length-1; i++){
            printf("%c+", newString[i]);
    }
        printf("%c", newString[length-1]);
return 0;
}
