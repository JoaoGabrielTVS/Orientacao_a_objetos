#include<iostream>
#include<string>

class Contabanco{
    public:
    Contabanco(double saldoinicial){
        setsaldo(saldoinicial);


    }
    void creditar(double valor){
        setsaldo((getsaldo() + valor));
    }
    void debitar(double valor){
        if(getsaldo() >= valor)
             setsaldo(getsaldo() - valor);
        else
            std::cout<< "deu erro";
        
    }
    
  
    float getsaldo()const{
        return Saldo_Da_Conta;
    }   
    
    
    private:
      void setsaldo(double saldo){
        if(saldo > 0)
            Saldo_Da_Conta = saldo;

        else
            Saldo_Da_Conta = 0;
    }
    double Saldo_Da_Conta;

};


using std::string, std::cout , std::endl;







int main(){
Contabanco conta1 = Contabanco(1000);
Contabanco conta2 = Contabanco(3000);
cout<<conta1.getsaldo()<<endl;
cout<<conta2.getsaldo()<<endl;
conta1.creditar(100);
cout<<conta1.getsaldo()<<endl;
cout<<conta2.getsaldo()<<endl;

conta1.debitar(140);
cout<<conta1.getsaldo()<<endl;
cout<<conta2.getsaldo()<<endl;




}