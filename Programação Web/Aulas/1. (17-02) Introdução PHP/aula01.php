<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aprendendo PHP</title>
</head>
<body>
    <h1>Aula de Programação Web</h1>

    <?php
        // Início do Bloco PHP
        $anoAtual = 2025;
        $anoNascimento = 2005;
        $altura = 1.75;
        $nomeUsuario = "João";
    
        // O comando echo é o OUTPUT da linguagem PHP
        echo "<h3 style='color: red'>" . $anoAtual . "</h3>";
    
        echo "<p>O usuário $nomeUsuario nasceu em $anoNascimento. Portanto, ele possui " . ($anoAtual - $anoNascimento) . " anos de idade.</p>";

        $idade = $anoAtual - $anoNascimento;

        // Exemplode if/else
        if($idade < 18) {
            echo "</p>João é de menor.</p>";
        }
        else {
            echo "</p>João é de maior.</p>";
        }

        // Exemplo de switch/case
        $corFavorita = "Preto";

        switch($corFavorita) {
            case "Vermelho" : echo "<p style='color: red'>Sua cor favorita é vermelho</p>";
            break;
            case "Azul" : echo "<p style='color: blue'>Sua cor favorita é azul.</p>";
            break;
            case "Verde" : echo "<p style='color: green'>Sua cor favorita é verde.</p>";
            break;
            default : echo "<p>Sua cor favorita não é vermelho, nem azul e nem verde.</p>";
        }

        // Estruturas de repetição
        // Estrutura de while (Pré-Teste)
        $i = 1;   
        while($i < 5) {
            echo "<p>O contador vale $i.</p>";
            $i++;
        }

        // Estrutura de do-while (Pós-Teste)
        do {
            echo "<p>O contador vale $i.</p>";
            $i++;
        } while($i < 5);

        // Exemplo de repetição com variável de controle
        echo "<p>Exemplo de repetição com comando for:<p>";
        for($i = 1; $i < 5; $i++) {
            echo "<p>O contador vale $i.</p>";
        }

        echo "<h1>Criando tabelas HTML com PHP</h1>";
        echo "<table border='1'>";
            for($linha = 1; $linha <= 3; $linha++) {
                echo "<tr>";
                for($coluna = 1; $coluna <= 3; $coluna++) {
                    echo "<td>";
                    echo "Linha $linha, Coluna $coluna";
                    echo "</td>";
                }
                echo "</tr>";
            }
        echo "</table>";
    ?>
</body>
</html>