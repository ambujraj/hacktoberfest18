import javax.swing.JOptionPane;

public class HelloWorldApp {

	public static void main(String[] args) {

		information();

	}

	public static void information() {
		String greetings;

		JOptionPane.showMessageDialog(null, "Welcome to hacktoberfest 2018", "Greetings",
				JOptionPane.INFORMATION_MESSAGE);
		System.out.println("		Welcome tohacktoberfest 2018");
		String answer = JOptionPane.showInputDialog(null, "You Name").toUpperCase();
		int age = Integer.parseInt(JOptionPane.showInputDialog(null, "You Age"));
		String profession = JOptionPane.showInputDialog(null, "Your profession").toUpperCase();
		int question = JOptionPane.showConfirmDialog(null, "Your first participation in the event");
		if (question == 0) {
			greetings = answer + "\n Welcome to your first of many adventures ";
			JOptionPane.showMessageDialog(null, greetings, "Greetings", JOptionPane.INFORMATION_MESSAGE);
		} else if (question == 1) {
			greetings = answer + "\n Welcome back, Veteran. ";
			JOptionPane.showMessageDialog(null, greetings, "Greetings", JOptionPane.INFORMATION_MESSAGE);
		}
		System.out.println("-----------------------------------------------------");
		System.out.println("			INFORMATION ");
		System.out.println("Name: "+ answer);
		System.out.println("Age: "+ age);
		System.out.println("Profession: " + profession);
		System.out.println("-----------------------------------------------------");
		System.out.println("	Enjoy the event and good fun!!!!!!");
		
	}
}
