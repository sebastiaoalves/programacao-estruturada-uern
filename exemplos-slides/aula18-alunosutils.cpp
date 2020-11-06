#include <aula18-alunos.cpp>
#include <cmath>

bool ordenaAluno(Aluno a, Aluno b){
    return (a.media>b.media) || 
            (a.media==b.media && a.faltas<b.faltas) || 
            (a.media==b.media && a.faltas==b.faltas && a.nome<b.nome);
}

void calcMediaDesvio(Aluno sala[], size_t numAlunos, double &media, double &desvioPadrao){
    media=0.0;
    for(size_t i=0;i<numAlunos;i++)
        media += sala[i].media;
    media /= numAlunos;

    double desvios=0.0;
    for(size_t i=0;i<numAlunos;i++)
        desvios += pow(sala[i].media-media,2);
    desvioPadrao = sqrt(desvios/numAlunos);

}

// Atribui o status do aluno e deixa alguns parâmetros com valor default
Status verificaStatus(const Aluno &aluno, double notaMin=7.0, double notaQuartaMin=4.0, int faltasMax=15){
    Status statusAluno;
    if(aluno.faltas>faltasMax)
        statusAluno = REPROVADO_FALTA;
    else if(aluno.media>notaMin)
        statusAluno = APROVADO;
    else if(aluno.media>notaQuartaMin)
        statusAluno = QUARTA_PROVA;
    else
        statusAluno = REPROVADO_MEDIA;
    return statusAluno;
}

void mostraStatus(Status status){
    switch (status){
        case REPROVADO_MEDIA:
            cout << "Aluno reprovado por média" << endl;
            break;
        case REPROVADO_FALTA:
            cout << "Aluno reprovado por falta" << endl;
            break;
        case QUARTA_PROVA:
            cout << "Aluno está em quarta prova" << endl;
            break;
        case APROVADO:
            cout << "Aluno está aprovado. Parabéns!" << endl;
            break;
        default:
            break;
    }
}