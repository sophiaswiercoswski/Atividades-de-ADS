<?php
// Verificar se o método de requisição é o POST
if($_SERVER["REQUEST_METHOD"] == "POST") {
    // Cria variáveis para receber os dados do formulário
    $nomePessoa = $emailPessoa = $cidadePessoa = ""; // Inicializa as variáveis como vazias
    $erroPreenchimento = false;

    if(empty($_POST["nomePessoa"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<p style='color: red; padding: 20px; background-color: yellow;'>
                O campo NOME é obrigatório!</p>";
        $erroPreenchimento = true;
    }
    else {
        $nomePessoa = $_POST["nomePessoa"];
    }

    if(empty($_POST["emailPessoa"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<p style='color: red; padding: 20px; background-color: yellow;'>
                O campo EMAIL é obrigatório!</p>";
        $erroPreenchimento = true;
    }
    else {
        $emailPessoa = $_POST["emailPessoa"];
    }

    if(empty($_POST["cidadePessoa"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<p style='color: red; padding: 20px; background-color: yellow;'>
                O campo CIDADE é obrigatório!</p>";
        $erroPreenchimento = true;
    }
    else {
        $cidadePessoa = $_POST["cidadePessoa"];
    }
    if(!$erroPreenchimento) {
        echo "<h3>Os dados foram cadastrados com sucesso!</h3>
                <table border='1'>
                <tr>
                    <th>Nome:</th>
                    <td>$nomePessoa</td>
                </tr>
                <tr>
                    <th>Email:</th>
                    <td>$emailPessoa</td>
                </tr>
                <tr>
                    <th>Cidade:</th>
                    <td>$cidadePessoa</td>
                </tr>
                </table>";
    }
}
else {
    header["Location: form_pessoa.php"];
}
?>