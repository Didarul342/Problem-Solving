package URI_Problems_solution;
import java.util.Scanner;

public class URI_1101 {

	public static void main(String[] args) {
		int X, Y;
		Scanner input =new Scanner(System.in);
		
		while (((X = input.nextInt()) > 0 )&&((Y = input.nextInt()) > 0 )) {
			int sum = 0;
			if (X > Y) {
				for (Y = Y; Y <= X; Y++) {
					sum+=Y;
					System.out.print(Y+" ");
				}
				System.out.print("Sum="+sum+"\n");
			}else {
				for (X = X; X <= Y; X++) {
					sum+=X;
					System.out.print(X+" ");
				}
				System.out.print("Sum="+sum+"\n");
			}
		}

	}

}