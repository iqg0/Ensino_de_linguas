#include <stdio.h>

    typedef struct {
        char nome[50];
        int id;
    }Aluno;

    typedef struct {
        int idAluno;
        float nota;
        int idTurma;
    }Matricula;

    typedef struct {
        Matricula alunos[30];
        int serie;
        char professorNome[50]; 
        char horarios[10];
        char dias[20];
        int maxLugares;
        int idCurso;
        int totalAlunos;
    }Turma;


int main() {




    return 0;
}