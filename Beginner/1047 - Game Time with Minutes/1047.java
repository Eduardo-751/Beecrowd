import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().split(" ");
        int start = Integer.parseInt(input[0]) * 60 + Integer.parseInt(input[1]);
        int end = Integer.parseInt(input[2]) * 60 + Integer.parseInt(input[3]);

        if (end <= start)
            end += 1440;

        int duration = end - start;
        int hours = duration / 60;
        int minutes = duration % 60;

        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)%n", hours, minutes);

        scanner.close();
    }
}