#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void CadatroAluno(); // Fun��o espec�fica para cria��o de tela de cadastro de aluno


int main(){
system("cls"); // Limpa a tela

    //Definindo vari�veis:
    int opcao;

    //Conferimento e valida��o da op��o. Caso a op��o n�o seja v�lida o usu�rio ter� outra chance de escolher op��o. 
    while (opcao <1 || opcao > 1){
        //Interface de menu para o usu�rio:
        printf("\n\nEscolha uma opcao:\n1 - Cadastro de curso \n2 - Cadastro de disciplina\n3 - Cadastro de Turma \n4 - Cadastro de Aluno\n5 - Cadastro de professor\n ");

        //Lendo a op��o:
        scanf("%d", &opcao);
        // Resultado de acordo com a op��o escolhida:
        switch(opcao){
            case 1 :
                void CadatroAluno(void);
                break;
            default:
                printf("\nErro!Opcao invalida.");
                break;
        }
	}
}
void CadastroAluno(){
	printf("ola");
	return;
}
