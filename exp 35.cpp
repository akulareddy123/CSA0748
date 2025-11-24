#include <stdio.h>

int main() {
    int totalFrames = 10, windowSize = 4;
    int sent = 0;
    while(sent < totalFrames) {
        int framesToSend = (totalFrames - sent < windowSize) ? totalFrames - sent : windowSize;
        printf("\nSender: Sending frames ");
        for(int i = sent; i < sent + framesToSend; i++)
            printf("%d ", i);
        printf("\nReceiver: ");
        for(int i = sent; i < sent + framesToSend; i++)
            printf("Ack%d ", i);
        sent += framesToSend;
        printf("\nWindow slides to next frames\n");
    }
    printf("\nAll frames sent successfully!\n");
    return 0;
}
