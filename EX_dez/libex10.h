//a – Nome, e-mail, telefone
typedef struct str_contato{
    char nome[25];
    char email[30];
    char telefone[12];
}CONTATO;

//a – Inserir um novo contato
CONTATO novo();
//b – Encontrar um nome na lista de contatos
CONTATO busca(int n, CONTATO c[]);
//c – Remover um contato da lista
CONTATO remocao(int n, CONTATO c[]);
