<?php include ("header.php") ?>

<div class="container mt-3 mb-3">
    <?php
        echo "<h1 class='text-center'>Lista dos Produtos cadastrados exibidos em uma tabela</h1>";
        // Criar QUERY para listar TODOS os registros da tabela Produtos
        $listarProdutos = "SELECT * FROM Produtos";

        include("conexaoBD.php");
        // A função mysqli_query é responsável pela execução de comandos SQL no Banco de Dados
        $res = mysqli_query($conn, $listarProdutos) or die ("Erro ao tentar listar Produtos");

        $totalProdutos = mysqli_num_rows($res); // Busca o total de registros retornados pela QUERY

        echo "<div class='alert alert-info text-center'>Há <strong>$totalProdutos</strong> produtos cadastrados!</div>";
    
        // Montar o cabeçalho da tabela para exibir os registros
        echo "<table class='table'>
                <thead class='table-dark'>
                    <tr>
                        <th>ID</th>
                        <th>FOTO</th>
                        <th>NOME</th>
                        <th>DESCRIÇÃO</th>
                        <th>VALOR</th>
                        <th>STATUS</th>
                    </tr>
                </thead>
            <tbody>";

        // Enquanto houver registros, executa a função abaixo para armazenar nas variáveis
        while($registro = mysqli_fetch_assoc($res)) {
            // Cria variáveis PHP e armazena os registros encontrados na tabela
            $idProduto = $registro["idProduto"];
            $fotoProduto = $registro["fotoProduto"];
            $nomeProduto = $registro["nomeProduto"];
            $descricaoProduto = $registro["descricaoProduto"];
            $valorProduto = $registro["valorProduto"];
            $statusProduto = $registro["statusProduto"];
        
            // Exibe os valores armazenados nas variáveis
            echo "<tr>
                    <td>$idProduto</td>
                    <td><img src='$fotoProduto' title='Foto de $nomeProduto' style='width: 50px'></td>
                    <td>nomeProduto</td>
                    <td>$descricaoProduto</td>
                    <td>$valorProduto</td>
                    <td>$statusProduto</td>
                </tr>";
        }
        echo "</tbody></table>";
        mysqli_close($conn); // Encerra a conexão com o banco de dados
        
    ?>
</div>

<?php include ("footer.php") ?>