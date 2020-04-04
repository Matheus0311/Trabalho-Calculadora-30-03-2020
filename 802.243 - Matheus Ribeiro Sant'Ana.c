//Created by: Matheus Ribeiro Sant'Ana. RGM:802.243
#include <stdio.h> //Biblioteca de tratamento de entrada/sa�da.
#include <stdlib.h> //Biblioteca de implementa��o de Fun��es para diversas opera��es.
#include <locale.h> //Biblioteca que especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.
#include <conio.h> //Biblioteca para utiliza��o de fun��es como: getche
int main()//In�cio da fun��o int main ().
{
    char S, V; //Vari�vel de caracteres alfanum�rico.
    float a=0, b=0, c=0, result=0; //Vari�vel de n�meros reais.
    int i=1;//Vari�vel de contador.
    setlocale(LC_ALL, "Portuguese"); //LC_ALL Faz refer�ncia � todos os aspectos de localiza��o.
    do{//fun��o do-while sendo aberta.
        system("color 0A"); //Mudar a colora��o.
        printf("\n=======================================================>Calculadora<====================================================\n");//Menu criado para que a est�tica do programa fique agrad�vel.
        printf("\n************************************************************************************************************************\n");
        printf("\n                                                 _________________________");
        printf("\n                                                |                         |");
        printf("\n                                                |    Escolha a op��o      |");
        printf("\n                                                |_________________________|\n\n");
        printf("                                                     0 - Sair\n");
        printf("                                                     1 - Adic�o\n");
        printf("                                                     2 - Subtra��o\n");
        printf("                                                     3 - Multiplica��o\n");
        printf("                                                     4 - Divis�o\n");
        printf("                                                     5 - Potencia��o\n");
        printf("\n************************************************************************************************************************\n");//Fim do menu criado.
        printf("\n\n\n\n                                                   Sua op��o � ---> ");//Entrada de dados.
            S = getche();//Permite que o n�mero seja lido no instante que � digitado e permane�a na tela.
        if (S=='0' || S=='1' || S=='2' || S=='3' || S == '4' || S == '5')//Condi��o para que o primeiro if ocorra.
        {
            system("cls");
            switch (S)//Fun��o para escolher o que foi lido em S = getche ().
            {
                case '0'://Sair do programa.
                {
                    system("color 40");//Mudar a colora��o.
                    return(0);//Sem retorno.
                    break;//Fim Case: 0.
                }
                case '1'://Executa a soma dos dados que ser�o inseridos.
                {
//A entrada de dados come�a aqui apenas por causa da mudan�a de cor que � feita ap�s a leitura do dado.
//A entrada de dados poderia ser feita apenas uma vez, acima da fun��o switch.
//A escolha foi feita apenas para fins de est�tica do programa.
                    system("color 0B");//Mudar a colora��o.
                    printf("\n                                                   ++Adi��o!++");
                    printf("\n\n\n\n\n\n\n\n                                        Informe o primeiro operando ---> ");//Entrada do primeiro n�mero.
                        scanf("%f", &a);//Leitura do primeiro n�mero
                    printf("\n                                        Informe o segundo operando --->  ");//Entrada do segundo n�mero.
                        scanf("%f", &b);//Leitura do segundo n�mero.
                    result = a + b;//C�lculo.
                    break;//Fim Case: 1.
                }
                case '2'://Executa a subtra��o dos dados que ser�o inseridos.
                {
                    system("color 07");//Mudar a colora��o.
                    printf("\n                                                 --Subtra��o!--");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro n�mero.
                        scanf("%f", &a);//Leitura do primeiro n�mero
                    printf("\n                                       Informe o segundo operando --->  ");//Entrada do segundo n�mero.
                        scanf("%f", &b);//Leitura do segundo n�mero.
                    result = a - b;//C�lculo.
                    break;//Fim Case: 2.
                }
                case '3'://Executa a multiplica��o dos dados que ser�o inseridos
                {
                    system("color 0D");//Mudar a colora��o.
                    printf("\n                                               **Multiplica��o!**");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro n�mero.
                        scanf("%f", &a);//Leitura do primeiro n�mero
                    printf("\n                                       Informe o segundo operando --->  ");//Entrada do segundo n�mero.
                        scanf("%f", &b);//Leitura do segundo n�mero.
                    result = a*b;//C�lculo.
                    break;//Fim Case: 3.
                }
                case '4'://Executa a divis�o dos dados que ser�o inseridos.
                {
                    system("color 0E");//Mudar a colora��o.
                    printf("\n                                                  //Divis�o!//");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro n�mero.
                        scanf("%f", &a);//Leitura do primeiro n�mero
                    printf("\n                                       Informe o segundo operando --->  ");//Entrada do segundo n�mero.
                        scanf("%f", &b);//Leitura do segundo n�mero.
                    result = a/b;//C�lculo.
                    break;//Fim Case: 4.
                }
                case '5'://Executa a potencia��o do primeiro dado pelo segundo inseridos.
                {
                    system("color 0C");//Mudar a colora��o.
                    printf("\n                                              ^^Potencia��o!^^");
                    printf("\n\n\n\n\n\n\n\n                                       Informe o primeiro operando ---> ");//Entrada do primeiro n�mero.
                        scanf("%f", &a);//Leitura do primeiro n�mero
                    printf("\n                                       Informe o expoente --->  ");//Entrada do segundo n�mero.
                        scanf("%f", &b);//Leitura do segundo n�mero.
                    c = a;
                    while (i<b)//Fun��o while para ajudar no c�lculo de potencia��o.
                    {
                        a=a * c;//C�lculo.
                        i++;//Vari�vel Contador.
                    }
                    result = a;//Fim do c�lculo de potencia��o.
                    break;//Fim Case: 5.
                }
            }
            printf("\n                                        Esse � o seu resultado ---> %g\n", result);//Sa�da de resultados.
            printf("\n\n                                        Deseja continuar com outra opera��o? \n                                       'S' para sim \n                                       'N' para n�o \n                                       ---> ");
                V = getche();//Permite que o n�mero seja lido no instante que � digitado e permane�a na tela.
            if (V=='S' || V == 's')//Condi��o para que o segundo if ocorra.
            {
                system("cls");//Limpar a tela.
                i =1, a=0, b=0, c=0, result=0;//Reniciando as vari�veis.
            }
        }
        else//Caso o primeiro if n�o seja atendido.
        {
            system("color 0C");//Mudar a colora��o.
            printf("\n\n                                                  Erro: Operador Inv�lido!\n\n");//Mensagem de erro.
            system("pause");//Pausa do sistema.
            V='S';//Para retornar a tela
            system("cls");//Limpar a tela.
        }
    }while (V=='S' || V=='s');//Condi��o para que a fun��o 'do-while' exista, seu encerramento.
}//Fim da fun��o int.
