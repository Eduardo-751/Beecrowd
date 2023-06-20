import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Main {
    public static void main(String[] args) throws IOException {
        int[] oddV = new int[5];
        int[] evenV = new int[5];
        int oddIndex = 0, evenIndex = 0;

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        for (int i = 0; i < 15; i++) {
            int N = Integer.parseInt(in.readLine());

            if (N % 2 == 0) {
                evenV[evenIndex] = N;
                evenIndex++;

                if (evenIndex == 5) {
                    for (int j = 0; j < evenIndex; j++) {
                        System.out.println("par[" + j + "] = " + evenV[j]);
                    }

                    evenIndex = 0;
                }
            } else {
                oddV[oddIndex] = N;
                oddIndex++;

                if (oddIndex == 5) {
                    for (int j = 0; j < oddIndex; j++) {
                        System.out.println("impar[" + j + "] = " + oddV[j]);
                    }

                    oddIndex = 0;
                }
            }
        }

        for (int i = 0; i < oddIndex; i++) {
            System.out.println("impar[" + i + "] = " + oddV[i]);
        }

        for (int i = 0; i < evenIndex; i++) {
            System.out.println("par[" + i + "] = " + evenV[i]);
        }
    }
}