#include <stdio.h>

int main(){
    int passengerCount = 0, passengerMax = 0;
    int n;
    scanf("%d",&n);
    int stopInfo [n][2];
    for(int i = 0; i < n; i++){
            scanf("%d%d",&stopInfo[i][0],&stopInfo[i][1]);
                passengerCount -= stopInfo[i][0]; //remove exit passengers
                passengerCount += stopInfo[i][1]; //add entry passengers

            if(passengerCount > passengerMax){
                passengerMax = passengerCount;
            }
            }
    printf("%d",passengerMax);
return 0;
}
