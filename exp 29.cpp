#include <stdio.h>
#include <string.h>

// Simulated server function
void echo_server(const char *msg, char *response) {
    strcpy(response, msg);  // Copy message back as response
}

// Client function
void echo_client() {
    char message[100];
    char response[100];

    printf("Enter message to send (type 'exit' to quit):\n");

    while (1) {
        fgets(message, sizeof(message), stdin);

        if (strncmp(message, "exit", 4) == 0)
            break;

        echo_server(message, response);
        printf("Echo from server: %s", response);
    }
}

// Main function
int main() {
    echo_client();
    return 0;
}

