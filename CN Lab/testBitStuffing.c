#include<stdio.h>

int input[10], output[10], n, s;

void bitStuffing(){
    int count = 0;
    int j = 0;
    for(int i=0;i<n;i++){
        output[j++] = input[i];
        if(input[i]==1){
            count++;
        }else{
            count = 0;
        }

        if(count==5){
            output[j++] = 0;
            count = 0;
        }
    }
    s = j;
}

void main(){

    printf("\nEnter frame size: ");
    scanf("%d",&n);

    printf("\nEnter bits(0's and 1's): ");
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
    }

    bitStuffing();

    printf("\nAfter stuffing the frame is: ");
    for(int i=0;i<s;i++){
        printf("%d",output[i]);
    }

}