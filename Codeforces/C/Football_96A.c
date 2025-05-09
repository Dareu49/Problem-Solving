// Started: 09 May 2025, 02:30 pm
// Solved: 09 May 2025, 04:25 pm
#include <stdio.h> // printf(), scanf()
#include <string.h> //strlen()
#include <stdbool.h> // bool

int main (){
    char input [101];
    scanf("%s",input);
    int length = strlen(input);
    int i = 0, j = i + 1, count = 1;
    bool outerLoopBreak = false;

    while(i < length - 1 && j < length){
        while(i < length - 1 && j < length && input[i] == input[j]){
            count++;
            i++;
            j++;
        }
        if(count >= 7){
            printf("YES");
            outerLoopBreak = true;
            break;
        }
        else{
            count = 1;
        }
        if(outerLoopBreak){
            break;
        }
        i++;
        j++;
    }
    if(!outerLoopBreak){
        printf("NO");
    }

return 0;
}
