#include <stdio.h> //biblioteca de comunica?ao com usuario
#include <stdlib.h>//biblioteca de aloca?ao de espa?o da memoria
#include <locale.h>//bibliotece de aloca?ao de texto por regiao
#include <string.h>//biblioteca responsavel por cuidar das strings


int registro() //fun?ao responsavel por cadastrar os usu?rios no sistema
{
    //inicio cria??o de vari?veis/strings	
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   //final da cria??o de vari?veis/strings
   
printf("Digite o CPF a ser cadastrado: "); //coletando informa??o do usu?rio
 scanf ("%s", cpf); 
    
    strcpy (arquivo, cpf); //Respons?vel por copiar os valores da string
    
    FILE *file; //cria o arquivo
    file = fopen(arquivo, "w");//cria o arquivo, o "w" significa escrever
    fprintf(file, cpf);//salva o valor da variavel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a"); //cria o arquivo, o "a" significa atualizar
    fprintf(file, ","); //mostra o texto do arquivo salvo na tela, e a virgula serve para faser a separa?ao
    fclose(file);
    
printf("Digite o nome a ser cadastrado: ");
 scanf ("%s", nome);
    
     file = fopen(arquivo, "a");
     fprintf(file, nome);
     fclose(file);
     
     file = fopen(arquivo, "a");
     fprintf(file, ",");
     fclose(file);
     
printf("Digite o sobrenome a ser cadastrado: ");
 scanf ("%s", sobrenome);
     
     file = fopen(arquivo, "a");
     fprintf(file, sobrenome);
     fclose(file);
     
     file = fopen(arquivo, "a");
     fprintf(file, ",");
     fclose(file);
     
 printf("Digite o cargo a ser cadastrado: ");
  scanf("%s", cargo);
  
     file = fopen(arquivo, "a");
     fprintf(file, cargo);
     fclose(file);
  
       
       system ("pause");
     
    
    
     
     
}


int consultar()
{
	setlocale(LC_ALL, "portuguese"); // define a linguagem
	
   char cpf[40];
   char conteudo[200];
   
   printf("Digite o CPF a ser consultado: ");
   scanf("%s", cpf);
   
   FILE *file;
   file = fopen(cpf, "r");
   
   if (file == NULL) // quando a op??o for nula
   {
       printf ("Não foi pessivel abrir o arquivo, não localizado!.\n");
   }
   
   while (fgets(conteudo, 200, file)!= NULL)
   {
   	    printf("\nEssas são as informações do usuário: ");
   	    printf("%s", conteudo);
   	    printf("\n\n");
   }
   
      system("pause");
   
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%S", cpf);
	remove (cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file ==NULL)
	{
		printf("o usuário não se encontra no sistema!.\n");
		
	}
	
	system("pause");
	
	
	
	
	
}




int main()
{
	int opcao=0;//Definindo variaveis
	int laco=1;
	char senhadigitada[] ="a";
	int comparacao;
	
	
	printf("### Cartorio da EBAC ###\n\n");
	printf("Login de administrador!\n\nDigite a sua senha: ");
	scanf("%s" , senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
	    system ("cls");
	    for(laco=1; laco=1;)
	    {
	  
	     
	
     	system("cls"); //respons?vel por limpar a tela
  	    setlocale(LC_ALL, "portuguese");//Definindo a linguagem
  	
	    printf("### Cartorio da EBAC ###\n\n");
     	printf("Escolha a opção desejada do menu: \n\n");//inicio do menu
	    printf("\t1- Registrar nomes\n");
	    printf("\t2- Consultar nomes\n");
	    printf("\t3- Deletar nomes\n\n");
	    printf("\t4- Sair do sistema\n\n");
	    printf("opção:");//fim do menu
	
	
	    scanf("%d", &opcao);//Armazenamento a escolha do usuario
	    system("cls");
		
        switch(opcao)//inicio da sele?ao
    
		{
    	case 1:
        registro();//chamada de fun??es
		break;
		
		case 2:
	    consultar();
	    break;
	    
	    case 3:
	    deletar();
		break;
		
		case 4:
		printf("Obrigado por ultilizar o sistema!\n");
		return 0;
		break;
		
		
		default:
	    printf("Essa opção não esta disponivel!\n");
     	system("pause");
     	break;
		//fim da sele??o	
	   }
    }
}
  
  
else
    printf("Senha incorreta!");
  
}






    
	
	
	

