#include<iostream>
#include<string>
#include<format>
class Data{
    public:
        Data(int dia ,int mes, int ano){
            setdia(dia);   
            setmes(mes);
            setano(ano);


        }
        void setdia(int dia){
            Dia = dia;
        }
        void setmes(int mes){
            if(mes >= 1 && mes <= 12)
                Mes = mes;
            else 
                Mes = 1;
        }
        void setano(int ano){
            Ano = ano;
        }
        int getdia(){
            return Dia;
        }
        int getmes(){
            return Mes;
        }
        int getano(){
            return Ano;

        }
        std::string tostring(){
            return std::format("{}/{}/{}",getdia(),getmes(),getano());
        }

    
    private:
        
        int Dia;
        int Mes;
        int Ano;

};


using std::string, std::cout , std::endl;







int main(){
Data data = Data(11,44,31);
cout<<data.tostring();




}