programa {
  funcao inicio() {
    cadeia caracter aluno
    real nota1, nota2, nota3, nota4, media

    escreva("Nome do aluno: ")
    leia(aluno)

    escreva("Nota 1: ")
    leia(nota1)

    escreva("Nota 2: ")
    leia(nota2)

    escreva("Nota 3: ")
    leia(nota3)

    escreva("Nota 4: ")
    leia(nota4)

    media = nota1 + nota2 + nota3 + nota4 / 4

    escreva("O estudante " + aluno + " obteve media final de " + media)
  }
}

