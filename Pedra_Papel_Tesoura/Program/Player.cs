using System;

public class Players
{
    public string PlayerChoice;
    public string CPUChoice;

    public void PLAYERTurn()
    {
        while (PlayerChoice != "pedra" || PlayerChoice != "papel" || PlayerChoice != "tesoura")
        {
            Console.Write("\nDigitae tua escolha boy\nPedra, Papel ou Tesoura: ");
            PlayerChoice = Console.ReadLine().ToLower();

            if (PlayerChoice == "pedra" || PlayerChoice == "papel" || PlayerChoice == "tesoura")
            {
                break; //Por algum motivo, o loop nao quebrava MESMO mudando a variavel pro que em tese, deveria quebrar ele, ent isso aqui so existe pra forçar isso msm
            }
            else
            {
                Console.WriteLine("\nOPÇAO INVALIDA, escreve direito >:(\n"); //E isso aki eh pra caso tu n digitar a palavra direito >:(
            }
        }
    }
    public void CPUTurn()
    {
        Random r = new Random();
        string[] opcoes = { "pedra", "papel", "tesoura" };
        CPUChoice = opcoes[r.Next(opcoes.Length)];
    }
}
