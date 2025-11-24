#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char buffer[100];
    time_t now;
    time(&now);
    sprintf(buffer, "Date & Time: %s", ctime(&now));
    printf("Server sent date & time.\n");
    printf("Client received: %s\n", buffer);

    return 0;
}
