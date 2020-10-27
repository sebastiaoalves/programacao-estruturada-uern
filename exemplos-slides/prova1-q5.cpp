#include <iostream>

using namespace std;

enum DiaDaSemana{DOMINGO=1, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO};

struct HorarioExibicao{
    DiaDaSemana diaDaSemana;
    int horario[2];
};

void exibeDiaDaSemana(DiaDaSemana dia){
	switch(dia){
		case DOMINGO:
			cout << "Domingo" << endl;
			break;
		case SEGUNDA:
			cout << "Segunda-Feira" << endl;
			break;
		case TERCA:
			cout << "Terça-Feira" << endl;
			break;
		case QUARTA:
			cout << "Quarta-Feira" << endl;
			break;
		case QUINTA:
			cout << "Quinta-Feira" << endl;
			break;
		case SEXTA:
			cout << "Sexta-Feira" << endl;
			break;
		case SABADO:
			cout << "Sábado" << endl;
			break;
		default:
			cout << "Dia da semana não informado corretamente" << endl;
	}
}

// A função exibe dia da semana tem que ser declarada antes
void exibeHorario(HorarioExibicao *h){
    cout << "Dia da semana: ";
    exibeDiaDaSemana(h->diaDaSemana);
    cout << "Horário: " << h->horario[0] << ":" << h->horario[1] << endl;
}

void leHorario(HorarioExibicao *h){
	int dia;
	do{
		cout << "Digite o dia da semana: \n1-Domingo\n2-Segunda-feira";
		cout << "\n3-Terça-feira\n4-Quarta-feira\n5-Quinta-feira";
		cout << "\n	6-Sexta-feira\n7-Sábado\n";
		cin >> dia;
		if(dia<1 || dia>7)
			cout << "Dia da semana inválido, tente novamente." << endl;
	}while(dia<1 || dia>7);
	if(dia==1)
		h->diaDaSemana=DOMINGO;
	else if(dia==2)
		h->diaDaSemana=SEGUNDA;
	else if(dia==3)
		h->diaDaSemana=TERCA;
	else if(dia==4)
		h->diaDaSemana=QUARTA;
	else if(dia==5)
		h->diaDaSemana=QUINTA;
	else if(dia==6)
		h->diaDaSemana=SEXTA;
	else
		h->diaDaSemana=SABADO;
    cout << "Digite a hora e minuto separado por espaço: ";
    cin >> h->horario[0] >> h->horario[1];
}

int main(){

	const int NUM_HORARIOS=5;
    HorarioExibicao *horarios = new HorarioExibicao[NUM_HORARIOS];
	for(int i=0;i<NUM_HORARIOS;i++)
		leHorario(horarios+i);
	for(int i=0;i<NUM_HORARIOS;i++)
		if(horarios[i].diaDaSemana==DOMINGO)
			exibeHorario(horarios+i);
    return 0;
}
