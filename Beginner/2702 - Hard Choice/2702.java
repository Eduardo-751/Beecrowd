import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int Ca, Ba, Pa, Cr, Br, Pr;

        Ca = scanner.nextInt();
        Ba = scanner.nextInt();
        Pa = scanner.nextInt();

        Cr = scanner.nextInt();
        Br = scanner.nextInt();
        Pr = scanner.nextInt();

        int C = Cr-Ca;
        int B = Br-Ba;
        int P = Pr-Pa;

        int R = (C > 0 ? C : 0) + (B > 0 ? B : 0) + (P > 0 ? P : 0);

        System.out.println(R);

        scanner.close();
    }
}