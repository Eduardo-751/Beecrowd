import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int N = Integer.parseInt(scanner.nextLine());
        int dist = 0;
        for (int i = 0; i < N; i++) {
            String[] input = scanner.nextLine().split(" ");
            int T = Integer.parseInt(input[0]);
            int V = Integer.parseInt(input[1]);
            dist += T * V;
        }
        
        System.out.println(dist);
        scanner.close();
    }
}