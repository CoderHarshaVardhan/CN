#include <stdio.h>

int main() {
    int w, i, f, frames[50];

    printf("Enter window size: ");
    scanf("%d", &w);

    printf("\nEnter number of frames to transmit: ");
    scanf("%d", &f);

    printf("\nEnter %d frames: ", f);
    for (i = 1; i <= f; i++)
        scanf("%d", &frames[i]);

    printf("\nWith sliding window protocol, the frames will be sent in the following manner (assuming no corruption of frames)\n\n");
    printf("After sending %d frames at each stage, the sender waits for an acknowledgement from the receiver\n\n", w);

    for (i = 1; i <= f; i++) {
        printf("%d ", frames[i]);

        if (i % w == 0) {
            printf("\nAcknowledgement of the above frames is received by the sender\n\n");
        }
    }

    if (f % w != 0) {
        printf("\nAcknowledgement of the above frames is received by the sender\n");
    }

    return 0;
}
