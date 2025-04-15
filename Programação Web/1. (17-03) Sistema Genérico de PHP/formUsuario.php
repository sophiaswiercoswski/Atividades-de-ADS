<?php include ("header.php") ?>

<div class="container-fluid text-center">

    <h2>Cadastro de Usuário:</h2>
    <div class="d-flex justify-content-center mb-3">
        <div class="row">
            <div class="col-12">
                <form action="actionUsuario.php?pagina=formUsuario" method="POST" class="was-validated" enctype="multipart/form-data">
                    <div class="form-floating mb-3 mt-3">
                        <input type="file" class="form-control" id="fotoUsuario" name="fotoUsuario" required>
                        <label for="fotoUsuario">Foto</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <div class="form-floating mb-3 mt-3">
                        <input type="text" class="form-control" id="nomeUsuario" placeholder="Nome" name="nomeUsuario" required>
                        <label for="nomeUsuario">Nome Completo</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <div class="form-floating mb-3 mt-3">
                        <input type="date" class="form-control" id="dataNascimentoUsuario" placeholder="Data de Nascimento" name="dataNascimentoUsuario" required>
                        <label for="dataNascimentoUsuario">Data de Nascimento</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <div class="form-floating mb-3 mt-3">
                        <select class="form-select" id="cidadeUsuario" name="cidadeUsuario" required>
                            <option value="curiuva">Curiúva</option>
                            <option value="imbau">Imbaú</option>
                            <option value="ortigueira">Ortigueira</option>
                            <option value="reserva">Reserva</option>
                            <option value="telemacoBorba" selected>Telêmaco Borba</option>
                            <option value="tibagi">Tibagi</option>
                        </select>
                        <label for="cidadeUsuario">Cidade</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <div class="form-floating mb-3 mt-3">
                        <input type="text" class="form-control" id="telefoneUsuario" placeholder="Telefone" name="telefoneUsuario" required>
                        <label for="telefoneUsuario">Telefone</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <div class="form-floating mb-3 mt-3">
                        <input type="email" class="form-control" id="emailUsuario" placeholder="Email" name="emailUsuario" required>
                        <label for="emailUsuario">Email</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <div class="form-floating mt-3 mb-3">
                        <input type="password" class="form-control" id="senhaUsuario" placeholder="Senha" name="senhaUsuario" required>
                        <label for="senhaUsuario">Senha</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <div class="form-floating mt-3 mb-3">
                        <input type="password" class="form-control" id="confirmarSenhaUsuario" placeholder="Confirme a Senha" name="confirmarSenhaUsuario" required>
                        <label for="confirmarSenhaUsuario">Confirme a Senha</label>
                        <div class="valid-feedback"></div>
                        <div class="invalid-feedback"></div>
                    </div>
                    <button type="submit" class="btn btn-success">Cadastrar</button>
                </form>
            </div>
        </div>
        <br>
    </div>

</div>
                
<?php include ("footer.php") ?>