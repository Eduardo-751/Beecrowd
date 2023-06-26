import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int C = scan.nextInt();
        int P = scan.nextInt();
        int F = scan.nextInt();

        if (C * F <= P)
            System.out.println("S");
        else
            System.out.println("N");
        scan.close();
    }
}
