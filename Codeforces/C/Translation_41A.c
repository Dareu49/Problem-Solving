#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char s [101];
    scanf("%s",s);
    int sLength = strlen(s);
    char t [101];
    scanf("%s",t);
    int tLength = strlen(t);
    bool flag = false;

    if(sLength == tLength){
    int i = 0, j = tLength - 1; //sLength and Tlength are same
    flag = true;
    while(i < sLength && j >= 0){ //sLength and Tlength are same
        if(s[i] != t[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    }
    if(flag){
        printf("YES");
    }
    else{
        printf("NO");
    }
return 0;
}
