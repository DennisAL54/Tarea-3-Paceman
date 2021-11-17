/*
	Live Server on port 8888
*/
#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)
#include<io.h>
#include<stdio.h>
#include<winsock2.h>
#define PORT 1000

#pragma comment(lib,"ws2_32.lib") //Winsock Library

int main(int argc , char *argv[])
{
    WSADATA wsa;
    SOCKET s , new_socket;
    struct sockaddr_in server , client;
    int c;

    printf("\nInitialising Winsock...");

    if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)
    {
        printf("Failed. Error Code : %d",WSAGetLastError());
        return 1;
    }

    printf("Initialised.\n");

    //Create a socket
    if((s = socket(AF_INET , SOCK_STREAM , 0 )) == INVALID_SOCKET)
    {
        printf("Could not create socket : %d" , WSAGetLastError());
    }

    printf("Socket created.\n");

    //Prepare the sockaddr_in structure
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_port = htons(PORT);

    //Bind
    if( bind(s ,(struct sockaddr *)&server , sizeof(server)) == SOCKET_ERROR)
    {
        printf("Bind failed with error code : %d" , WSAGetLastError());
        exit(EXIT_FAILURE);
    }

    puts("Bind done");

    //Listen to incoming connections
    listen(s , 3);

    //Accept and incoming connection
    puts("Waiting for incoming connections...");

    c = sizeof(struct sockaddr_in);
    new_socket = accept(s , (struct sockaddr *)&client, &c);
    if (new_socket == INVALID_SOCKET)
    {
        printf("accept failed with error code : %d" , WSAGetLastError());
        return 1;
    }
    int size = 1024;
    char buff[size];
    char sbuff[size];
    int n;
    int reader;
    memset(buff, 0, size);
    memset(sbuff, 0, size);
    for(;;){
        reader = recv(c, buff, 1024 * sizeof(char), 0);
        if (reader == -1) {
            perror("recv()");
            break;
        } else if (reader == 0) {
            break;
        } else {
            // print buffer which contains the client contents
            printf("From client: %s\t To client : ", buff);
            // if msg contains "Exit" then server exit and chat ended.
            if (strncmp("exit", buff, 4) == 0) {
                printf("Server Exit...\n");
                break;
            }
            bzero(buff, size);
            n = 0;
            // copy server message in the buffer
            while ((sbuff[n++] = getchar()) != '\n');

// and send that buffer to client
            write(c, sbuff, sizeof(sbuff));
            bzero(sbuff,size);

        }

    }

    closesocket(s);
    WSACleanup();

    return 0;
}
