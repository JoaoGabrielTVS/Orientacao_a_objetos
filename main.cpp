#include <iostream>
#include <string>
#include <format>
using std::endl, std::cout, std::string;

class Cupom {
public:
    struct Produto {
        string Id;
        string Descricao;
        int Quant;
        float Preco;
    };

    void addItem(string id, string descricao, int quant, float preco) {
        item[pos].Id = id;
        item[pos].Descricao = descricao;
        item[pos].Preco = preco;
        item[pos].Quant = quant;
        pos++;
        
    }
        
    

    Produto get(string id) {
        for (int i = 0; i < pos; i++) {
            if (item[i].Id == id) {
                return item[i];
            }
        }
        throw std::runtime_error("Produto não encontrado!");
    }

    float valorTotal() {
        float total = 0.0;
        for (int i = 0; i < pos; i++) {
            total += (item[i].Preco * item[i].Quant);
        }
        return total;
    }

    void imprimirCupom() {
        for (int i = 0; i < pos; i++) {
            cout << std::format("Identificador: {}\n", item[i].Id);
            cout << std::format("Descrição: {}\n", item[i].Descricao);
            cout << std::format("Preço: {:.2f}\n", item[i].Preco);
            cout << std::format("Quantidade: {}\n", item[i].Quant);
            cout << "-----------------------" << endl;
        }
        cout << std::format("Valor Total Do Produto {}\n",valorTotal());

    }

private:
    struct Produto item1;
    struct Produto item2;
    struct Produto item3;
    struct Produto item4;
     struct Produto item5;
    struct Produto item6;
    struct Produto item7;
    struct Produto item8;
     struct Produto item9;
    struct Produto item10;
    struct Produto item11;
    struct Produto item12;
    struct Produto item13;
     struct Produto item14;
    struct Produto item15;
    struct Produto item16;
    struct Produto item17;
     struct Produto item18;
    struct Produto item19;
     struct Produto item20;
    

    
    Produto item[20]{item1, item2, item3,item4,item5,item6,item7,item8,item9,item10,item11, item12, item13,item14,item15,item16,item17,item18,item19,item20 };
    int pos = 0;
};

int main() {
    Cupom cupom;

    
    cupom.addItem("001", "arroz", 2, 10.50);
    cupom.addItem("002", "feijão", 1, 20.00);
    cupom.addItem("003", "carne", 5, 3.75);

    cupom.imprimirCupom();


    return 0;
}
