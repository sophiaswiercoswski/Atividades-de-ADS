<?php include "header.php"; ?>

        <div class="container mt-5 mb-5">
            <div class="alert alert-info text-center">Há <strong>X</strong> produtos cadastrados!</div>
            <form name="formFiltro" action="index.php" method="GET">
                <div class="form-floating mt-3">
                    <select class="form-select" name="filtroProduto" required>
                        <option value="todos">Visualizar todos os Produtos</option>
                        <option value="disponivel">Visualizar apenas Produtos disponíveis</option>
                        <option value="esgotado">Visualizar apenas Produtos esgotados</option>
                    </select>
                    <label for="filtroProduto">Selecione um Filtro</label>
                    <br>
                </div>
                <button type="submit" class="btn btn-success" style='float:right'><i class='bi bi-funnel'></i>  Filtrar Produtos</button><br>
            </form>

            <hr>

            <div class="row">
                <div class="col-sm-3">
                    <div class="card" style="width:100%; height:100%;">
                        <div class="card-body" style="height:100%">
                            <a href="visualizarProduto.php" style="text-decoration:none;" title="Visualizar Produto de NOME DO PRODUTO">
                                <img class="card-img-top" src="./img
                                /logo.png" alt="Foto de NOME DO PRODUTO">
                            </a>
                        </div>
                        <div class="card-body text-center">
                            <h4 class="card-title">Nome do Produto</h4>
                            <p class="card-text">Valor: <b>R$ Valor do Produto</b></p>
                            <div class="d-grid" style="border-size:border-box">
                                <a class="btn btn-success" href="visualizarProduto.php" style="text-decoration:none;"  title="Visualizar NOME DO PRODUTO">
                                    Visualizar Produto
                                </a>  
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </body>
</html>

<?php include "footer.php"; ?>