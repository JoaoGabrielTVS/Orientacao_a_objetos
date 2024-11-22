#include <iostream>
#include <string>
using std::string;

class cupom {
public:
    cupom(string I_id, string I_descricao, int I_quant, float I_preco) {
        set_id(I_id);
        set_descricao(I_descricao);
        set_quant(I_quant);

        set_preco(I_preco);
    }

    void set_id(string I_id) {
        id = I_id;
    }
    string get_id() const {
        return id;
    }
    void set_descricao(string I_descricao) {
        descricao = I_descricao;
    }
    string get_descricao() const {
        return descricao;
    }
    void set_quant(int I_quant) {
        quant = I_quant;
    }
    int get_quant() const {
        return quant;
    }
    void set_preco(float I_preco) {
        preco = I_preco;
    }
    float get_preco() const {
        return preco;
    }
    int calculacupom() {
        if (get_quant() < 0)
            set_quant(0);
        if (get_preco() < 0)
            set_preco(0);
        return get_preco() * get_quant();
    }

private:
    string id;
    string descricao;
    int quant;
    float preco;
};

int main() {
    cupom cumpom1("xxxxx", "wdokcm dkoc rw", 10, 7.8);
    std::cout << cumpom1.calculacupom() << std::endl;

    return 0;
}
