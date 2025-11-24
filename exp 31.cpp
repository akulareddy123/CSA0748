#include <stdio.h>
#include <string.h>

int main() {
    char *ips[] = {"192.168.1.1", "192.168.1.2", "192.168.1.3"};
    char *macs[] = {"AA:BB:CC:DD:EE:01", "AA:BB:CC:DD:EE:02", "AA:BB:CC:DD:EE:03"};
    char ip[16];
    printf("Enter IP to resolve: ");
    scanf("%s", ip);
    int found = 0;
    for(int i = 0; i < 3; i++) {
        if(strcmp(ip, ips[i]) == 0) {
            printf("MAC Address for %s is %s\n", ip, macs[i]);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("IP not found in ARP table\n");
    }
    return 0;
}
