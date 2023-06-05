import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        double r = Double.parseDouble(in.readLine());
        double total = (4.0/3.0)*3.14159*Math.pow(r, 3);

        System.out.printf("VOLUME = %.3f\n", total);
    }
}
