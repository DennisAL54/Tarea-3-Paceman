package sockets.connection;

import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;

public class Connection {
    protected Socket cs; //Socket del cliente
    protected DataOutputStream salidaServidor; //Flujo de datos de salida

    public Connection(String tipo) throws IOException //Constructor
    {
        cs = new Socket("127.0.0.1", 1000); //Socket para el cliente en localhost en puerto 8888
    }
}
