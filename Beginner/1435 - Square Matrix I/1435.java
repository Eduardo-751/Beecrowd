import java.io.IOException;
import java.util.Scanner;

class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        int n;
        while ((n = sc.nextInt()) != 0) {
            int[][] mat = new int[n][n];

            int x = (n + 1) / 2;
            int a = 0, b = n - 1;

            for (int l = 1; l <= x; l++) {
                for (int i = a; i <= b; i++) {
                    for (int j = a; j <= b; j++) {
                        mat[i][j] = l;
                    }
                }
                a++;
                b--;
            }
            printMatrix(mat);
        }
        sc.close();
    }
    
    private static void printMatrix(int[][] matrix) {
        StringBuilder sb = new StringBuilder();
        for (int[] mat : matrix) {
            for (int j = 0; j < mat.length; j++) {
                if (j == 0) {
                    sb.append(String.format("%3d", mat[j]));
                } else {
                    sb.append(String.format(" %3d", mat[j]));
                }
            }
            sb.append("\n");
        }
        sb.append("\n");
        System.out.print(sb.toString());
    }
}