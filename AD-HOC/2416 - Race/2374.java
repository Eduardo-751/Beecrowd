import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int C = scan.nextInt();
        int N = scan.nextInt();

        System.out.println(C % N);
        scan.close();
    }
}