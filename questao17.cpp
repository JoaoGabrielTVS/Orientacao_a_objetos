#include<iostream>
#include<string>
#include<format>
using std::string, std::cout;
class Bruxo{
    public:
        Bruxo(string nome, string casa, string feitico){
            setnome(nome);
            setcasa(casa);
            setfeitico(feitico);      





        };

        void setnome(string nome){
            Nome = nome;
        }
        void setcasa(string casa){
            if(casa == "sonserina" || casa == "Grifinória" || casa == "Corvinal"|| casa=="lufa-lufa" )
                Casa = casa;
            else
                Casa = " ";
        }
        void setfeitico(string feitico){
            Feitico = feitico;
        }
        string getlancarfeitico(){
            return getfeitico();
        }
        string getnome()const{
            return Nome;
        }
        string getcasa()const{
            return Casa;
        }
        string getfeitico()const{
            return Feitico;
        }
        string display()const{
            return format("nome: {} , Casa: {} , Feitico:{}", getnome(), getcasa(), getfeitico());
        };


    private:
        string Nome;
        string Casa;
        string Feitico;

};





int main(){

Bruxo bruxo1 = Bruxo("joao", "lufa-lufa", "avadra");
Bruxo bruxo2 = Bruxo("joao", "g", "lupra");

std::cout<<bruxo1.display()<<std::endl;
std::cout<<bruxo2.display()<<std::endl;






}











