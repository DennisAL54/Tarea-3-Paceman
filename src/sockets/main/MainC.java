package sockets.main;

import java.io.IOException;
import sockets.cliente.socket_client;

public class MainC {
    public static void main(String[] args) throws IOException
    {
        socket_client cli = new socket_client();//Se crea el cliente

        System.out.println("Iniciando cliente\n");
        cli.startClient();//Se inicia el cliente
    }
}
