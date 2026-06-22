#include <stdio.h>
#include <string.h> // Biblioteca necessária para usar strcmp() 

typedef struct Spessoa {
    char nome[20];
    char email[30];
    
    struct endereco {
        char rua[10];
        int numero;
        char complemento[5];
        char bairro[20];
        int cep;
        char cidade[20];
        char estado[3];
        char pais[10];
    } endereco; 
    
    struct telefone {
        int DDD, numero;
    } telefone; 
    
    struct aniversario {
        int dia, mes, ano;
    } aniversario; 
    
    char observacao[50];
    
} pessoa;

int main() {
    
    pessoa agenda[100];
    
    int escolha;
    char pesquisaNAME[20];
    int pesquisaDATE, pesquisaDIA;
    
    // CADASTRO
    for (int i = 0; i < 100; i++) {
        
        printf("Entre com o NOME do contato:\n");
        scanf("%s", agenda[i].nome); 
        printf("\n");
        
        printf("Entre com o EMAIL do contato:\n");
        scanf("%s", agenda[i].email);
        printf("\n");
        
        printf("ENDERECO\n");
        printf("Rua:\n");
        scanf("%s", agenda[i].endereco.rua);
        printf("Numero:\n");
        scanf("%d", &agenda[i].endereco.numero);
        getchar();
        printf("Complemento:\n");
        scanf("%s", agenda[i].endereco.complemento);
        printf("Bairro:\n");
        scanf("%s", agenda[i].endereco.bairro);
        printf("CEP:\n");
        scanf("%d", &agenda[i].endereco.cep); 
        getchar();
        printf("Cidade:\n");
        scanf("%s", agenda[i].endereco.cidade);
        printf("Estado:\n");
        scanf("%s", agenda[i].endereco.estado);
        printf("Pais:\n");
        scanf("%s", agenda[i].endereco.pais);
        printf("\n");
        
        printf("TELEFONE\n");
        printf("DDD:\n");
        scanf("%d", &agenda[i].telefone.DDD);
        printf("Numero:\n");
        scanf("%d", &agenda[i].telefone.numero);
        printf("\n");
        
        printf("DATA DE ANIVERSARIO\n");
        printf("Dia:\n");
        scanf("%d", &agenda[i].aniversario.dia);
        printf("Mes:\n");
        scanf("%d", &agenda[i].aniversario.mes);
        printf("Ano:\n");
        scanf("%d", &agenda[i].aniversario.ano);
        
        printf("Alguma OBSERVACAO?\n1 - Sim\n2 - Nao\n");
        scanf("%d", &escolha);
        
        if (escolha == 1) {
            printf("Coloque sua observacao:\n");
            scanf("%s", agenda[i].observacao);
        } 
        
        printf("USUARIO CADASTRADO\n\n");
    } 
    
    printf("Pesquise pessoa pelo nome:\n");
    scanf("%s", pesquisaNAME);
    
    for (int i = 0; i < 100; i++) {

        if (strcmp(agenda[i].nome, pesquisaNAME) == 0) {
            
            printf("NOME: %s\n", agenda[i].nome); 
            printf("EMAIL: %s\n", agenda[i].email);
            printf("ENDERECO\n");
            
            printf("Rua: %s\nNumero: %d\nComplemento: %s\nBairro: %s\n",
                agenda[i].endereco.rua,
                agenda[i].endereco.numero,
                agenda[i].endereco.complemento,
                agenda[i].endereco.bairro
            ); // ENDERECO PT1
            
            printf("CEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",
                agenda[i].endereco.cep,
                agenda[i].endereco.cidade,
                agenda[i].endereco.estado,
                agenda[i].endereco.pais
            ); // ENDERECO PT2   
            
            printf("(%d)%d\n", agenda[i].telefone.DDD, agenda[i].telefone.numero);
            
            printf("DATA DE ANIVERSARIO: %d/%d/%d\n", 
                agenda[i].aniversario.dia,
                agenda[i].aniversario.mes,
                agenda[i].aniversario.ano
            ); // DATA DE NASCIMENTO
            
            printf("OBS: %s\n", agenda[i].observacao);
        }
    } // FIM PESQUISA POR NOME
    
    
    // PESQUISA POR MES
    printf("Pesquise a pessoa pelo mes:\n");
    scanf("%d", &pesquisaDATE);
    
    for (int i = 0; i < 100; i++) {
    
        if (agenda[i].aniversario.mes == pesquisaDATE) {
            
            printf("NOME: %s\n", agenda[i].nome);
            printf("EMAIL: %s\n", agenda[i].email);
            printf("ENDERECO\n");
            
            printf("Rua: %s\nNumero: %d\nComplemento: %s\nBairro: %s\n",
                agenda[i].endereco.rua,
                agenda[i].endereco.numero,
                agenda[i].endereco.complemento,
                agenda[i].endereco.bairro
            ); // ENDERECO PT1
            
            printf("CEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",
                agenda[i].endereco.cep,
                agenda[i].endereco.cidade,
                agenda[i].endereco.estado,
                agenda[i].endereco.pais
            ); // ENDERECO PT2   
            
            printf("(%d)%d\n", agenda[i].telefone.DDD, agenda[i].telefone.numero);
            
            printf("DATA DE ANIVERSARIO: %d/%d/%d\n", 
                agenda[i].aniversario.dia,
                agenda[i].aniversario.mes,
                agenda[i].aniversario.ano
            ); // DATA DE NASCIMENTO
            
            printf("OBS: %s\n", agenda[i].observacao);
        }
    } // FIM PESQUISA POR MES
    
    printf("Pesquise a pessoa pelo dia e mes (separados por espaco):\n");
    scanf("%d %d", &pesquisaDIA, &pesquisaDATE);
    
    for (int i = 0; i < 100; i++) {

        if (agenda[i].aniversario.mes == pesquisaDATE && agenda[i].aniversario.dia == pesquisaDIA) {
            
            printf("NOME: %s\n", agenda[i].nome);
            printf("EMAIL: %s\n", agenda[i].email);
            printf("ENDERECO\n");
            
            printf("Rua: %s\nNumero: %d\nComplemento: %s\nBairro: %s\n",
                agenda[i].endereco.rua,
                agenda[i].endereco.numero,
                agenda[i].endereco.complemento,
                agenda[i].endereco.bairro
            ); // ENDERECO PT1
            
            printf("CEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",
                agenda[i].endereco.cep,
                agenda[i].endereco.cidade,
                agenda[i].endereco.estado,
                agenda[i].endereco.pais
            ); // ENDERECO PT2   
            
            printf("(%d)%d\n", agenda[i].telefone.DDD, agenda[i].telefone.numero);
            
            printf("DATA DE ANIVERSARIO: %d/%d/%d\n", 
                agenda[i].aniversario.dia,
                agenda[i].aniversario.mes,
                agenda[i].aniversario.ano
            ); // DATA DE NASCIMENTO
            
            printf("OBS: %s\n", agenda[i].observacao);
        }
    } // FIM PESQUISA POR DIA E MES
  
    return 0;
}


/*
    O programa acima foi desenvolvido por mim, com minha lógica e raciocínio, sem a ajuda de terceiros.
*/

/*
    Tive a curiosidade de pesquisar algumas outras formas de resolver a questão. 
    O programa a seguir é o resultado de uma das pesquisas que fiz, e que achei interessante compartilhar.
    Ele é mais simples e objetivo, já que ultiliza de uma função para imprimir os dados da pessoa, evitando a repetição de código.
    Além disso, ele também utiliza de uma função para cadastrar a pessoa, o que deixa o código mais organizado e limpo.
*/

#include <stdio.h>
#include <string.h>

// Structs compactadas
typedef struct {
    char nome[20], email[30], observacao[50];
    struct { char rua[10], complemento[5], bairro[20], cidade[20], estado[3], pais[10]; int numero, cep; } endereco;
    struct { int DDD, numero; } telefone;
    struct { int dia, mes, ano; } aniversario;
} pessoa;

// Limpa o "Enter" residual do teclado
void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para simplificar o uso do fgets em todo o código
void lerString(char *destino, int tamanho) {
    fgets(destino, tamanho, stdin);
    destino[strcspn(destino, "\n")] = '\0';
}

void inserePessoa(pessoa agenda[], int *total) {
    if (*total >= 100) return;
    pessoa p; int obs;

    printf("\nNome: "); lerString(p.nome, 20);
    printf("Email: "); lerString(p.email, 30);
    
    printf("Rua: "); lerString(p.endereco.rua, 10);
    printf("Numero: "); scanf("%d", &p.endereco.numero); limpaBuffer();
    printf("Complemento: "); lerString(p.endereco.complemento, 5);
    printf("Bairro: "); lerString(p.endereco.bairro, 20);
    printf("CEP: "); scanf("%d", &p.endereco.cep); limpaBuffer();
    printf("Cidade: "); lerString(p.endereco.cidade, 20);
    printf("Estado (UF): "); lerString(p.endereco.estado, 3);
    printf("Pais: "); lerString(p.endereco.pais, 10);

    printf("Telefone (DDD Numero): ");
    scanf("%d %d", &p.telefone.DDD, &p.telefone.numero);

    printf("Data de Nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &p.aniversario.dia, &p.aniversario.mes, &p.aniversario.ano);

    printf("Adicionar observacao? (1-Sim / 2-Nao): ");
    scanf("%d", &obs); limpaBuffer();
    
    if (obs == 1) {
        printf("Obs: "); lerString(p.observacao, 50);
    } else {
        strcpy(p.observacao, "Nenhuma");
    }

    // Lógica de inserção ordenada
    int pos = 0;
    while (pos < *total && strcmp(p.nome, agenda[pos].nome) > 0) pos++;
    for (int i = *total; i > pos; i--) agenda[i] = agenda[i - 1];
    
    agenda[pos] = p;
    (*total)++;
}

int main() {
    pessoa agenda[100];
    int total = 0, qtd, bMes, bDia;
    char buscaNome[20];

    printf("Quantos cadastros deseja fazer? ");
    scanf("%d", &qtd); limpaBuffer();

    for (int i = 0; i < qtd; i++) {
        inserePessoa(agenda, &total);
    }

    // BUSCA POR NOME
    printf("\nPesquisar por Nome: ");
    lerString(buscaNome, 20);
    for (int i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, buscaNome) == 0) {
            printf("\n> %s | %s | Tel: (%d)%d\n", agenda[i].nome, agenda[i].email, agenda[i].telefone.DDD, agenda[i].telefone.numero);
            printf("> Endereço: %s, %d - %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.bairro, agenda[i].endereco.cidade);
        }
    }

    // BUSCA POR MÊS
    printf("\nPesquisar por Mes: ");
    scanf("%d", &bMes);
    for (int i = 0; i < total; i++) {
        if (agenda[i].aniversario.mes == bMes) {
            printf("> %s (Aniversario: %02d/%02d/%d)\n", agenda[i].nome, agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
        }
    }

    // BUSCA POR DIA E MÊS
    printf("\nPesquisar por Dia e Mes (DD MM): ");
    scanf("%d %d", &bDia, &bMes);
    for (int i = 0; i < total; i++) {
        if (agenda[i].aniversario.mes == bMes && agenda[i].aniversario.dia == bDia) {
            printf("> %s (Aniversario: %02d/%02d/%d)\n", agenda[i].nome, agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
        }
    }

    return 0;
}