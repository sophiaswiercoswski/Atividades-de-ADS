<?php include ("header.php") ?>
<?php

// Verifica o método de requisição do servidor
if($_SERVER["REQUEST_METHOD"] == "POST") {
    // Bloco para a declaração de variáveis
    $fotoUsuario = $nomeUsuario = $dataNascimentoUsuario = $cidadeUsuario = $telefoneUsuario = $emailUsuario = $senhaUsuario = $confirmarSenhaUsuario = "";
    $erroPreenchimento = false;

    // Validação do campo nomeUsuario
    if(empty($_POST["nomeUsuario"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>NOME</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $nomeUsuario = testar_entrada($_POST["nomeUsuario"]);
        
        // Usa a função preg_match para verificar o padrão de caracteres
        if(!preg_match('/^[\p{L} ]+$/u', $nomeUsuario)) {
            echo "<div class='alert alert-warning text-center'>O <strong>NOME</strong> deve conter apenas letras!";
            $erroPreenchimento = true;
        }
    }

    // Validação do campo dataNascimentoUsuario
    if(empty($_POST["dataNascimentoUsuario"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>DATA DE NASCIMENTO</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $dataNascimentoUsuario = testar_entrada($_POST["dataNascimentoUsuario"]);
        
        // Usa a função strlen para verificar o comprimento da string
        if(strlen($dataNascimentoUsuario) == 10) {
            // Usa a função substr para pegar partes da string
            $dia = substr($dataNascimentoUsuario, 8, 2);
            $mes = substr($dataNascimentoUsuario, 5, 2);
            $ano = substr($dataNascimentoUsuario, 0, 4);

            // Usa a função checkdate para verificar se é uma data válida
            if(!checkdate($mes, $dia, $ano)) {
                echo "<div class='alert alert-warning text-center'><strong>DATA DE NASCIMENTO</strong> inválida!";
                $erroPreenchimento = true;
            }
        }
        else {
            echo "<div class='alert alert-warning text-center'><strong>DATA DE NASCIMENTO</strong> inválida!";
            $erroPreenchimento = true;
        }
    }


    // Validação do campo cidadeUsuario
    if(empty($_POST["cidadeUsuario"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>CIDADE</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $cidadeUsuario = testar_entrada($_POST["cidadeUsuario"]);
    }

    // Validação do campo telefoneUsuario
    if(empty($_POST["telefoneUsuario"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>TELEFONE</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $telefoneUsuario = testar_entrada($_POST["telefoneUsuario"]);
    }

    // Validação do campo emailUsuario
    if(empty($_POST["emailUsuario"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>EMAIL</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $emailUsuario = testar_entrada($_POST["emailUsuario"]);
    }

    // Validação do campo senhaUsuario
    if(empty($_POST["senhaUsuario"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>SENHA</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $senhaUsuario = md5(testar_entrada($_POST["senhaUsuario"]));
    }

    // Validação do campo confirmarSenhaUsuario
    if(empty($_POST["confirmarSenhaUsuario"])) { // Utiliza a função empty() para verificar se o campo está vazio
        echo "<div class='alert alert-warning text-center'>O campo <strong>CONFIRMAR SENHA</strong> é obrigatório.";
        $erroPreenchimento = true;
    }
    else {
        // Armazena o valor na variável
        $confirmarSenhaUsuario = md5(testar_entrada($_POST["confirmarSenhaUsuario"]));
        if($senhaUsuario != $confirmarSenhaUsuario) {
            echo "<div class='alert alert-warning text-center'>As <strong>SENHAS</strong> não conferem!</div>";
            $erroPreenchimento = true;
        }
    }

    // Início da validação do campo FOTO
    $diretorio = "img/"; // Define para qual diretório do sistema as imagens serão movidas
    $fotoUsuario  = $diretorio . basename($_FILES["fotoUsuario"]["name"]); // A função "basename()" adquire o nome base do arquivo e o junta com o valor da variável diretorio
    $erroUpload = false; // Variável para verificar erros no upload
    $tipoDaImagem = strtolower(pathinfo($fotoUsuario, PATHINFO_EXTENSION)); // Função "strtolower()" converte a string em caracteres minúsculos e a "pathinfo" descobre o formato do arquivo feito upload. Converte para minúsculo e adquirir a extensão do arquivo

    // Verificar se o tamanho do arquivo é maior que 0
    if($_FILES["fotoUsuario"]["size"] != 0) {

        // Verificar o tamanho  do arquivo é maior do que 5MB (em bytes)
        if($_FILES["fotoUsuario"]["size"] > 5000000) {
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
            if(!move_uploaded_file($_FILES["fotoUsuario"]["tmp_name"], $fotoUsuario)) {
                echo "<div class='alert alert-warning text-center'>Erro ao tentar mover a <strong>FOTO</strong> para o diretório $diretorio!</div>";
                $erroUpload = true;      
            }
        }
    }

    // Se não houver erro de preenchimento ou erro de upload
    if(!$erroPreenchimento && !$erroUpload) {
        // Criar uma QUERY responsável por realizar a inserção dos dados no BD
        $inserirUsuario = "INSERT INTO Usuarios (fotoUsuario, nomeUsuario, dataNascimentoUsuario, cidadeUsuario, telefoneUsuario, emailUsuario, senhaUsuario)
                            VALUES ('$fotoUsuario', '$nomeUsuario', '$dataNascimentoUsuario', '$cidadeUsuario', '$telefoneUsuario', '$emailUsuario', '$senhaUsuario')";

        // Inclui o arquivo de conexão com o BD
        include "conexaoBD.php";

        // Se a query for executa com sucesso, exibe mensagem e tabela
        if(mysqli_query($conn, $inserirUsuario)) {
            echo "<div class='alert alert-success text-center'>Usuário(a) cadastrado(a) com sucesso!</div>";
            echo "<div class='container mrt-3'>
                    <div class='mt-3 text-center'>
                        <img src ='$fotoUsuario' style= 'width:130px' title='Foto do $nomeUsuario'>
                    </div>
                    <div class='table=responsive'>
                        <table class='table'>
                            <tr>
                                <th>NOME</th>
                                <td>$nomeUsuario</th>
                            </tr>
                            <tr>
                                <th>DAT DE NASCIMENTO</th>
                                <td>$dia/$mes/$ano</th>
                            </tr>
                            <tr>
                                <th>CIDADE</th>
                                <td>$cidadeUsuario</th>
                            </tr>
                            <tr>
                                <th>TELEFONE</th>
                                <td>$telefoneUsuario</th>
                            </tr>
                            <tr>
                                <th>EMAIL</th>
                                <td>$emailUsuario</th>
                            </tr>
                        </table>
                    </div>
                </div>";
        }
        // Se não conseguir inserir os dados do Usuário na base de dados, emite alerta danger
        else {
            echo "<div class='alert alert-danger text-center'>Erro ao tentar inserirr dados do Usuário(a) na base de dados!</div>";
        }
    }
}
else {
    // Caso o método seja GET, redireciona para a página formUsuario.php
    header("location:formUsuario.php");
}

function testar_entrada($dado) {
    $dado = trim($dado); // TRIM: Remove espaços desnecessários
    $dado = stripcslashes($dado); // Remove barras invertidas
    $dado = htmlspecialchars($dado); // Converte caracteres especiais

    return($dado);
}

?>
<?php include ("footer.php") ?>