import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = 1;
        while (N != 0) {
            N = Integer.parseInt(scanner.nextLine());

            if (N == 0)
                break;

            int[] samples = new int[N + 2];
            String[] input = scanner.nextLine().split(" ");
            for (int i = 0; i < N; i++) {
                samples[i] = Integer.parseInt(input[i]);
            }
            samples[N] = Integer.parseInt(input[0]);
            samples[N + 1] = Integer.parseInt(input[1]);

            int waves = 0;
            for (int i = 1; i < N + 2 - 1; i++) {
                if ((samples[i] > samples[i - 1] && samples[i] > samples[i + 1]) ||
                        (samples[i] < samples[i - 1] && samples[i] < samples[i + 1])) {
                    waves++;
                }
            }
            System.out.println(waves);
        }
        scanner.close();
    }
}