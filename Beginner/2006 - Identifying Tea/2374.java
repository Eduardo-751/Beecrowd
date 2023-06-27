import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int T = Integer.parseInt(scanner.nextLine());
        String[] respostas = scanner.nextLine().split(" ");

        int A = Integer.parseInt(respostas[0]);
        int B = Integer.parseInt(respostas[1]);
        int C = Integer.parseInt(respostas[2]);
        int D = Integer.parseInt(respostas[3]);
        int E = Integer.parseInt(respostas[4]);

        int corretas = 0;
        if (A == T) corretas++;
        if (B == T) corretas++;
        if (C == T) corretas++;
        if (D == T) corretas++;
        if (E == T) corretas++;

        System.out.println(corretas);
        scanner.close();
    }
}
