using System;

static class Map
{
    public static Node Find(char[,] grid, char target)
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                if (grid[i, j] == target)
                    return new Node(i, j, 0, 0, null);

        return null;
    }

    public static void Print(char[,] grid)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                Console.Write(grid[i, j] + " ");
            }
            Console.WriteLine();
        }
    }
}
