#include <stdio.h>
#include <string.h>

int main()
{
    char data[100], gen[20], temp[200], rem[20];
    int datalen, genlen;
    printf("Enter data bits: "); scanf("%s", data);
    printf("Enter generator bits: "); scanf("%s", gen);
    datalen = strlen(data);
    genlen = strlen(gen);
    strcpy(temp, data);
    for (int i = 0; i < genlen - 1; i++) temp[datalen + i] = '0';
    temp[datalen + genlen - 1] = '\0';
    char t[200];
    for (int i = 0; i < datalen; i++) t[i] = temp[i];
    for (int i = 0; i < datalen; i++)
    {
        if (t[i] == '1')
        {
            for (int j = 0; j < genlen; j++)
                t[i + j] = (t[i + j] == gen[j]) ? '0' : '1';
        }
    }
    for (int i = 0; i < genlen - 1; i++) rem[i] = t[datalen + i];
    rem[genlen - 1] = '\0';
    printf("CRC bits: %s\n", rem);
    printf("Transmitted frame: %s%s\n", data, rem);
    return 0;
}
