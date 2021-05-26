Autor: Hugo Campos [link](https://github.com/HugocamposL3)

# Fazendo um Aplicativo Usando o Kodular

## Objetivo:

Montar um aplicativo rápido e fácil, usando o Kodular.

## Introdução:

Neste tutorial iremos ensinar como projetar um aplicativo usando o site kolular [link](https://www.kodular.io/), vamos mostrar como montar uma tela para o seu celular e também programando usando a linguagem scracth, o objetivo desse aplicativo será ligar e desligar 1 led, usando o bluetooth HC-05 e uma placa NUCLEO STM32.

# Primeiros Passos com o Kodular:

- A primeira coisa a se fazer é se cadastrar no site do Kodular, clique em **Create Apps!** na parte superior direita da página principal do site

<a href="https://imgur.com/Q6GzWrk"><img src="https://imgur.com/Q6GzWrk.jpg" title="source: imgur.com" /></a>

- Feito isso, você pode dá inicio ao seu novo projeto. Vá até **Create Project** e dê um nome a ele (Sem espaços).

<a href="https://imgur.com/LirSaGS"><img src="https://imgur.com/LirSaGS.jpg" title="source: imgur.com" /></a>

- Após essa janela, vai abrir um outra para você configurar o tema do seu aplicativo, a versão do seu android e as cores do seu aplicativo.

<a href="https://imgur.com/NWNyBgC"><img src="https://imgur.com/NWNyBgC.jpg" title="source: imgur.com" /></a>

- Essa será a tela inicial do seu aplicativo

<a href="https://imgur.com/N7gh3jX"><img src="https://imgur.com/N7gh3jX.jpg" title="source: imgur.com" /></a>

- Você pode escolher a melhor resolução para o seu celular tendo esses celulares como exemplo, ou podendo até usar o seu tablet para fazer o seu aplicativo

<a href="https://imgur.com/mY5QbyU"><img src="https://imgur.com/mY5QbyU.jpg" title="source: imgur.com" /></a>

No meu caso o que melhor se encaixa é o **Samsung Galaxy S9**.

# Montando a Interface do seu Aplicativo:

Como disse no inicio, iremos fazer um projeto simples. Para começar vamos colocar dois botões um para conectar o bluetooth e outro para desconectar o bluetooth.

- No canto esquerdo da tela, siga os seguintes passos: **Layout -> General -> Horizontal Arregement** e arraste até a tela do celular e solte. Deverá ficar dessa forma:

<a href="https://imgur.com/B4T3UWK"><img src="https://imgur.com/B4T3UWK.jpg" title="source: imgur.com" /></a>

Feito isso vamos colocar os dois botões na tela.

- Novamente no canto esquerdo da tela, siga os seguintes passos: **User Interface -> Button** e arraste o button até dentro do Horizontal Arregement, como iremos usar dois botões coloque um do lado do outro. Os botões ficarão dessa forma:

<a href="https://imgur.com/PEUPaye"><img src="https://imgur.com/PEUPaye.jpg" title="source: imgur.com" /></a>

- Na parte direita da sua tela você tem a janela de configuração do objeto que você quer editar, por exemplo iremos editar os botões do bluetooth, com um botão por vez selecionado nós iremos configurar o seu texto que é preenchido dentro do botão, o seu tamanho e largura para que fique do tamanho que a gente quer na tela e também a sua cor.

<a href="https://imgur.com/FjF6Z3D"><img src="https://imgur.com/FjF6Z3D.jpg" title="source: imgur.com" /></a>

- Agora iremos colocar os dois botões de ligar e desligar o led, siga os mesmos passos feito acima e edite os botões da forma que você quer.

<a href="https://imgur.com/KUE3opf"><img src="https://imgur.com/KUE3opf.jpg" title="source: imgur.com" /></a>

Utilizaremos algumas ferramentas do Kodular, para que o bluetooth do celular se conecte com o bluetooth HC-05. Para que isso seja feito, siga os seguintes passos:

- Novamente no canto esquerdo da sua tela, vá em **Connectivity -> Bluetooth Client** e arraste para a tela do celular, como é uma ferramenta do seu celular, não vai aparecer nada na tela, mas você deverá ver na parte de Components:

<a href="https://imgur.com/e9Nnfvr"><img src="https://imgur.com/e9Nnfvr.jpg" title="source: imgur.com" /></a>

Agora colocaremos, a ferramenta que será utilizada para mostrar a lista de bluetooth que o seu celular vai encontrar e também uma ferramenta para mostrar notificações no decorrer do seu aplicativo.

- Siga os passos: **User Interface -> List Picker** Arraste até a tela do celular, essa ferramenta vai ficar a mostra do celular mas não é isso que queremos, então vamos deixar essa ferramenta invisivel, com a ferramenta selecionada vá na parte direita do site, e desmarque a caixa **Visible**:

<a href="https://imgur.com/uAazAPC"><img src="https://imgur.com/uAazAPC.jpg" title="source: imgur.com" /></a>

Por último colocaremos a ferramenta de Notificação.

- Abaixo da ferramenta que você selecionou o **List Picker** vá até uma outra chamada **Notifier** clique e arraste para a tela do celular, essa não ficará visivel na tela:

<a href="https://imgur.com/xhZ7vet"><img src="https://imgur.com/xhZ7vet.jpg" title="source: imgur.com" /></a>

Finalizamos a parte gráfica do aplicativo.

# Iniciando a Codificação do seu Aplicativo:

Na parte superior direita do site, vai ter uma caixa chamada **Block** clique nela e o site vai te levar para uma tela de codificação em blocos:

<a href="https://imgur.com/dOov6uC"><img src="https://imgur.com/dOov6uC.jpg" title="source: imgur.com" /></a>

- Irei dividir em duas partes essa codificação, uma parte em que configuramos as configurações do bluetooth e também a outra de envio de dados de acordo com o botão que apertamos.

- Inicializando o Bluetooth
Irei deixar imagens dos blocos que usei nessa parte de bluetooth, siga exatamente da forma que eu fiz:

- Inicio de configuração do Bluetooth:

<a href="https://imgur.com/GFDiTJF"><img src="https://imgur.com/GFDiTJF.jpg" title="source: imgur.com" /></a>

- Configurando os botões **conectar** e **desconectar**:

<a href="https://imgur.com/hugme2R"><img src="https://imgur.com/hugme2R.jpg" title="source: imgur.com" /></a>

- Configurando os botões que vai **Ligar** e **Desligar** o led, e vamos setar um carácter que cada botão vai enviar para o bluetooth:

<a href="https://imgur.com/fPWgS4a"><img src="https://imgur.com/fPWgS4a.jpg" title="source: imgur.com" /></a>
<a href="https://imgur.com/6ypdolh"><img src="https://imgur.com/6ypdolh.jpg" title="source: imgur.com" /></a>

Está feito o seu aplicativo a também a codificação do aplicativo.

## Exportando para o Celular:

Na parte superior do site vai ter uma caixa escrita **Export**, clique nela e depois em **Android app(.apk)**.

<a href="https://imgur.com/KQJ87dw"><img src="https://imgur.com/KQJ87dw.jpg" title="source: imgur.com" /></a>

O site vai começar a exportar o seu aplicativo e vai aparecer um QR.code para que você scaneie com a câmera do seu celular. 

<a href="https://imgur.com/FNzbdAM"><img src="https://imgur.com/FNzbdAM.jpg" title="source: imgur.com" /></a>

Siga os passos que o seu celular vai te direcionar e aceite fazer o download, provavelmente uma mensagem vai aparecer no celular dizendo que esse aplicativo não é confiavel porque ele não saiu diretamente da sua loja de aplicativos (Play Store).

- Imagens da instalação no celular, aplicativo funcionando e também do icone que vai aparecer no menu do seu celular:

<a href="https://imgur.com/5NwXRgl"><img src="https://imgur.com/5NwXRgl.jpg" title="source: imgur.com" /></a>
<a href="https://imgur.com/IUsCWGI"><img src="https://imgur.com/IUsCWGI.jpg" title="source: imgur.com" /></a>
<a href="https://imgur.com/EgTgVdG"><img src="https://imgur.com/EgTgVdG.jpg" title="source: imgur.com" /></a>

## Projeto Finalizado

Pronto nosso projeto foi finalizado com êxito agora é sua vez de fazer os testes, use o outro tutorial que o mesmo autor fez para codificação da sua placa NUCLEO STM32 [link](https://github.com/Insper-Mecat-LSM/NUCLEO-STM32-HC-05) lembre de mantes os mesmos dados (caracteres) de envio na codificação scratch e também na codificação do código mBed. Qualquer dúvida pode entrar em contato ![Gmail Badge](https://img.shields.io/badge/-camposhugo029@gmail.com-c71610?style=flat-square&logo=Gmail&logoColor=white&link=mailto:camposhugo029@gmail.com)





























