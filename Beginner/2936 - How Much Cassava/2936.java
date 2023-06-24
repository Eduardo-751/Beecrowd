import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        int[] table = {300, 1500, 600, 1000, 150};
        int gramas = 225;
        Scanner scanner = new Scanner(System.in);
        
        for(int i = 0; i<5; i++){
            int aux = scanner.nextInt();
            gramas += table[i]*aux;
        }
        System.out.println(gramas);
        scanner.close();
    }
}