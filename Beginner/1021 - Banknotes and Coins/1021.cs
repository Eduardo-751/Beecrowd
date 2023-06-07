using System;

class URI
{
    static void Main(string[] args)
    {
       int[] banknotes = {10000, 5000, 2000, 1000, 500, 200};
        int[] coins = {100, 50, 25, 10, 5, 1};
        
        String[] input = Console.ReadLine().Trim().Split('.');
        int money = int.Parse(input[0]) * 100 + int.Parse(input[1]);
        
        Console.WriteLine("NOTAS:");
        foreach(int banknote in banknotes){
            Console.WriteLine($"{money/banknote} nota(s) de R$ {banknote/100.0:0.00}");
            money %= banknote;
        }
        
        Console.WriteLine("MOEDAS:");
        foreach(int coin in coins){
            Console.WriteLine($"{money/coin} moeda(s) de R$ {coin/100.0:0.00}");
            money %= coin;
        }
    }
}