#include <stdio.h>


int contains(int num,int* isIn,int length){
    for(int i = 0;i<= (length-1);i++){
        if(num == isIn[i]){
            return 1;
        }
    }
    return 0;
}

int main(){

    int firstValue = 1;
    int lastValue = 2;

    do {

        printf("Input first value and the last value separated by coma: ");
        scanf("%d,%d",&firstValue,&lastValue);

    } while( firstValue>=lastValue );

    numbersToRemoveTag:
    printf("Input how many numbers you want to remove: ");
    int numbersToRemove;
    scanf("%d",&numbersToRemove);

    if(numbersToRemove > (lastValue - firstValue + 1)){

        printf("Your input is out of range %d and %d\n",firstValue,lastValue);
        goto numbersToRemoveTag;

    }

    int numbersToHide[lastValue-firstValue+1];
    printf("Input the numbers\n");
    for(int i = 0;i<= (numbersToRemove-1);i++){
    j:
    printf(">: ");
    int j;
    scanf("%d",&j);
    if(j< firstValue|| j> lastValue){
        printf("Your input is out of range %d and %d\n",firstValue,lastValue);
        goto j;
    }
    numbersToHide[i]= j;
    }

    printf("Outut>\n");
    for(int i = firstValue;i<= lastValue;i++){
        if(contains(i,numbersToHide,numbersToRemove)==1){
            continue;
        }
        printf("%d\n",i);
    }

    printf("Done\n");
    return 0;
}
