// 05 May 2025, 06:55 am
#include <stdio.h>

int main(){
    int n, i = 0, j = i+1, count = 0;
    char s [51];
    scanf("%d%s",&n,s);
        while(i < n-1 && j < n){
            if(s[i] == s[j]){
                count++;
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
    printf("%d",count);
return 0;
}
