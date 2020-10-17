#include <iostream>

using namespace std;

enum DiaDaSemana{DOMINGO=1, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO};

struct HorarioExibicao{
    DiaDaSemana diaDaSemana;
    int horario[2];
};

void exibeHorario(HorarioExibicao *h){
    cout << "Dia da semana: " << h->diaDaSemana << endl;
    cout << "Horário: " << h->horario[0] << ":" << h->horario[1] << endl;
}

void leHorario(HorarioExibicao *h){
    cout << "Digite o dia da semana: ";
    //cin >> h->diaDaSemana;
    h->diaDaSemana = SABADO;
    cout << "Digite a hora e minuto separado por espaço: ";
    cin >> h->horario[0] >> h->horario[1];
}

int main(){

    HorarioExibicao *ptr_manha1 = new HorarioExibicao;

    leHorario(ptr_manha1);

    if(ptr_manha1 -> diaDaSemana != SEXTA)
        cout << "Não é sexta-feira" << endl;
    
    exibeHorario(ptr_manha1);  //exibeHorario(&manha1);

    delete ptr_manha1;
  
    return 0;
}