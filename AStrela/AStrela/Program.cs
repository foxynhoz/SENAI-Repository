/*
  Código nosso que estás em C#
  Santificado seja vós, Console
  Venha a nós o vosso array[10]
  E seja feita, sim, {vossa chave}
  Assim no if{} como no else{}
  O for (nosso; de cada dia; nos dai hoje++)
  Debugai as nossas sentenças
  Assim como nós colocamos o ponto e vígula esquecido;
  E não nos deixeis errar identação
  Mas livrai-nos das funções recursivas
  Em nome do Parent, do Children e do namespace
  A main()
 */
using System;
using System.Xml.Linq;

class Program
{
    static char[,] grid = new char[5, 5];

    static void Main()
    {

        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                grid[i, j] = 'X';

        grid[1, 4] = 'i';
        grid[4, 4] = 'f';
        grid[2, 2] = '-';
        grid[2, 3] = '-';
        grid[2, 4] = '-';
        grid[3, 1] = '-';
        /* XXXXX
         * XXXXi
         * XX---
         * X-XXX
         * XXXXf
         */

        Console.WriteLine("\nMapa Inicial\n");
        Map.Print(grid);

        Node Start = Map.Find(grid, 'i');
        Node End = Map.Find(grid, 'f');

        AISTRELA.Exec(grid, Start, End);

        Console.WriteLine("\n--PathFound---\n");
        Map.Print(grid);
    }
}
