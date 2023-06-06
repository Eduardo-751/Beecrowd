import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String[] input = in.readLine().trim().split(" ");
        int A = Integer.parseInt(input[0]);
        int B = Integer.parseInt(input[1]);
        int C = Integer.parseInt(input[2]);

        int aux = (A + B + Math.abs(A - B)) / 2;
        if (aux > C)
            System.out.printf("%d eh o maior\n", aux);
        else
            System.out.printf("%d eh o maior\n", C);
    }
}
