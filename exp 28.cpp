#include <stdio.h>
#include <string.h>

int main() {
    char *domains[] = {"google.com", "example.com", "yahoo.com", "openai.com"};
    char *ips[] = {"142.250.190.14", "93.184.216.34", "98.137.11.163", "104.18.12.123"};

    char hostname[50];
    printf("Enter hostname to resolve: ");
    scanf("%s", hostname);

    int found = 0;
    for (int i = 0; i < 4; i++) {
        if (strcmp(hostname, domains[i]) == 0) {
            printf("Resolved IP: %s\n", ips[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Domain not found in DNS table\n");
    }

    return 0;
}

