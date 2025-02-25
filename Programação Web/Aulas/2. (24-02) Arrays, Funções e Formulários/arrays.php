<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arrays em PHP</title>
</head>
<body>
    <?php
        // Array indexado (já vem com os índices 0, 1, 2...)
        echo "<h3>Exemplo de Array Indexado:</h3>";
        $frutas = ["Maçã", "Banana", "Laranja"];

        echo "<p>Fruta " . $frutas[0] . "</p>";
        echo "<p>Fruta " . $frutas[1] . "</p>";
        echo "<p>Fruta " . $frutas[2] . "</p>";

        echo "<hr>";

        // Array dissociativo (é possível atribuir nomes nos índices)
        echo "<h3>Exemplo de Array Dissociativo:</h3>";
        $pessoa  = ["nome" => "Sophia",
                    "cidade" => "Telêmaco Borba",
                    "profissao" => "Estagiária TI"];

        echo "<p>Nome: " . $pessoa["nome"] . "</p>";
        echo "<p>Cidade: " . $pessoa["cidade"] . "</p>";

        echo "<hr>";

        // Array Multidimensional (array dentro de outro array)
        echo "<h3>Exemplo de Array Multidimensional:</h3>";
        $alunos = [["nome" => "João", "idade" => "20", "curso" => "Tecnologia em Análise e Desenvolvimento de Sistemas"],
                    ["nome" => "Ana", "idade" => "22", "curso" => "Engenharia"],
                    ["nome" => "Pedro", "idade" => "31", "curso" => "Física"]];

        echo "<p>" . $alunos[1]["curso"] . "</p>";
        echo "<p>" . $alunos[0]["nome"] . "</p>";

        echo "<hr>";

        // Exibir diversos elementos de array ao mesmo tempo
        echo "<h3>Exibindo o array frutas com print_r:</h3>";
        print_r($frutas);

        echo "<h3>Exibindo o array frutas com var_dump:</h3>";
        var_dump($frutas);
    
        echo "</h3>Exibindo o array frutas com foreach:</h3>";
        foreach($frutas as $fruta) {
            echo "<p>$fruta</p>";
        }

        echo "<h3>Exibindo o array pessoa com implode:</h3>";
        echo implode(", ", $pessoa);
    ?>
</body>
</html>