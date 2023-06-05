import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String[] input;
        input = in.readLine().trim().split(" ");
        int qtd1 = Integer.parseInt(input[1]);
        double valor1 = Double.parseDouble(input[2]);

        input = in.readLine().trim().split(" ");
        int qtd2 = Integer.parseInt(input[1]);
        double valor2 = Double.parseDouble(input[2]);

        double total = (qtd1 * valor1) + (qtd2 * valor2);
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
    }
}
