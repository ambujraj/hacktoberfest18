import java.util.Scanner;

public class CalculadoraModular {
	static Scanner entrada = new Scanner(System.in);


	public static void main(String[] args) 
	{
		arrancarAplicacion();
		
	}
	//////////////////////////////////////////

	private static void arrancarAplicacion() 
	{
		
		boolean salir = false;
		do {
			int opcion = verMenu();
			salir = (opcion == 5);
			if(!salir)
			{
				//Pido los operandos
				System.out.println("Introduce operando 1");
				double operando1 = pedirNumero();
				System.out.println("Introduce operando 2");
				double operando2 = pedirNumero();
				double result = 0;
				switch(opcion)
				{
					case 1:
						result = suma(operando1, operando2);
						break;
					case 2:
						result=resta(operando1, operando2);
						break;
					case 3: 
						result=multiplicar(operando1, operando2);	
						break;
					case 4: 
						if(operando2==0) {
						System.out.println();
						
						}else {
							result=dividir(operando1, operando2);
							}
						break;
				}
				if(opcion == 4 && operando2 == 0) 
				{
					System.out.println("No se puede dividir por cero elija otra operaci�n");
				}else if(salir) 
				{		
					System.out.println("Hasta pronto.");
				}else
					System.out.println("El resultado de tus operacion es: " + result );
			}
			
			
		}while(!salir);
	}
	////////////////////////////////////////////////////
	
	private static double dividir(double operando1, double operando2) {
		return operando1/operando2;
	}
	///////////////////////////////////////////////////
	
	private static double multiplicar(double operando1, double operando2) {
		return operando1 * operando2;
	}
	///////////////////////////////////////////////////
	
	private static double resta(double operando1, double operando2) {
		return operando1 - operando2;
	}
	////////////////////////////////////////////
		
	private static double suma(double operando1, double operando2) 
	{
		return operando1 + operando2;
	}
	/////////////////////////////////////////////////////
	
	private static double pedirNumero() 
	{
		
		return entrada.nextDouble();
	}
	////////////////////////////////////
	/* Muestra un menú en pantalla
	 * Pide la opción, la valida y
	 * la devuelve
	 * 
	 */
	private static int verMenu() 
	{
		System.out.println("1 Suma");
		System.out.println("2 Resta");
		System.out.println("3 Multiplicaci�n");
		System.out.println("4 Divisi�n");
		System.out.println("5 Salir");
			
		System.out.println("Introduzca la operaci�n a realizar:");
		boolean entre1y5;
		int opcion;
		do
		{
			opcion=entrada.nextInt();
			entre1y5=(opcion>=1 && opcion<=5);
			if(!entre1y5) 
			{
				System.out.println("Error! la opcion elegida tiene que estar entre 1 y 5");
			}
		}while(!entre1y5);
		return opcion;
	}
	
	
	

}
