#include <stdio.h>
#include <string.h>

int main() {
    char *domains[] = {"example.com", "google.com", "yahoo.com"};
    char *ips[] = {"93.184.216.34", "142.250.190.14", "98.137.11.163"};

    char domain[50];
    int found = 0;

    printf("Enter domain name: ");
    scanf("%s", domain);

    for (int i = 0; i < 3; i++) {
        if (strcmp(domain, domains[i]) == 0) {
            printf("IP Address: %s\n", ips[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Domain not found\n");
    }

    return 0;
}

