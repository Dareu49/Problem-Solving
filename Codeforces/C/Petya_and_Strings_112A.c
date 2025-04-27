#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string1 [101], string2 [101];
    int count = 0;
    scanf("%s%s",string1,string2);
    int len = strlen(string1);
    for(int i = 0; i < len; i++){
        string1[i] = tolower(string1[i]);
        string2[i] = tolower(string2[i]);

     if(string1[i] < string2[i]){
        printf("-1");
        count++;
        break;
        }
     else if(string2[i] < string1[i]){
        printf("1");
        count++;
        break;
        }
  }

    if(count==0){
        printf("0");
    }

return 0;
}
