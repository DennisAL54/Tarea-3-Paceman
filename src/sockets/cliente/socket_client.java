
package sockets.cliente;

import java.io.*;

import sockets.connection.Connection;

public class socket_client extends Connection
{
    public socket_client() throws IOException{//Constructor
        super("Cliente");
    }
    public void startClient() //Método para iniciar el cliente
    {
        try
        {
            //Flujo de datos hacia el servidor
            salidaServidor = new PrintStream(cs.getOutputStream(), true);//Se crea un nuevo PrintStream para enviar datos
            salidaServidor.println("Este mensaje viene de java"); //Se envia el mensaje al servidor
            //Flujo de datos desde el servidor
            entradaServidor = new BufferedReader(new InputStreamReader(cs.getInputStream()));//Se crea un nuevo BufferedReader para escuchar mensajes del servidor
            System.out.println(entradaServidor.readLine());//Se imprime el mensaje que se recibe del servidor

            cs.close();//Se cierra el socket

        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
