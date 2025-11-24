#include <stdio.h>
#include <string.h>

int main() {
    char fileData[1024], receivedData[1024];
    printf("Client: Enter file content to send:\n");
    fgets(fileData, sizeof(fileData), stdin);
    strcpy(receivedData, fileData);
    printf("\nServer received the file content:\n%s", receivedData);
    return 0;
}
