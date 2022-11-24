#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int CadatroCurso(void); // Função específica para criação de tela de cadastro de curso
int CadastroDisciplina(void); // Função específica para criação de tela de cadastro de disciplina
int CadastroTurma(void); // Função específica para criação de tela de cadastro de turma
int CadastroAluno(void); // Função específica para criação de tela de cadastro de aluno
int CadastroProfessor(void); // Função específica para criação de tela de cadastro de professor

//Declaração de variáveis globais
int opcao; 

int main(void){

system("cls"); // Limpa a tela

    //Conferimento e validação da opção. Caso a opção não seja válida o usuário terá outra chance de escolher opção. 
    while (opcao <1 || opcao > 5){
        //Interface de menu para o usuário:
        printf("\n\nEscolha uma opcao:\n1 - Cadastro de curso \n2 - Cadastro de disciplina\n3 - Cadastro de Turma \n4 - Cadastro de Aluno\n5 - Cadastro de professor\n ");

        //Lendo a opção:
        scanf("%d", &opcao);
        // Resultado de acordo com a opção escolhida:
        switch(opcao){
            case 1 :
                CadatroCurso();
            break;
            case 2 :
                CadastroDisciplina();
            break;
            case 3 :
                CadastroTurma();
            break;
            case 4 :
                CadastroAluno();
            break;
            case 5 :
                CadastroProfessor();
            break;
            default:
                printf("\nErro!Opcao invalida.");
        }

    }

    return 0;
} 

// Função para cadastrar curso
    int CadatroCurso(void){

        // Declarando variáveis locais
        int codigoCurso[6];
        int cargaHoraria[20];
        int i, qtd;
        char nomeCurso[100][20];
        int areaConhecimento[10];

   	
		printf("----------------------------------------------------- \n");
    	printf("-------------------- EduConnect --------------------- \n");
    	printf("----------------> CADASTRO DE CURSO <---------------- \n\n\n");

		printf("Informa o numero de cursos a ser cadastrado (numero max 20)\n ");
		scanf("%d", &qtd);
    if (qtd > 20){
        printf("\nNumero maximo de 20 cursos atingido! Digite uma nova quantidade:\n ");
        scanf("%d", &qtd); }
        for(i=0; i<qtd; i++){
            printf("\nInforme o codigo do curso %d: ", i+1);
            scanf("%d", &codigoCurso[i]);
            printf("\nInforme o nome do curso %d: ", i+1);
            scanf("%s", &nomeCurso[i]);
            printf("\nInforme a carga horaria total do curso %d: ", i+1);
            scanf("%d", &cargaHoraria[i]);
            printf("Selecione a area do conhecimento sabendo que \n\n1-Ciencia Exatas e da Terra\n2- Ciencias Biologicas\n3- Engenharisa\n4- Ciencias da Saude\n5- Ciencias Agrarias\n6-Linguisticas\n7- Letras e artras\n8- Ciencias Sociais Aplicadas\n9- Ciencias humanas\n: ");
            scanf("%d", &areaConhecimento[i]);
            switch(areaConhecimento[i]){
        	    case 1 :
            	    printf("Area de conhecimento >> Ciencias Exatas e da Terra");
            	break;
            	case 2 : 
                	printf("Area de conhecimento >> Ciencias Biológicas");
            	break;
            	case 3 :
                	printf("Area de conhecimento >>  Engenharias");
            	break;
            	case 4 :
                	printf("Area de conhecimento >>  Ciencias da Saude");
            	break;
        	    case 5 :
        	        printf("Area de conhecimento >>  Ciencias Agrarias");
        	    break;
        	    case 6 :
            	    printf("Area de conhecimento >>  Linguistica");
        	    break;
            	case 7 :
        	        printf("Area de conhecimento >>  Letras e Artes");
            	break;
        	    case 8 :
            	    printf("Area de conhecimento >>  Ciencias Sociais Aplicadas");
            	break;
            	case 9 :
                	printf("Area de conhecimento >>  Ciencias Humanas");
            	break;
            	default : 
                	printf("Opcao invalida"); 
            }


        printf("\n\n----------------------------------------------------- \n");
        printf("-------------------- EduConnect --------------------- \n");
        printf("----------------> CURSO CADASTRADO <-----------------\n");
        printf("\nCodigo do curso %d:\nNome do curso %s\nCarga Horaria %d\nArea de Conhecimento %d\n\n", codigoCurso[i], nomeCurso[i], cargaHoraria[i], areaConhecimento[i]);
        }
            

        return opcao;
    }
      


    int CadastroDisciplina(void){
        int i,qtd;
        int codigo_disciplina[100];
        char nome_disciplina[100][20];
        int carga_horaria_semanal[100];
        int carga_horaria_total[100];
        int tipo_curso[100];
        
   		printf("----------------------------------------------------- \n");
    	printf("-------------------- EduConnect --------------------- \n");
    	printf("--------------> CADASTRO DE DISCIPLINA <------------- \n\n\n");
    
    	printf("Informe o numero de disciplinas a ser cadastrado (numero max 300): ");
		scanf("%d", &qtd);
    		if (qtd > 300){
        	printf("\nNumero maximo de 300 disciplinas atingido! Digite uma nova quantidade: ");
        	scanf("%d", &qtd); }
        	for(i=0; i<qtd; i++){
        		printf("Digite o codigo da disciplina %d:  ", i+1);
        		scanf("%d", &codigo_disciplina[i]);
        		printf("Digite o nome da disciplina %d:  ", i+1);
        		setbuf(stdin, 0);
                fgets(nome_disciplina[i],100,stdin);
        		printf("Digite a carga horaria semanal da disciplina %d:  ", i+1);
        		scanf("%d", &carga_horaria_semanal[i]);
                carga_horaria_total[i] = carga_horaria_semanal[i] * 20; // Levando em consideração que um semestre tem 20 semanas
                printf("Selecione o tipo do curso (1- Presencial ou 2 - EAD): ");
        		scanf("%d", &tipo_curso[i]);
        		switch(tipo_curso[i]){
        			case 1:
        				printf("Curso Presencial\n");
        				break;
        			case 2:
        				printf("Curso EAD\n");
        				break;
        			default:
        				printf("opcao invalida!!!\n");
				}
	        printf("\n\n----------------------------------------------------- \n");
        	printf("-------------------- EduConnect --------------------- \n");
        	printf("----------------> DISCIPLINA CADASTRADA <-----------------\n\n");
        	printf("Codigo da disciplina: %d\nNome da disciplina: %s\nCarga horaria semanal: %d\nCarga horaria total: %d\nTipo do curso: %d", codigo_disciplina[i], nome_disciplina[i],carga_horaria_semanal[i], carga_horaria_total[i],tipo_curso[i]);
    		printf("\n\n\n");
        	}
        	return opcao;
    }
	int CadastroTurma(void){
        int i,qtd;
        int codigo_turma[100];
        char nome_turma[100][100];
        char periodo[5];
        int limite_alunos[100];
        int tipo_curso[100];
        
   	    
    	printf("Informe o numero de turmas a ser cadastrado (numero max 100): ");
		scanf("%d", &qtd);
    		if (qtd > 100){
        	    printf("\nNumero maximo de 100 turmas atingido! Digite uma nova quantidade: ");
        	    scanf("%d", &qtd); }
        	for(i=0; i<qtd; i++){
                printf("----------------------------------------------------- \n");
    	        printf("-------------------- EduConnect --------------------- \n");
    	        printf("-----------------> CADASTRO DE TURMA <--------------- \n\n\n");
                printf("Digite o codigo da turma: ");
                scanf("%d",&codigo_turma[i]);
                printf("Digite o nome da turma: ");
                setbuf(stdin, 0);
                fgets(nome_turma[i],100,stdin);
                printf("Selecione o periodo da turma (M- matutino ou V- vespertino e N- noturno): ");
        		scanf("%s", &periodo[i]);
        		    switch(periodo[i]){
                        case 'M':
                            printf("\n >> Turma matutina\n");
                            break;
                        case 'V':
                            printf("\n >> Turma vespertina\n");
                            break;
                        case 'N':
                            printf("\n >> Turma noturna\n");
                            break;
                        default:
                            printf("\nopcao invalida!!!\n");
                    }
                printf("\nInforme o limite maximo de alunos matriculados: ");
                scanf("%d", &limite_alunos[i]);
                printf("\n\n----------------------------------------------------- \n");
                printf("-------------------- EduConnect --------------------- \n");
                printf("----------------> DISCIPLINA CADASTRADA <-----------------\n\n");
                printf("Codigo da turma: %d\nNome da turma: %s\nPeriodo da turma: %c\nLimite maxido de alunos: %d\n", codigo_turma[i], nome_turma[i],periodo[i], limite_alunos[i]);
            }
            return opcao;
        }
	int CadastroAluno(void){
        int i,qtd;
        int matricula[100];
        char nome_aluno[100][500];
        char RG[10][500];
        char CPF[20][500];
        char nome_mae[100][500];
        char nome_pai[100][500];
        char telefone[15][500];
        char email[100][500];
        
        

    
    	printf("Informe o numero de alunos a ser cadastrado (numero max 500): ");
		scanf("%d", &qtd);
    		if (qtd > 500){
        	    printf("\nNumero maximo de 500 alunos atingido! Digite uma nova quantidade: ");
        	    scanf("%d", &qtd); }
        	for(i=0; i<qtd; i++){
                printf("----------------------------------------------------- \n");
    	        printf("-------------------- EduConnect --------------------- \n");
    	        printf("----------------> CADASTRO DE ALUNOS <--------------- \n\n\n");
                printf("Digite o nome completo do aluno: ");
                setbuf(stdin, 0);
                fgets(nome_aluno[i],100,stdin);
                printf("Digite a matricula do aluno: ");
                scanf("%d", &matricula[i]);
                printf("Digite o RG do aluno: ");
                setbuf(stdin, 0);
                fgets(RG[i],10,stdin);
                printf("Digite o CPF do aluno: ");
                setbuf(stdin, 0);
                fgets(CPF[i],20,stdin);
                printf("Digite o nome completo da mae do aluno: ");
                setbuf(stdin, 0);
                fgets(nome_mae[i],100,stdin);
                printf("Digite o nome completo do pai do aluno: ");
                setbuf(stdin, 0);
                fgets(nome_pai[i],100,stdin);
                printf("Digite o telefone do aluno: ");
                setbuf(stdin, 0);
                fgets(telefone[i],16,stdin);
                printf("Digite o e-mail do aluno: ");
                setbuf(stdin, 0);
                fgets(email[i],100,stdin);
                printf("\n\n----------------------------------------------------- \n");
                printf("-------------------- EduConnect --------------------- \n");
                printf("----------------> DISCIPLINA CADASTRADA <-----------------\n\n");
                printf("Matricula: %d\nNome do aluno: %s\nRG: %s\nCPF: %s\nNome da mae: %s\nNome do pai: %s\nTelefone: %s\nE-mail: %s\n", matricula[i], nome_aluno[i],RG[i], CPF[i],nome_mae[i],nome_pai[i],telefone[i],email[i] );

        }
        return opcao;
    
    }
    int CadastroProfessor(void){
  		int i,qtd;
        int numero_funcional[100];
        char nome[100][50], email[100][50];
        int titularidade[100];
        char rg[100][50], cpf[100][50], ctps[100][50];
        char telefone[15][50];
        
   		printf("----------------------------------------------------- \n");
    	printf("-------------------- EduConnect --------------------- \n");
    	printf("--------------> CADASTRO DE PROFESSORES <------------- \n\n\n");
    
    	printf("Informe a quantidade de professores a ser cadastrado (numero max 50)\n ");
		scanf("%d", &qtd);
    		if (qtd > 50){
        	printf("\nNumero maximo de 50 cadastros atingido! Digite uma nova quantidade\n ");
        	scanf("%d", &qtd); }
        	for(i=0; i<qtd; i++){
        		printf("digite o numero da funcional %d: ", i+1);
        		scanf("%d", &numero_funcional[i]);
        		printf("digite o nome completo do professor %d: ", i+1);
        		setbuf(stdin, 0);
                fgets(nome[i],100,stdin);
        		printf("selecione uma titularidade:\n1-especialista \n2-mestre \n3-doutor\n");
        		scanf("%d", &titularidade[i]);
        		switch(titularidade[i]){
        			case 1:
        				printf("especialista\n");
        			break;
        			case 2:
        				printf("mestre\n");
        			break;
        			case 3:
        				printf("doutor\n");
        			break;
        			default:
        				printf("opcao invalida!!!\n");
        			break;
				}
				printf("digite o RG: ");
        		setbuf(stdin, 0);
                fgets(rg[i],100,stdin);
				printf("digite o CPF: ");
        		setbuf(stdin, 0);
                fgets(cpf[i],100,stdin);
				strcpy (ctps[i], cpf[i]);
				printf("digite o telefone: ");
        		setbuf(stdin, 0);
                fgets(telefone[i],15,stdin);
				printf("digite o email: ");
        		setbuf(stdin, 0);
                fgets(email[i],100,stdin);
				printf("----------------------------------------------------- \n");
    			printf("-------------------- EduConnect --------------------- \n");
    			printf("--------------> CADASTRO DE PROFESSORES <------------- \n\n\n");
				printf(" numero da funcional: %d\n nome completo: %s\n titularidade: %d\n RG: %s\n CPF: %s\n CTPS: %s\n telefone: %s\n email: %s\n", numero_funcional[i], nome[i], titularidade[i], rg[i], cpf[i], ctps[i], telefone[i], email[i]);
    	}
    return opcao;
	}

