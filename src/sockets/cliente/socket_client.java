
package sockets.cliente;

import java.io.DataOutputStream;
import java.io.IOException;
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
            salidaServidor = new DataOutputStream(cs.getOutputStream());
            //Se escribe en el servidor usando su flujo de datos
            salidaServidor.writeUTF("This is a message");
            salidaServidor.flush();

            cs.close();//Fin de la conexión

        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}
