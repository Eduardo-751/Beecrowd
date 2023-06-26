import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        try (Scanner scan = new Scanner(System.in)) {
            int N, i, i2, i3;
            char[] Pilha = new char[2048];
            int diamonds;

            N = Integer.parseInt(scan.nextLine());

            for (i = 0; i < N; i++) {
                String input = scan.nextLine();
                Pilha = input.toCharArray();
                diamonds = 0;

                for (i2 = 0; i2 < Pilha.length; i2++) {
                    if (Pilha[i2] == '<') {
                        for (i3 = i2; i3 < Pilha.length; i3++) {
                            if (Pilha[i3] == '>') {
                                diamonds++;
                                Pilha[i3] = '.';
                                break;
                            }
                        }
                    }
                }
                System.out.println(diamonds);
            }
            scan.close();
        }
    }
}