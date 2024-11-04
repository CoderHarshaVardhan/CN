#include<stdio.h>
#include<string.h>

void main(){
    int n, pos;
    char a[50], b[50], ch;

    printf("\nEnter string: ");
    scanf("%s", &a);
    n = strlen(a);

    printf("\nEnter position of the character: ");
    scanf("%d", &pos);

    while(pos<1 || pos>n){
        printf("\nInvalid position...Enter valid position: ");
        scanf("%d", &pos);
    }

    printf("\nEnter the character to be inserted: ");
    scanf(" %c",&ch);

    int j=0;

    strcpy(b, "dlestx");
    j = 6;

    for(int i=0;i<n;i++){
        if(i == pos-1){
            strcpy(&b[j], "dle");
            j += 3;
            b[j++] = ch;
            strcpy(&b[j], "dle");
            j+=3;
        }

        if(a[i]=='d' && a[i+1]=='l' && a[i+2]=='e'){
            strcpy(&b[j], "dle");
            j += 3;
            strcpy(&b[j], "dle");
            i += 2;
        }else{
            b[j++] = a[i];
        }
    }

    strcpy(&b[j], "dleetx");
    j += 6;
    b[j] = '\0';

    printf("Frame after stuffing: ");
    printf("%s", b); 
}