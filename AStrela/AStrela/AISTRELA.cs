using System;
using System.Collections.Generic;
using System.Xml.Linq;

static class AISTRELA
{
    public static void Exec(char[,] grid, Node inicio, Node fim)
    {
        List<Node> OpenQ = new List<Node>();
        List<Node> ClosedQ = new List<Node>();

        OpenQ.Add(inicio);

        while (OpenQ.Count > 0)
        {
            Node lastNode = OpenQ[0];
            foreach (Node n in OpenQ)
                if (n.F < lastNode.F)
                    lastNode = n;

            OpenQ.Remove(lastNode);
            ClosedQ.Add(lastNode);

            if (lastNode.X == fim.X && lastNode.Y == fim.Y)
            {
                PathFind(grid, lastNode);
                return;
            }

            int[,] move = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };

            for (int i = 0; i < 4; i++)
            {
                int nx = lastNode.X + move[i, 0];
                int ny = lastNode.Y + move[i, 1];

                if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5)
                    continue;

                if (grid[nx, ny] == '-')
                    continue;

                if (ClosedQ.Exists(n => n.X == nx && n.Y == ny))
                    continue;

                int g = lastNode.G + 1;
                int h = H(nx, ny, fim.X, fim.Y);

                if (!OpenQ.Exists(n => n.X == nx && n.Y == ny))
                    OpenQ.Add(new Node(nx, ny, g, h, lastNode));
            }
        }
    }

    static int H(int x, int y, int fx, int fy)
    {
        return Math.Abs(x - fx) + Math.Abs(y - fy);
    }

    static void PathFind(char[,] grid, Node node)
    {
        while (node.Parent != null)
        {
            if (grid[node.X, node.Y] == 'X')
                grid[node.X, node.Y] = 'o';

            node = node.Parent;
        }
    }
}
