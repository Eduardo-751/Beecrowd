import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int sequence = 0, aux = 0;
        int N = scan.nextInt();
        for(int i=0; i<N; i++){
            int V = scan.nextInt();
            if(V!=aux){
                aux=V;
                sequence++;
            }
        }
        System.out.println(sequence);
        scan.close();
    }
}