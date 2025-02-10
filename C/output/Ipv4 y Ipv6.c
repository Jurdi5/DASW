#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validar_ipv4(char *ip) {
    int octetos[4];
    char *pch;


    pch = strtok(ip, ".");
    for (int i = 0; i < 4; i++) {
        octetos[i] = atoi(pch);
        pch = strtok(NULL, ".");
    }


    for (int i = 0; i < 4; i++) {
        if (octetos[i] < 0 || octetos[i] > 255) {
            return 0;
        }
    }

    return 1;
}
int validar_ipv6(char *ip) {
    char *pch;
    int grupos[8];

    
    pch = strtok(ip, ":");
    for (int i = 0; i < 8; i++) {
        grupos[i] = strtol(pch, NULL, 16);
        pch = strtok(NULL, ":");
    }

    
    for (int i = 0; i < 8; i++) {
        if (grupos[i] < 0 || grupos[i] > 65535) {
            return 0;
        }
    }

    return 1;
}
int main() {
    char ip_v4[] = "192.168.1.1";
    char ip_v6[] = "2001:0db8:85a3:08d3:1319:8a2e:0370:7334";

    if (validar_ipv4(ip_v4)) {
        printf("La direccion IPv4 %s es valida.\n", ip_v4);
    } else {
        printf("La direccion IPv4 %s no es valida.\n", ip_v4);
    }

    if (validar_ipv6(ip_v6)) {
        printf("La direccion IPv6 %s es valida.\n", ip_v6);
    } else {
        printf("La direccion IPv6 %s no es valida.\n", ip_v6);
    }

    return 0;
}