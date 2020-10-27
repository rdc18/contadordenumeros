/* Desenvolvido por Renato de Castro
Licença GPL

ATENÇÃO DEV! nunca usar 'N' na variáveis 
char, esse é seu valor padrão */

#include <stdio.h>

int main()
{
    float num, soma;
    char comando, opcao;
    int contagem, excluidos;

    contagem = excluidos = num = soma = 0;
    comando = 'N';

    //Menu

    while(opcao != 'x'){
        printf("\n# CONTADOR E SOMADOR DE NÚMEROS #\n \n");
        printf("Selecione uma opção:\n");
        printf("a - Adcionar números ao programa\n");
        printf("s - Exibir contagem e soma de números\n");
        printf("n - Exibir o último número inserido\n");
        printf("h - Sobre \n");
        printf("x - Sair do programa\n");
        scanf(" %c", &opcao);

    
        switch(opcao){

            //Adcionar números
            case 'a':
                printf("\nDigite os números que deseja incluir, separados por um enter\n");
                printf("Digite ',x' em conjunto do último número que deseja digitar para\nretornar ao menu\n");
                while(comando != 'x')
                {
                    scanf("%f , %c", &num, &comando);
                    soma = num + soma;
                    contagem = contagem + 1;   
                }
                comando = 'N';
                break;

            //Exibir informações
            case 's':
                printf("\n \nForam digitados no total %d números \n", contagem);
                printf("Foram excluidos %d números \n", excluidos);
                printf("A soma dos números digitados é: %f \n", soma);
                printf("\n \nPressione x e enter para retornar ao menu\n");
                while(comando != 'x')
                    comando = getchar();
                comando = 'N';
                break;

            //Exibir último número inserido
            case 'n':
                printf("\n \n O último número inserido foi: %f \n", num);
                if(num != 0)
                {
                    printf("Deseja EXCLUI-LO? \n s - sim \n n - não\n");
                    scanf(" %c", &comando);
                    if(comando == 's')
                    {
                        soma = soma - num;
                        excluidos = excluidos + 1;
                        printf("O último número (%f) foi excluído do programa!\n \n", num);
                        num = 0;
                    }
                    else
                        printf("Nenhum número foi excluído!");
                    comando = 'N';
                }
                break;

            //Exibir sobre
            case 'h':
                printf("\n \nEsse programa foi desenvolvido por Renato de Castro para seu estudo da linguagem C.\n");
                printf("Foi testado em um sistema operacional Linux, e, dessa forma, não é garantida a sua\noperação correta em outros sistemas.\n");
                printf("Licença GPL.\n");
                printf("\nSomente é possível excluir o número inserdo mais recentemente. Se o processo\nfor realizado e questionado ao sistema qual o último número,\n");
                printf("este retornará 0.0000000.");
                printf("\n \nPressione x e enter para retornar ao menu\n");
                while(comando != 'x')
                    comando = getchar();
                comando = 'N';
                break;

            //Sair
            case 'x':
                printf("\nAté mais!\n");
                break;


            default:
                printf("Opção inválida! \n");
                
        }
                
        
 
  
    }
    return 0;
}