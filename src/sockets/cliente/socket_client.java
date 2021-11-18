
package sockets.cliente;

import java.io.*;

import sockets.connection.Connection;

public class socket_client extends Connection
{
    public socket_client() throws IOException{
        super("Cliente");
    }
    public void startClient() //Método para iniciar el cliente
    {
        try
        {
            //Flujo de datos hacia el servidor
            salidaServidor = new PrintStream(cs.getOutputStream(), true);
            salidaServidor.println("Este mensaje viene de java");
            //Flujo de datos desde el servidor

            entradaServidor = new BufferedReader(new InputStreamReader(cs.getInputStream()));
            entradaServidor.readLine();

            cs.close();//Fin de la conexión

        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
