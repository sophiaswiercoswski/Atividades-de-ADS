<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <title>Generic</title>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"></script>
    </head>
<body>
    <div class="p-3 text-dark text-center">
        <a href="index.php" title="Retornar à página inicial">
            <img src="assets/logo.png" alt="Logotipo do Sistema" width="150px">
        </a>
    </div>

    <nav class="navbar navbar-expand-sm bg-dark navbar-dark sticky-top">
        <div class="container-fluid">
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#collapsibleNavbar">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div id="collapsibleNavbar" class="collapse navbar-collapse">
                <ul class="navbar-nav">
                    <li class="nav-item">
                        <a class="nav-link active" href="index.php">Início</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="formProduto.php">Cadastrar Produto</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="formLogin.php">Login</a>
                    </li>
                </ul>
            </div>
        </div>
    </nav>

    <div class="container mt-5">
        <div class="alert alert-info text-center">
            <p>Há <strong>X</strong> produtos cadastrados!</p>
        </div>
        <form name="formFiltro" action="index.php" method="GET" class="was-validated">
            <div class="form-floating mt-3">
                <select name="filtroProduto" class="form-select" required>
                    <option value="todos">Visualizar todos os produtos</option>
                    <option value="disponivel">Visualizar apenas produtos disponíveis</option>
                    <option value="esgotado">Visualizar apenas produtos esgotados</option>
                </select>
                <label for="filtroProduto">Selecione um Filtro:</label><br>
            </div>
            <button type="submit" class="btn btn-success" style="float: right">Filtrar Produtos</button><br><br>
        </form>
        <hr>
        <div class="row">
            <div class="col-sm-3" style="margin-bottom:80px">
                <div class="card" style="width:100%; height:100%">
                    <img class="card-img-top" src="./assets/marek-piwnicki-9IxSxjPTOSI-unsplash.jpg" alt="Imagem do Produto">
                    <div class="card-body text-center">
                        <h4 class="card-title">Nome do Produto</h4>
                        <p class="card-text">Texto do Produto</p>
                        <a href="#" class="btn btn-primary">Visualizar Produto</a>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="mt-5 p-2 bg-dark text-white text-center fixed-bottom">
        <p>Sistema Genérico desenvolvido nas aulas de Programação Web do curso de TADS &copy</p>
    </div>
</body>
</html>