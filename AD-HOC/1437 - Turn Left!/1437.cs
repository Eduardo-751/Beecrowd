using System;

class URI
{
    static void Main(string[] args)
    {
        int N;
        string commands;
        do
        {
            N = int.Parse(Console.ReadLine());
            if (N == 0)
                break;

            commands = Console.ReadLine();

            char direction = 'N'; // Direção inicial é norte

            for (int i = 0; i < N; i++)
            {
                if (commands[i] == 'D')
                {
                    switch (direction)
                    {
                        case 'N':
                            direction = 'L'; // Gira 90 graus à direita
                            break;
                        case 'L':
                            direction = 'S'; // Gira 90 graus à direita
                            break;
                        case 'S':
                            direction = 'O'; // Gira 90 graus à direita
                            break;
                        case 'O':
                            direction = 'N'; // Gira 90 graus à direita
                            break;
                    }
                }
                else if (commands[i] == 'E')
                {
                    switch (direction)
                    {
                        case 'N':
                            direction = 'O'; // Gira 90 graus à esquerda
                            break;
                        case 'O':
                            direction = 'S'; // Gira 90 graus à esquerda
                            break;
                        case 'S':
                            direction = 'L'; // Gira 90 graus à esquerda
                            break;
                        case 'L':
                            direction = 'N'; // Gira 90 graus à esquerda
                            break;
                    }
                }
            }
            Console.WriteLine(direction);
        } while (N != 0);
    }
}