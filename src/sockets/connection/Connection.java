package sockets.connection;

import java.io.*;
import java.net.Socket;

public class Connection {
    protected Socket cs; //Socket del cliente
    protected PrintStream salidaServidor; //Flujo de datos de salida
    protected BufferedReader entradaServidor; //Flujo de datos de entrada

    public Connection(String tipo) throws IOException //Constructor
    {
        cs = new Socket("127.0.0.1", 27015); //Socket para el cliente en localhost en puerto 8888
    }
}
