#include<iostream>
#include<string>
#include<format>
using std::string, std::cout;
class Empregado{
    public:
        Empregado(string nome, string sobrenome, float salario){
            setnome(nome);
            setsobrenome(sobrenome);
            setsalario(salario);      





        };

        void setnome(string nome){
            Nome = nome;
        }
        void setsobrenome(string sobrenome){
            Sobrenome = sobrenome;
        }
        void setsalario(float salario){
            if(salario<0)
                Salario =0;
            else
                Salario = salario;     
        }
        void setaumento(){
            setsalario(getsalario()+(getsalario()*0.01));
        }
        string getnome()const{
            return Nome;
        }
        string getsobrenome()const{
            return Sobrenome;
        }
        float getsalario()const{
            return Salario;
        }



    private:
        string Nome;
        string Sobrenome;
        float Salario;

};





int main(){

Empregado empregado1 = Empregado("ana","cecilia",11.0);
Empregado empregado2 = Empregado("joao", "gabriel", 10.0);

std::cout<<empregado1.getsalario()<<std::endl;
std::cout<<empregado2.getsalario();
empregado1.setaumento();
empregado2.setaumento();



}











