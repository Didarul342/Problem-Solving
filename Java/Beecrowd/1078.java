import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		int n = sc.nextInt();
		for(int i=1;i<=10;i++) {
			System.out.println(i+" x "+n+" = "+i*n);
		}
		
		
		
		sc.close();
	}

}