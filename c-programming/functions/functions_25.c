#include <stdio.h>
#include <string.h>

// 1. Definição da Struct
typedef struct {
    char nome[50];
    int nivel;
    int vida;
    int forca;
} Personagem;

// 2. Função para inicializar os dados usando ponteiro
// Usamos -> porque 'p' é um ponteiro para a struct
void inicializar(Personagem *p, char n[], int niv, int v, int f) {
    strcpy(p->nome, n);
    p->nivel = niv;
    p->vida = v;
    p->forca = f;
}

// 3. Função para simular dano (altera o valor original)
void receberDano(Personagem *p, int dano) {
    printf("\n---> %s recebeu %d de dano!\n", p->nome, dano);
    p->vida -= dano;
    
    // Evita que a vida fique negativa
    if (p->vida < 0) {
        p->vida = 0;
    }
}

// 4. Função para simular cura (altera o valor original)
void curar(Personagem *p, int cura) {
    printf("\n---> %s bebeu uma pocao e curou %d de vida!\n", p->nome, cura);
    p->vida += cura;
}

// 5. Função para exibir (Passagem por VALOR, não precisa de ponteiro pois não altera dados)
// Como é passagem por valor, usamos o ponto (.)
void exibirStatus(Personagem p) {
    printf("\n[ STATUS DE %s ]\n", p.nome);
    printf("Nivel: %d | Vida: %d | Forca: %d\n", p.nivel, p.vida, p.forca);
    printf("------------------------\n");
}

int main() {
    // Declara a variável do tipo Personagem
    Personagem heroi;

    // Inicializa passando o ENDEREÇO de memória (&)
    inicializar(&heroi, "Arthur", 5, 100, 25);
    exibirStatus(heroi);

    // Simulações
    receberDano(&heroi, 30);
    exibirStatus(heroi);

    receberDano(&heroi, 80); // Dano fatal
    exibirStatus(heroi);

    curar(&heroi, 50);
    exibirStatus(heroi);

    return 0;
}