import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        double raio = Double.parseDouble(in.readLine());

        System.out.printf("A=%.4f\n", 3.14159 * raio * raio);
    }
}
