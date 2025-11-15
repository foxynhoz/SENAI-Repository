using System;

public class Program : Players 
    //Demorou um tikinho (Muito...demorou muito) pra eu entender direito como funciona sa parada de hierarquia na pratica.
    //Me pergunto a quantidade de coisa que sa joça nao salva de tempo na Unity pq putz grila
{
    static int PlayerWins = 0;
    static int CPUWins = 0;
    public static void Main()
    {
        int rodada = 1;
        while (true) //roda o programa dnv e dnv ate que se tenha uma vitoria de algum dos lados
        {   
            if (rodada >= 6)
            {
                if (PlayerWins == CPUWins)
                {
                    Console.WriteLine("<<<PRORROGAÇÃO>>>");
                }
                if (PlayerWins > CPUWins)
                {
                    Console.WriteLine("O JOGADOR GANHOU O MELHOR DE 5");
                    break;
                }
                if (PlayerWins < CPUWins)
                {
                    Console.WriteLine("A CPU GANHOU O MELHOR DE 5");
                    break;
                }
            }
            ////////////Fim do bloco de IFS

            Console.WriteLine("RODADA " + rodada + " DE 5");
            Console.WriteLine("CPU: " + CPUWins + "   PLAYER:" + PlayerWins);
            
            Players p = new Players(); 
            p.PLAYERTurn(); //Roda a funçao que pergunta pro jogador a escolha
            p.CPUTurn(); //Gera uma opçao aleatoria

            Console.WriteLine("\nTu escolheu: " + p.PlayerChoice);
            Console.WriteLine("CPU escolheu: " + p.CPUChoice);

            RoundWinner(p.PlayerChoice, p.CPUChoice); //Joga as 2 escolhas pro metodo que diz quem ganhou
            rodada++; //Achei justo adicionar +1 rodada mesmo tendo empate, isso abre margem pra uma prorrogaçao ja que ele so finaliza quando nao houver igualdade
        }
        
    }

    public static void RoundWinner(string player, string cpu)
    {
        if (player == cpu)
        {
            Console.WriteLine("HA HA, EMPATE stoopid\n");
            return;
        }    
        if ((player == "pedra" && cpu == "tesoura") ||(player == "tesoura" && cpu == "papel") ||(player == "papel" && cpu == "pedra"))
        {
            VITORIA();
        }
        else
        {
            DERROTA();
        }
    }
    static void VITORIA()
    {
        Console.WriteLine("Player Venceu essa rodada, Yayyyyy\n");
        PlayerWins++;
    }
    static void DERROTA()
    {
        Console.WriteLine("CPU venceu essa rodada, womp womp\n");
        CPUWins++;
    }
}
