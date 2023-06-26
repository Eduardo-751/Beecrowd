import java.util.Scanner;

class Main {
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N;
        String commands;
        do {
            N = Integer.parseInt(scanner.nextLine());
            if (N == 0)
                break;

            commands = scanner.nextLine();
            char direction = 'N'; // Initial direction is North

            for (int i = 0; i < N; i++) {
                if (commands.charAt(i) == 'D') {
                    switch (direction) {
                        case 'N':
                            direction = 'L';
                            break;
                        case 'L':
                            direction = 'S';
                            break;
                        case 'S':
                            direction = 'O';
                            break;
                        case 'O':
                            direction = 'N';
                            break;
                    }
                } else if (commands.charAt(i) == 'E') {
                    switch (direction) {
                        case 'N':
                            direction = 'O';
                            break;
                        case 'O':
                            direction = 'S';
                            break;
                        case 'S':
                            direction = 'L';
                            break;
                        case 'L':
                            direction = 'N';
                            break;
                    }
                }
            }
            System.out.println(direction);

        } while (N != 0);
        scanner.close();
    }
}