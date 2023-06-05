import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        in.readLine();
        double A = Double.parseDouble(in.readLine());
        double B = Double.parseDouble(in.readLine());

        double salario = A + (B * 0.15);

        System.out.printf("TOTAL = R$ %.2f\n", salario);
    }
}
