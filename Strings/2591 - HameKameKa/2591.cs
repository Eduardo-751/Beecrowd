using System;

class Program
{
    static void Main()
    {
        int C = int.Parse(Console.ReadLine());
        for (int i = 0; i < C; i++)
        {
            string attack = Console.ReadLine();
            int group1 = attack.IndexOf('m') - 1;

            int group2 = attack.Substring(attack.IndexOf('k')).IndexOf('m') - 1;

            System.Text.StringBuilder result = new System.Text.StringBuilder();

            result.Append('k');
            for (int j = 0; j < group1 * group2; j++)
            {
                result.Append('a');
            }

            Console.WriteLine(result.ToString());
        }
    }
}