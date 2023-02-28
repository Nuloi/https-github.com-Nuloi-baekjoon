import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String pp = scanner.nextLine();
		if(pp.equals("A+")) {
			System.out.println("4.3");
		}else if(pp.equals("A0")) {
			System.out.println("4.0");
		}else if(pp.equals("A-")) {
			System.out.println("3.7");
		}else if(pp.equals("B+")) {
			System.out.println("3.3");
		}else if(pp.equals("B0")) {
			System.out.println("3.0");
		}else if(pp.equals("B-")) {
			System.out.println("2.7");
		}else if(pp.equals("C+")) {
			System.out.println("2.3");
		}else if(pp.equals("C0")) {
			System.out.println("2.0");
		}else if(pp.equals("C-")) {
			System.out.println("1.7");
		}else if(pp.equals("D+")) {
			System.out.println("1.3");
		}else if(pp.equals("D0")) {
			System.out.println("1.0");
		}else if(pp.equals("D-")) {
			System.out.println("0.7");
		}else if(pp.equals("F")) {
			System.out.println("0.0");
		}
		scanner.close();
	}
}