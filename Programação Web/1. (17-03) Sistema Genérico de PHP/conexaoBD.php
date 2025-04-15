<?php
    $host = "localhost"; // Servidor do BD 
    $user = "root"; // Usuário do BD
    $senhaBD = "root"; // Senha do BD
    $database = "generic"; // Nome do BD
    
    // Função do PHP para estabelecer conexão com o BD
    $conn = mysqli_connect($host, $user, $senhaBD, $database);

    if(!$conn) {
        echo "<p>Erro ao conectar à Base de Dados <strong>$database</strong>!<p>";
    }
?>