#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif


#include <stdio.h>
#include <winsock2.h>
#include <windows.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>

#pragma comment(lib, "WS2_32.lib")

#define BUFLEN 512
#define PORT 27015
#define ADDRESS "127.0.0.1"

int main() {
    printf("Hello, World!\n");
    return 0;
}
