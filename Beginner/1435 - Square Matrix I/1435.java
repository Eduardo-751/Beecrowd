import java.util.Scanner;
import java.io.IOException;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] X = new int[N];

        for (int i = 0; i < N; i++) {
            X[i] = sc.nextInt();
        }

        int R = X[0];
        int pos = 0;

        for (int i = 1; i < N; i++) {
            if (X[i] < R) {
                R = X[i];
                pos = i;
            }
        }

        System.out.println("Menor valor: " + R);
        System.out.println("Posicao: " + pos);
    }
}