using System;

class URI {
    static void Main() {
        int N = int.Parse(Console.ReadLine());
        string[] inputs = Console.ReadLine().Split(' ');

        int[] X = new int[N];
        for (int i = 0; i < N; i++) {
            X[i] = int.Parse(inputs[i]);
        }

        int R = X[0];
        int pos = 0;

        for (int i = 1; i < N; i++) {
            if (X[i] < R) {
                R = X[i];
                pos = i;
            }
        }

        Console.WriteLine($"Menor valor: {R}");
        Console.WriteLine($"Posicao: {pos}");
    }
}