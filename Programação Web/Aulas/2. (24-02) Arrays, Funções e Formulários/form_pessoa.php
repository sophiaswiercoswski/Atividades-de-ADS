<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulário para Cadastro de Pessoa</title>
</head>
<body>
    <h3>Formulário para Cadastro de Pessoa</h3>
    
    <form action="action_pessoa.php" name="formPessoa" method="post">
        <label for="nomePessoa">Nome:</label>
        <input type="text" name="nomePessoa"><br><br>

        <label for="emailPessoa">Email:</label>
        <input type="email" name="emailPessoa"><br><br>

        <label for="cidadePessoa">Cidade:</label>
        <select name="cidadePessoa">
            <option value="">Selecione uma Cidade</option>
            <option value="telemaco">Telêmaco Borba</option>
            <option value="imbau">Imbaú</option>        
            <option value="curiuva">Curiúva</option>
            <option value="ortigueira">Ortigueira</option>
        </select>
        <br><br>

        <input type="submit" name="btCadastrar" value="Cadastrar">
    </form>
</body>
</html>