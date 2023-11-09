
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;


public class CF004AWatermelon {

	static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	static PrintWriter out = new PrintWriter(System.out);

	public static void main(String[] args) throws IOException {

		byte w = Byte.parseByte(in.readLine());
		out.print((w == 2 || w % 2 != 0) ? "NO" : "YES");
		out.close();
	}
}
