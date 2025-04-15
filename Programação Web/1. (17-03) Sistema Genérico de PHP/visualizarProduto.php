<?php include ("header.php") ?>

<div class="container text-center mt-5 mb-5">

    <div class="row text-center">

        <div class="d-flex justify-content-center mb-3">

            <div class="card" style="width:30%; border-style:none;">
                            
                <!-- Carousel -->
                <div id="Produto" class="carousel slide" data-bs-ride="carousel" >

                    <!-- Indicators/dots -->
                    <div class="carousel-indicators">
                        <button type="button" data-bs-target="#Produto" data-bs-slide-to="0" class="active"></button>
                        <button type="button" data-bs-target="#Produto" data-bs-slide-to="1"></button>
                        <button type="button" data-bs-target="#Produto" data-bs-slide-to="2"></button>
                    </div>

                    <!-- The slideshow/carousel -->
                    <div class="carousel-inner">
                        <div class="carousel-item active">
                            <img src="img/generico_logo.png" alt="Nome do Produto" class="d-block" style="width:100%">
                        </div>
                        <div class="carousel-item">
                            <img src="img/generico_logo.png" alt="Nome do Produto" class="d-block" style="width:100%">
                        </div>
                        <div class="carousel-item">
                            <img src="img/generico_logo.png" alt="Nome do Produto" class="d-block" style="width:100%">
                        </div>
                    </div>

                    <!-- Left and right controls/icons -->
                    <button class="carousel-control-prev" type="button" data-bs-target="#Produto" data-bs-slide="prev">
                        <span class="carousel-control-prev-icon"></span>
                    </button>
                    <button class="carousel-control-next" type="button" data-bs-target="#Produto" data-bs-slide="next">
                        <span class="carousel-control-next-icon"></span>
                    </button>
                </div>
                
                <div class="card-body">
                    <h4 class="card-title"><b>Nome do Produto</b></h4>
                    <p class="card-text">Descrição do Produto</p>
                    <p class="card-text">Valor: <b>R$ Valor do Produto</b></p>
                    <div class="card bg-light">
                        <div class="card-body">
                            <a href="#" title="Realizar Pedido">
                                <button class="btn btn-outline-success">
                                    <i class="bi bi-clipboard-plus" style="font-size:16pt;"></i>
                                    Realizar Pedido
                                </button>
                            </a>
                        </div>
                        <br>
                    </div>
                </div>

            </div>

        </div>

    </div>

</div>

<?php include ("footer.php") ?>