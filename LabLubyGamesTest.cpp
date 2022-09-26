#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

class Itens {
protected:
    int NumeroId;
    string Nome;
    string Tipo;
    float Custo;
    int QuantidadeNoEstoque = 3;
public:
    Itens(int numeroId, string nome, string tipo, float custo) {
        NumeroId = numeroId;
        Nome = nome;
        Tipo = tipo;
        Custo = custo;
    }

    void descricaoDoItem(Itens item) {
        cout << "Item Id: " << item.NumeroId << endl;
        cout << "Nome: " << item.Nome << endl;
        cout << "Tipo: " << item.Tipo << endl;
        cout << "Custo: " << item.Custo << endl;
    };

    void cadastrarItem() {

        cout << "Escreva o nome deste item: ";
        cin >> Nome;
        cout << "Escreva o tipo deste item: ";
        cin >> Tipo;
        cout << "Escreva qual será o custo deste item: ";
        cin >> Custo;

        QuantidadeNoEstoque++;

    }

    void adicionarItem(Itens item) {

    }

    void removerItem(Itens item) {

    }

    void listaDeItensEmEstoque() {

    }

};

class Armamentos : public Itens {
private:
    int Dano;
public:
    Armamentos(int numeroId, string nome, string tipo, float custo, int dano) : Itens(numeroId, nome, tipo, custo) {
        Dano = dano;
    }

    friend class GerenciadorDeEstoque;
};

class Armaduras : public Itens {
private:
    int Durabilidade;
public:
    Armaduras(int numeroId, string nome, string tipo, float custo, int durabilidade) : Itens(numeroId, nome, tipo, custo) {
        Durabilidade = durabilidade;
    }

    friend class GerenciadorDeEstoque;
};

class Consumiveis : public Itens {
private:
    string Usos;
public:
    Consumiveis(int numeroId, string nome, string tipo, float custo, string usos) : Itens(numeroId, nome, tipo, custo) {
        Usos = usos;
    }

    friend class GerenciadorDeEstoque;
};




int main() {

    Armamentos weapon1(001, "Espada de Madeira", "Corpo-a-Corpo", 10, 5);
    Armaduras armor1(011, "Peitoral de Couro", "Peitoral", 15, 100);
    Consumiveis consumable1(021, "Galinha Assada", "Alimento", 8, "Restaura 10 de vida ao usuário");
   



    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;
    int answer4 = 0;

    /*cout << "======================================LOJA DOS AVENTUREIROS======================================" << endl;
    cout << endl;

    cout << "Eduardo, o Vendedor: Aloha, viajantes! Bem vindos a minha loja!" << endl;
    cout << "Eduardo, o Vendedor: Que tal dar uma olhadinha no meus produtos, hein?" << endl;
    do {

        cout << endl;
        cout << "   - Escolha uma das opcoes abaixo:" << endl;
        cout << "" << endl;
        cout << "           (1) Comprar        (2) Vender        (3) Sair" << endl;
        cout << endl;
        cout << "    Resposta:";
        cin >> answer1;
        cout << endl;
        cout << endl;

    
        switch (answer1) {
        case 1:
            cout << "    - Escolha uma das opcoes abaixo para comprar:" << endl;
            cout << endl;
            cout << "           (1) Armamentos        (2) Armaduras       (3) Consumíveis" << endl;
            cout << endl;
            cout << "    Resposta:";
            cin >> answer2;

            if (answer2 == 1) {
                //Aqui deve aparecer ter uma função para exibir todos os objetos da classe Armamentos que existem na loja.
            }
            else if (answer2 == 2) {
                //Aqui deve aparecer ter uma função para exibir todos os objetos da classe Armaduras que existem na loja.
            }
            else if (answer3 == 3) {
                //Aqui deve aparecer ter uma função para exibir todos os objetos da classe Consumiveis que existem na loja.
            }

            cout << endl;
            cout << endl;
            cout << "    - Continuar?" << endl;
            cout << endl;
            cout << "           (1) Com certeza!     (2) Nop!" << endl;
            cout << endl;
            cout << "    Resposta:";
            cin >> answer4;
            cout << endl;
            cout << endl;

            break;


        case 2:
            cout << "    - Escolha uma das opcoes abaixo para vender:" << endl;
            cout << endl;
            cout << "           (1) Armamentos        (2) Armaduras       (3) Consumíveis" << endl;
            cout << endl;
            cout << "    Resposta:";
            cin >> answer3;
            cout << endl;
            cout << endl;


            if (answer3 == 1) {
                //Aqui deve aparecer ter uma função para exibir todos os objetos da classe Armamentos que existem na loja.
            } 
            else if (answer3 == 2) {
                //Aqui deve aparecer ter uma função para exibir todos os objetos da classe Armaduras que existem na loja.
            } 
            else if (answer3 == 3) {
                //Aqui deve aparecer ter uma função para exibir todos os objetos da classe Consumiveis que existem na loja.
            }

            cout << endl;
            cout << endl;
            cout << "    - Continuar?" << endl;
            cout << endl;
            cout << "           (1) Com certeza!     (2) Nop!" << endl;
            cout << endl;
            cout << "    Resposta:";
            cin >> answer4;
            cout << endl;
            cout << endl;

            
            break;

        case 3:
            cout << "Eduardo, o Vendedor: Volte sempre, meu jovem!" << endl;

            break;

        default:
            cout << "Eduardo, o Vendedor: Desculpe, eu nao entendi...";
            cout << endl;
            cout << endl;
            cout << "    - Continuar?" << endl;
            cout << endl;
            cout << "           (1) Com certeza!     (2) Nop!" << endl;
            cout << endl;
            cout << "    Resposta:";
            cin >> answer4;
            cout << endl;
            cout << endl;
        }
    } while (answer1 != 3 && answer4 == 1);
    */
    



    return 0;
}