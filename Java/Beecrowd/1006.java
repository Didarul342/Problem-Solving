import java.io.IOException;
import java.util.Scanner;

public class program {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		double A,B,C,MEDIA;
		A= sc.nextDouble();
		B=sc.nextDouble();
		C=sc.nextDouble();
		MEDIA=(A*2+B*3+C*5)/10;
		System.out.println("MEDIA = "+String.format("%.1f", MEDIA));
		sc.close();
	}

}
