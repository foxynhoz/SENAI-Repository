class Node
{
    public int X, Y;
    public int G, H, F;
    public Node Parent;

    public Node(int x, int y, int g, int h, Node pai)
    {
        G = g;
        X = x;
        H = h;
        Y = y;
        F = g + h;
        Parent = pai;
    }
}
