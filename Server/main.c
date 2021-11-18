
#define bzero(b,len) (memset((b), '\0', (len)), (void) 0)//Utilizado para inicializar chars
#include<io.h>
#include<stdio.h>
#include<winsock2.h>

#pragma comment(lib,"ws2_32.lib") //Libreria winsock

int main(int argc , char *argv[])
{
    WSADATA wsa;//Se crea un nuevo wsadata
    int c,n; //Se inicializan las variables necesarias
    struct sockaddr_in server , client;
    SOCKET s , new_socket;
    char buffer[256];
    char *message;

    printf("\nInitialising Winsock...");

    if (WSAStartup(MAKEWORD(2,2),&wsa) != 0)// Se inicializa winsock
    {
        printf("Failed. Error Code : %d",WSAGetLastError());//Si falla retorna error
        return 1;
    }

    printf("Initialised.\n");

    //Create a socket
    if((s = socket(AF_INET , SOCK_STREAM , 0 )) == INVALID_SOCKET)//Se crea el socket del server
    {
        printf("Could not create socket : %d" , WSAGetLastError());
    }

    printf("Socket created.\n");

    //Prepara los datos del socket
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_port = htons(27015);

    //Lo vincula al puerto y direccion. Lo que lo convierte en el server
    if( bind(s ,(struct sockaddr *)&server , sizeof(server)) == SOCKET_ERROR)
    {
        printf("Bind failed with error code : %d" , WSAGetLastError());
        exit(EXIT_FAILURE);
    }

    puts("Bind done");

    //Escucha conexiones
    listen(s , 3);
    puts("Waiting for incoming connections...");

    //Acepta conexiones entrantes
    c = sizeof(struct sockaddr_in);
    new_socket = accept(s , (struct sockaddr *)&client, &c);//Crea un nuevo socket para representar al cliente
    if (new_socket == INVALID_SOCKET)
    {
        printf("accept failed with error code : %d" , WSAGetLastError());
        return 1;
    }
    else{
        puts("Connection accepted");
        //Luego de aceptar la conexión, espera la llegada de un mensaje
        bzero(buffer,256);
        fgets(buffer, strlen(buffer),stdin);//Ajustes necesarios al buffer para evitar errores de compatibilidad
        n = recv(new_socket,buffer, 255,0);
        if (n < 0)
        {
            perror("ERROR reading from socket");
            exit(1);
        }
        buffer[n] = '\0';//Adapta el char a C
        puts(buffer);//Imprime el mensaje

        printf("Sending a message to client...");

        message = "Este mensaje viene del servidor winsock\n";//Crea un mensaje para enviar
        n = send(new_socket,message,strlen(message),0);//Envia el mensaje
        if (n < 0)
        {
            perror("ERROR writing to socket");
        }

        puts("Message succesfully sent");


    }

    closesocket(s);//Cierra y limpia la conexión.
    WSACleanup();

    return 0;
}
