import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int P = scan.nextInt();
        int R = scan.nextInt();

        if(P == 0)
            System.out.println("C");
        else
            if(R == 0)
                System.out.println("B");
            else
                System.out.println("A");
        scan.close();
    }
}