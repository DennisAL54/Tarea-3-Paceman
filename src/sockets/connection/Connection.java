package sockets.connection;

import java.io.*;
import java.net.Socket;

public class Connection {
    protected Socket cs; //Se define un socket para el cliente
    protected PrintStream salidaServidor; //Se define el flujo de datos de salida
    protected BufferedReader entradaServidor; //Se define el flujo de datos de entrada

    public Connection(String tipo) throws IOException //Constructor
    {
        cs = new Socket("127.0.0.1", 27015); //Socket para el cliente en localhost con puerto 27015
    }
}
