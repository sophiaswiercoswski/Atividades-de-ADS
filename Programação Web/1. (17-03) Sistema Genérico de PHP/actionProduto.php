<?php include ("header.php") ?>
<?php

// Verifica o método de requisição do servidor
if($_SERVER["REQUEST_METHOD"] == "POST") {
    // Bloco para a declaração de variáveis
    $fotoProduto = $nomeProduto = $descricaoProduto = $valorProduto = "";
    $erroPreenchimento = false;

    // Validação do campo nomeProduto
    if(empty($_POST["nomeProduto"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>NOME</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $nomeProduto = testar_entrada($_POST["nomeProduto"]);
    }

    // Validação do campo descricaoProduto
    if(empty($_POST["descricaoProduto"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>DESCRIÇÃO</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $descricaoProduto = testar_entrada($_POST["descricaoProduto"]);
        
        // Usa a função preg_match para verificar o padrão de caracteres
        if(!preg_match('/^[\p{L} ]+$/u', $descricaoProduto)) {
            echo "<div class='alert alert-warning text-center'>O <strong>NOME</strong> deve conter apenas letras!";
            $erroPreenchimento = true;
        }
    }

    // Validação do campo valorProduto
    if(empty($_POST["valorProduto"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>VALOR DO PRODUTO</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $valorProduto = testar_entrada($_POST["valorProduto"]);
        
        // Usa a função strlen para verificar o comprimento da string
        // Usa a função
        if(preg_match('/^[\p{L} ]+$/u', $valorProduto)) {
            echo "<div class='alert alert-warning text-center'>O <strong>VALOR DO PRODUTO</strong> deve conter apenas números!";
            $erroPreenchimento = true;
        }
        else {
            $floatValorProduto = floatval($valorProduto); // Função que transforma o string do valor em float
            $valorProduto = $floatValorProduto; // Armazena o valor convertido em float na variável do valor do produto
        }
    }

    // Início da validação do campo FOTO
    $diretorio = "img/"; // Define para qual diretório do sistema as imagens serão movidas
    $fotoProduto  = $diretorio . basename($_FILES["fotoProduto"]["name"]); // A função "basename()" adquire o nome base do arquivo e o junta com o valor da variável diretorio
    $erroUpload = false; // Variável para verificar erros no upload
    $tipoDaImagem = strtolower(pathinfo($fotoProduto, PATHINFO_EXTENSION)); // Função "strtolower()" converte a string em caracteres minúsculos e a "pathinfo" descobre o formato do arquivo feito upload. Converte para minúsculo e adquirir a extensão do arquivo

    // Verificar se o tamanho do arquivo é maior que 0
    if($_FILES["fotoProduto"]["size"] != 0) {

        // Verificar o tamanho  do arquivo é maior do que 5MB (em bytes)
        if($_FILES["fotoProduto"]["size"] > 5000000) {
            echo "<div class='alert alert-warning text-center'>A <strong>FOTO</strong> não deve possuir mais que 5MB!</div>";
            $erroUpload = true;      
        }

        // Verificar o tipo de arquivo (pela extensão)
        if($tipoDaImagem != "jpg" && $tipoDaImagem != "jpeg" && $tipoDaImagem != "png" && $tipoDaImagem != "webp") {
            echo "<div class='alert alert-warning text-center'>A <strong>FOTO</strong> deve ser em formato .JPG, .JPEG, .PNG ou .WEBP!</div>";
            $erroUpload = true;      
        }

        // Verifica se houve algum erro no upload
        if($erroUpload) {
            echo "<div class='alert alert-warning text-center'>Erro ao tentar fazer upload da <strong>FOTO</strong>!</div>";
            $erroUpload = true;      
        }
        else {
            // Usa a função move_uploaded_file para mover o arquivo para o diretório img
            if(!move_uploaded_file($_FILES["fotoProduto"]["tmp_name"], $fotoProduto)) {
                echo "<div class='alert alert-warning text-center'>Erro ao tentar mover a <strong>FOTO</strong> para o diretório $diretorio!</div>";
                $erroUpload = true;      
            }
        }
    }

    // Se não houver erro de preenchimento ou erro de upload
    if(!$erroPreenchimento && !$erroUpload) {
        // Criar uma QUERY responsável por realizar a inserção dos dados no BD
        $inserirProduto = "INSERT INTO Produtos (fotoProduto, nomeProduto, descricaoProduto, valorProduto, statusProduto)
                            VALUES ('$fotoProduto', '$nomeProduto', '$descricaoProduto', '$valorProduto', 'disponivel')";

        // Inclui o arquivo de conexão com o BD
        include "conexaoBD.php";

        // Se a query for executa com sucesso, exibe mensagem e tabela
        if(mysqli_query($conn, $inserirProduto)) {
            echo "<div class='alert alert-success text-center'>Produto cadastrado com sucesso!!</div>";
            echo "<div class='container mrt-3'>
                    <div class='mt-3 text-center'>
                        <img src ='$fotoProduto' style= 'width:130px' title='Foto do $nomeProduto'>
                    </div>
                    <div class='table=responsive'>
                        <table class='table'>
                            <tr>
                                <th>NOME</th>
                                <td>$nomeProduto</th>
                            </tr>
                            <tr>
                                <th>DESCRIÇÃO</th>
                                <td>$descricaoProduto</th>
                            </tr>
                            <tr>
                                <th>VALOR DO PRODUTO</th>
                                <td><span>R$</span>$valorProduto</th>
                            </tr>
                            </tr>
                        </table>
                    </div>
                </div>";
        }
        // Se não conseguir inserir os dados do Produto na base de dados, emite alerta danger
        else {
            echo "<div class='alert alert-danger text-center'>Erro ao tentar inserirr dados do Produto na base de dados!</div>";
        }
    }
}
else {
    // Caso o método seja GET, redireciona para a página formProduto.php
    header("location:formProduto.php");
}

function testar_entrada($dado) {
    $dado = trim($dado); // TRIM: Remove espaços desnecessários
    $dado = stripcslashes($dado); // Remove barras invertidas
    $dado = htmlspecialchars($dado); // Converte caracteres especiais

    return($dado);
}

?>
<?php include ("footer.php") ?>