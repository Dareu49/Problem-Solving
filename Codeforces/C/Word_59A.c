// Started: 07 May 2025, 05:55 pm
// Solved: 07 May 2025, 07:34 pm
#include <stdio.h> //printf(), scanf()
#include <string.h> //strlen()
#include <ctype.h> //tolower(), toupper()

int main(){
    char input[101];
    int lowerCount = 0, upperCount = 0;
    scanf("%s",input);
    int length = strlen(input);

   for(int i = 0; i < length; ++i){
        //if i-th character ASCII Value in between 97 and 122
      if((int)input[i] >= 97 && (int)input[i] <= 122){
            lowerCount++;
        }
    }

    upperCount = length - lowerCount;

    if(lowerCount >= upperCount){ // condition for lowerCase print
        for(int i = 0; i < length; ++i){
            input[i] = tolower(input[i]);
        }
        printf(input);
    }
    else{ // condition for upperCase print
        for(int i = 0; i < length; ++i){
            input[i] = toupper(input[i]);
        }
        printf(input);
    }

return 0;
}

