#include <iostream>
#include <string>
#include <format>

using std::cout, std::endl, std::string;

//definindo uma classe Carro
class Carro{

    
    

public:
    Carro(string marca, int ano){
        setMarca(marca);
        setano(ano);

    };
	

    
    
    //métodos, funções-membro, serviços
	
	//método get - retorna dado privado
	string getMarca() const {
		return m_marca;
	}
	
	//método set - configura dado privado
	void setMarca(string marca){
		m_marca = marca;
	}
    void setano(int Ano_Carro){
        ano_carro = Ano_Carro;
    }
    int getano()const{
        return ano_carro;
    }
    string tostring()const{
        
        return format("A marca do seu carro é: {} o ano é {}",getMarca(), getano());



    };

//especificador de acesso privado
private:
	//membros de dados, atributos
	string m_marca;
    int ano_carro;

};


int main() {
    Carro ferrari = Carro("ferrari", 1998);
    cout<<ferrari.tostring();
	
	
}
