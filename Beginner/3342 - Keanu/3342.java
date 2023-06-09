import java.io.IOException;
import java.util.Scanner;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        int totalCells = N * N;
        int cPreta = totalCells / 2;
        int cBranca = totalCells - cPreta;

        System.out.println(cBranca + " casas brancas e " + cPreta + " casas pretas");

        scanner.close();
    }
}