package tcp2;

import java.io.IOException;
import java.io.*;
import java.net.*;

public class Ejemplo2Cliente {

	public static void main(String[] args) throws IOException {

		String Host = "192.168.1.50";
		int Puerto = 6000;// puerto remoto

		Socket Cliente = new Socket(Host, Puerto);

		// CREO FLUJO DE SALIDA AL SERVIDOR
		PrintWriter fsalida = new PrintWriter(Cliente.getOutputStream(), true);

		// CREO FLUJO DE ENTRADA DESDE EL SERVIDOR
		BufferedReader fentrada = new BufferedReader(new InputStreamReader(Cliente.getInputStream()));

		// FLUJO PARA RECOGER CADENAS PARA ENVIAR AL SERVIDOR
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		String cadena, eco = "";
		System.out.print("Introduce cadena: ");
		cadena = in.readLine();
		// lectura por teclado

		while (cadena != null) {
			// envio cadena al servidor
			fsalida.println(cadena);
			// recibo cadena del servidor
			eco = fentrada.readLine();
			// imprime la cadena que llega desde el servidor P... ECO
			System.out.println(" =>El cuadrado es: " + eco);
			// pide otra cadena para enviar
			System.out.print("Introduce numero para elevar: ");
			cadena = in.readLine();// lectura por teclado
		}

		fsalida.close();
		fentrada.close();
		System.out.println("Fin del envÌo... ");
		in.close();
		Cliente.close();
	}
}
