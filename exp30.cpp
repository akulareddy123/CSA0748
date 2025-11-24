#include <stdio.h>
#include <string.h>

int main() {
    char clientMsg[100], serverMsg[100];

    printf("Simple Chat Simulation (type 'exit' to quit)\n");

    while (1) {
        // Client message
        printf("Client: ");
        fgets(clientMsg, sizeof(clientMsg), stdin);

        if (strncmp(clientMsg, "exit", 4) == 0) {
            printf("Chat ended.\n");
            break;
        }

        // Server message
        printf("Server: ");
        fgets(serverMsg, sizeof(serverMsg), stdin);

        if (strncmp(serverMsg, "exit", 4) == 0) {
            printf("Chat ended.\n");
            break;
        }

        // Display messages
        printf("Client said: %s", clientMsg);
        printf("Server said: %s\n", serverMsg);
    }

    return 0;
}

