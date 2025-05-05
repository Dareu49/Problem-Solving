// 06 May 2025, 12:36 am
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    int j = 0;
    char input [101];
    char output [201] = "";
    scanf("%s",input);
    int length = strlen(input);
    for(int i = 0; i < length; i++){
            input[i] = tolower(input[i]);
            if(input[i] != 'a' && input[i] != 'o' && input[i] != 'y' &&
input[i] != 'e' && input[i] != 'u' && input[i] != 'i'){
        output[j++] = '.';
        output[j++] = input[i];
            }
   }
    printf("%s",output);
return 0;
}
