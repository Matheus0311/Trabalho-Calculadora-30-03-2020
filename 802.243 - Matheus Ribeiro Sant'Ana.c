//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/saída.
#include <stdlib.h> //Biblioteca de implementação de Funções para diversas operações.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localização específica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utilização de funções como: getche
int main()//Início da função int main ().
{
    char S, V; //Variável de caracteres alfanumérico.
    float a=0, b=0, c=0, result=0; //Variável de números reais.
    int i=1;//Variável de contador.
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz referência à todos os aspectos de localização.
    do{//função do-while sendo aberta.
        system("color 0A"); //Mudar a coloração.
        printf("\n=======================================================>Calculadora<====================================================\n");//Menu criado para que a estética do programa fique agradável.
        printf("\n************************************************************************************************************************\n");
        printf("\n                                                 _________________________");
        printf("\n                                                |                         |");
        printf("\n                                                |    Escolha a opção      |");
        printf("\n                                                |_________________________|\n\n");
        printf("                                                     0 - Sair\n");
        printf("                                                     1 - Adicão\n");
        printf("                                                     2 - Subtração\n");
        printf("                                                     3 - Multiplicação\n");
        printf("                                                     4 - Divisão\n");
        printf("                                                     5 - Potenciação\n");
        printf("\n************************************************************************************************************************\n");//Fim do menu criado.
        printf("\n\n\n\n                                                   Sua opção é ---> ");//Entrada de dados.
            S = getche();//Permite que o número seja lido no instante que é digitado e permaneça na tela.
        if (S=='0' || S=='1' || S=='2' || S=='3' || S == '4' || S == '5')//Condição para que o primeiro if ocorra.
        {
            system("cls");
            switch (S)//Função para escolher o que foi lido em S = getche ().
            {
                case '0'://Sair do programa.
                {
                    system("color 40");//Mudar a coloração.
                    return(0);//Sem retorno.
                    break;//Fim Case: 0.
                }
                case '1'://Executa a soma dos dados que serão inseridos.
                {
//A entrada de dados começa aqui apenas por causa da mudança de cor que é feita após a leitura do dado.
//A entrada de dados poderia ser feita apenas uma vez, acima da função switch.
//A escolha foi feita apenas para fins de estética do programa.
                    system("color 0B");//Mudar a coloração.
                    printf("\n                                                   ++Adição!++");
                    printf("\n\n\n\n\n\n\n\n                                        Informe o primeiro operando ---> ");//Entrada do primeiro número.
                        scanf("%f", &a);//Leitura do primeiro número
                    printf("\n                                        Informe o segundo operando --->  ");//Entrada do segundo número.
                        scanf("%f", &b);//Leitura do segundo número.
                    result = a + b;//Cálculo.
                    break;//Fim Case: 1.
                }
                case '2'://Executa a subtração dos dados que serão inseridos.
                {
                    system("color 07");//Mudar a coloração.
                    printf("\n                                                 --Subtração!--");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro número.
                        scanf("%f", &a);//Leitura do primeiro número
                    printf("\n                                       Informe o segundo operando --->  ");//Entrada do segundo número.
                        scanf("%f", &b);//Leitura do segundo número.
                    result = a - b;//Cálculo.
                    break;//Fim Case: 2.
                }
                case '3'://Executa a multiplicação dos dados que serão inseridos
                {
                    system("color 0D");//Mudar a coloração.
                    printf("\n                                               **Multiplicação!**");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro número.
                        scanf("%f", &a);//Leitura do primeiro número
                    printf("\n                                       Informe o segundo operando --->  ");//Entrada do segundo número.
                        scanf("%f", &b);//Leitura do segundo número.
                    result = a*b;//Cálculo.
                    break;//Fim Case: 3.
                }
                case '4'://Executa a divisão dos dados que serão inseridos.
                {
                    system("color 0E");//Mudar a coloração.
                    printf("\n                                                  //Divisão!//");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro número.
                        scanf("%f", &a);//Leitura do primeiro número
                    printf("\n                                       Informe o segundo operando --->  ");//Entrada do segundo número.
                        scanf("%f", &b);//Leitura do segundo número.
                    result = a/b;//Cálculo.
                    break;//Fim Case: 4.
                }
                case '5'://Executa a potenciação do primeiro dado pelo segundo inseridos.
                {
                    system("color 0C");//Mudar a coloração.
                    printf("\n                                              ^^Potenciação!^^");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro número.
                        scanf("%f", &a);//Leitura do primeiro número
                    printf("\n                                       Informe o expoente --->  ");//Entrada do segundo número.
                        scanf("%f", &b);//Leitura do segundo número.
                    c = a;
                    while (i<b)//Função while para ajudar no cálculo de potenciação.
                    {
                        a=a * c;//Cálculo.
                        i++;//Variável Contador.
                    }
                    result = a;//Fim do cálculo de potenciação.
                    break;//Fim Case: 5.
                }
            }
            printf("\n                                        Esse é o seu resultado ---> %g\n", result);//Saída de resultados.
            printf("\n\n                                        Deseja continuar com outra operação? \n                                       'S' para sim \n                                       'N' para não \n                                       ---> ");
                V = getche();//Permite que o número seja lido no instante que é digitado e permaneça na tela.
            if (V=='S' || V == 's')//Condição para que o segundo if ocorra.
            {
                system("cls");//Limpar a tela.
                i =1, a=0, b=0, c=0, result=0;//Reniciando as variáveis.
            }
        }
        else//Caso o primeiro if não seja atendido.
        {
            system("color 0C");//Mudar a coloração.
            printf("\n\n                                                  Erro: Operador Inválido!\n\n");//Mensagem de erro.
            system("pause");//Pausa do sistema.
            V='S';//Para retornar a tela
            system("cls");//Limpar a tela.
        }
    }while (V=='S' || V=='s');//Condição para que a função 'do-while' exista, seu encerramento.
}//Fim da função int.
