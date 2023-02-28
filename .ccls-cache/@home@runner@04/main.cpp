#include <iostream>

using namespace std;

class Estado {
private:
  string estado;
  double valor;
  

public:

  Estado (string estado, double valor) {
    this->estado = estado;
    this->valor = valor;
    
  }

  void setEstado (string estado) {
    this->estado = estado;
  }
  string getEstado () {
    return estado;
  }

  void setValor (double valor) {
    this->valor = valor;
  }
  double getValor () {
    return valor;
  }

  void toString () {
    cout << "Estado:" << estado << endl 
         << "Porcentagem: " << (valor/(67836.43+36678.66+29229.88+27165.48+19849.53))*100 << "%" << endl << "__________________________" << endl;       
  }
};

int main() {
  Estado Um("SP",67836.43);
  Um.toString();
  
  Estado Dois("RJ",36678.66);
  Dois.toString();
  
  Estado Tres("MG",29229.88);
  Tres.toString();
  
  Estado Quatro("ES",27165.48);
  Quatro.toString();
  
  Estado Cinco("Outros",19849.53);
  Cinco.toString();

}