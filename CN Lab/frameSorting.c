#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct frame {
    int fslno;
    char finfo[20];
};

struct frame arr[10];
int n;

void sort() {
    int i, j, ex;
    struct frame temp;
    for (i = 0; i < n; i++) {
        ex = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].fslno > arr[j + 1].fslno) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                ex++;
            }
        }
        if (ex == 0)
            break;
    }
}

int main() {
    int i;
    srand(time(0));
    printf("\nEnter the number of frames: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        arr[i].fslno = rand() % 50;
        printf("\nEnter the frame contents for sequence number %d: ", arr[i].fslno);
        scanf("%19s", arr[i].finfo);
    }

    sort();

    printf("\nThe frames in sequence:\n");
    for (i = 0; i < n; i++) {
        printf("\n%d\t%s\n", arr[i].fslno, arr[i].finfo);
    }

    return 0;
}
