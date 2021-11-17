package sockets.connection;

import java.io.DataOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class Connection {
    private final int PUERTO = 8888; //Puerto para la conexión
    private final String HOST = "localhost"; //Host para la conexión
    protected Socket cs; //Socket del cliente
    protected DataOutputStream salidaServidor; //Flujo de datos de salida

    public Connection(String tipo) throws IOException //Constructor
    {
        cs = new Socket(HOST, PUERTO); //Socket para el cliente en localhost en puerto 8888
    }
}
