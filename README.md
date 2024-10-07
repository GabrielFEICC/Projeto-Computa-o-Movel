# Projeto-Computa-o-Movel

Projeto feito por Gabriel Lovato Camilo de Campos - 22.123.004-8 e Theo Zago Zimmermann - 22.123.035-2

Visão Geral:

Este projeto consiste no desenvolvimento de um jogo em Arduino que abrange três fases distintas. A primeira fase é um jogo da memória, onde os LEDs acendem 10 vezes aleatoriamente, e o jogador deve memorizar e reproduzir a sequência correta. Na segunda fase, o jogador responde a uma série de 5 perguntas de "Sim" ou "Não". Finalmente, a terceira fase apresenta uma única pergunta final. Sons são reproduzidos por um buzzer quando o jogador acerta ou erra uma questão, e um display LCD exibe as informações e mensagens durante o jogo.

Componentes Utilizados:

-Placa Arduino

-LEDs

-Buzzer

-Botões

-Display LCD

-Resistores

-Potenciômetro

-Resistores

-Placa de Ensaio

-Fios

Estrutura do Jogo

Fase 1: Jogo da Memoria

Nesta fase, o jogo gera uma sequência de 10 piscadas de LEDs de forma aleatória, e o jogador deve acertar essa sequência corretamente utilizando os botões conectados ao Arduino. Para cada acerto, um som é reproduzido no buzzer. Caso o jogador erre, o jogo reinicia automaticamente, com um som específico indicando a falha.

Funcionamentos:

-O LED pisca 10 vezes de forma aleatória.

-O jogador deve tentar acertar a sequência.

-Sons são emitidos a cada acerto e caso erre também vai tocar. Os sons são emitidos no Buzzer.


Fase 2: Jogo de Perguntas

Depois de passar pela primeira fase, o jogador avança para a fase de perguntas. São feitas 5 perguntas com respostas de "Sim" ou "Não", que aparecem no display LCD. O jogador utiliza dois botões para responder às perguntas. Caso o jogador não saiba a resposta, ele pode pular uma pergunta, mas apenas uma vez. Se errar ou tentar pular mais de uma vez, o jogo reinicia.

Funcionamento:

-5 perguntas aparecem no LCD, respondidas com os botões de "Sim" ou "Não".

-O jogador pode pular uma pergunta.

-Se houver erro, o jogo reinicia.

Fase 3: Pergunta Final

Na última fase, o jogador recebe uma única pergunta. Se ele responder corretamente, um som de vitória é reproduzido e o display exibe uma mensagem de sucesso. Caso contrário, o jogo reinicia desde a primeira fase.

Funcionamento:

-O jogador responde a uma última pergunta de "Sim" ou "Não".

-Sons e mensagens no LCD indicam se o jogador venceu ou perdeu.

Desenvolvimento do Código:

O código foi dividido em funções que controlam as 3 fases do jogo. A lógica principal do jogo da memória se baseia na geração de uma sequência aleatória de LEDs usando a função randomSeed(). Já a fase de perguntas utiliza botões para armazenar as respostas do jogador e o display LCD para exibir as perguntas e se o jogador está progredindo no jogo.

Funções principais:

-setup(): Configura o hardware e inicializa o jogo.

-MemoryPhase(): Função responsável pela lógica da primeira fase.

-QuestionPhase(): Função que controla as perguntas e respostas da segunda fase.

-FinalQuestion(): Faz a pergunta final para o jogador e verifica se ele acertou ou não.

Conclusão:

O projeto foi desenvolvido passo a passo, começando pela montagem do circuito e depois pela programação do código em partes. O jogo final tem três fases: o jogo da memória, as perguntas e a pergunta final. Durante o jogo, o jogador é informado pelo LCD se acertou ou errou os desafios e o buzzer também informa o jogador emitindo sons de acertos e erros.

![Imagem arduino 1](https://github.com/user-attachments/assets/7ac2ab5e-bf32-409a-a419-72b19bcd777b)
![Imagem arduino 2](https://github.com/user-attachments/assets/2a8bc8e3-c3a8-494e-860a-83ee1e726922)
![Imagem arduino 3](https://github.com/user-attachments/assets/3174a96e-9d65-4539-bc56-96784c7deab3)
