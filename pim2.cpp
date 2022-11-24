#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void CadatroAluno(); // Função específica para criação de tela de cadastro de aluno


int main(){
system("cls"); // Limpa a tela

    //Definindo variáveis:
    int opcao;

    //Conferimento e validação da opção. Caso a opção não seja válida o usuário terá outra chance de escolher opção. 
    while (opcao <1 || opcao > 1){
        //Interface de menu para o usuário:
        printf("\n\nEscolha uma opcao:\n1 - Cadastro de curso \n2 - Cadastro de disciplina\n3 - Cadastro de Turma \n4 - Cadastro de Aluno\n5 - Cadastro de professor\n ");

        //Lendo a opção:
        scanf("%d", &opcao);
        // Resultado de acordo com a opção escolhida:
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
