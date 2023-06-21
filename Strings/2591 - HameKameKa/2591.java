import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int C = scanner.nextInt();

        for (int i = 0; i < C; i++) {
            String attack = scanner.next();
            int group1 = attack.indexOf('m') - 1;

            int group2 = attack.substring(attack.indexOf('k')).indexOf('m') - 1;

            StringBuilder result = new StringBuilder();

            result.append('k');
            for (int j = 0; j < group1 * group2; j++) {
                result.append('a');
            }

            System.out.println(result.toString());
        }
        scanner.close();
    }
}