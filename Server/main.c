/*
	Live Server on port 8888
*/
#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)
#include<io.h>
#include<stdio.h>
#include<winsock2.h>

#pragma comment(lib,"ws2_32.lib") //Winsock Library

int main(int argc , char *argv[])
{
    WSADATA wsa;
    int c,n;
    struct sockaddr_in server , client;
    SOCKET s , new_socket;
    char buffer[256];

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
    server.sin_port = htons(27015);

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
    else{
        puts("Connection accepted");
        bzero(buffer,256);
        fgets(buffer, strlen(buffer),stdin);
        n = recv(new_socket,buffer, 255,0);
        if (n < 0)
        {
            perror("ERROR reading from socket");
            exit(1);
        }
        buffer[n] = '\0';
        puts(buffer);

        printf("Enter a message for the client: ");

        bzero(buffer,256);
        fgets(buffer,strlen(buffer),stdin);
        n = send(new_socket,buffer,strlen(buffer),0);
        if (n < 0)
        {
            perror("ERROR writing to socket");
        }


    }

    closesocket(s);
    WSACleanup();

    return 0;
}
