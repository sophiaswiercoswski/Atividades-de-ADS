<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funções em PHP</title>
</head>
<body>
    <?php
    echo "<h3>Função simples Sem Parâmetro</h3>";
    function exibirSaudacao() {
        echo "<p>Olá! Bem-vindo(a) à disciplina de Programação Web.</p>";
    }
    exibirSaudacao();
    
    echo "<hr>";

    echo "<h3>Função Com Parâmetro</h3>";
    function exibirSaudacaoNome($nome) {
        echo "<p>Olá, $nome! Seja bem-vindo(a) à disciplina de Programação Web.<p>";
    }

    // Chamando a função com diferentes valores
    exibirSaudacaoNome("Salomão");
    exibirSaudacaoNome("Raissa");

    echo "<hr>";

    echo "<h3>Função Com Retorno de Valores</h3>";
    function efetuarSoma($a, $b) {
        return ($a + $b);
    }

    // Armazena o retorno da função em uma variável
    $resultado = efetuarSoma(5, 10);
    echo "<p>A soma dos valores é: $resultado.</p>";
    ?>
</body>
</html>