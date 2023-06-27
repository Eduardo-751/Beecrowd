import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int T1 = scan.nextInt();
        int T2 = scan.nextInt();
        int T3 = scan.nextInt();
        int T4 = scan.nextInt();
        System.out.println(T1+T2+T3+T4-3);
        scan.close();
    }
}
