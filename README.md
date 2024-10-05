# Projeto-Computa-o-Movel

Projeto feito por Gabriel Lovato Camilo de Campos - 22.123.004-8 e Theo Zago Zimmermann - 22.123.035-2

Visão Geral:
Fizemos um jogo em arduino que consiste em 3 fases, na primeira fase possui um jogo da memória no qual os LEDs acendem 10 vezes aleatoriamente e o jogador deve decorar a sequência e passar de fase, a cada acerto toca um som do buzzer e caso o jogador não passe também vai tocar um outro som no buzzer, o jogo será reiniciado.Na segunda fase, quando o jogador passa do jogo de memória, iniciasse a fase de perguntas, no qual serão 5 perguntas com respostas de sim ou não e caso jogador erre uma questão, ele perderá o jogo e será reiniciado, porém o jogador pode pular uma questão caso ele não saiba, acertando todas as perguntas e tambem tocara um som no buzzer, vamos para a pergunta final, que consiste em apenas uma pergunta, também de sim ou não, caso o jogador acerte, ele ganha o jogo e toca som da vitoria no buzzer, e caso o jogador erre tocara outro som e o jogo vai reiniciar.

Etapa 1:
Quando começamos o projeto, primeira coisa em que focamos foi montar o arduino no tinkercad, conectando tudo que utilizamos que no caso foi, placa de ensaio, LEDs, fios, buzzer, potencializador, botões, resistores e o próprio arduino. Quando montamos o arduino, já começamos a fazer código, porém nos primeiros dias, focamos em apenas ligar os LEDs, fazer o som do buzzer funcionar, conectar cada botão, potencializador, buzzer, lcd no arduino, porém não conseguimos fazer o lcd ligar.

Etapa 2:
Depois que montamos o arduino e testamos os funcionamentos dos componentes, começamos a fazer o código do jogo da memória, no qual quando começamos a fazer o código, tivemos muita dificuldade em fazer a o sequência aleatória dos LEDs, que quando o jogador clicava no botão de start, sempre vinha a mesma sequência, porém depois de algum tempo conseguimos consertar isso. Porém ainda tivemos mais dificuldades quando conseguimos fazer a sequência aleatória dos LEDs funcionar, o código não estava salvando a resposta do jogador, o jogador poderia acertar a sequência que mesmo assim ele ia dar errado, nessa questão não tivemos muita dificuldade em consertar. Depois de conseguir arrumar esses erros, nós conseguimos terminar o jogo da memória antes da entrega parcial, mas ainda estávamos com o problema do lcd, não conseguíamos ligar ele de jeito nenhum e fomos para a entrega parcial com o circuito montado completo e o jogo de memoria completo também, faltando apenas fazer ligar o lcd

Etapa 3:
Após a entrega parcial, focamos em resolver o problema do lcd que não estava funcionando. Pesquisamos sobre o que poderia ter acontecido para o lcd não estar ligando e depois conseguimos ver que o erro estava que o lcd não estava conectado corretamente tanto na placa de ensaio e no lcd, depois de algum tempo, conseguimos consertar o lcd, agora como estávamos com tudo funcionando. Fomos para a segunda fase do jogo, que era fazer a fase de perguntas, no qual fizemos um sistema de perguntas de sim ou não. Usamos dois botões para fazer os botões de sim ou não que pega a resposta do jogador, todas as perguntas aparecem no lcd, adicionamos um som no buzzer para cada acerto para ser reproduzido e fizemos também para as respostas erradas e caso o jogador acerte todas as perguntas ele vai para a pergunta final, o jogador poderia pular uma questão, se ele não responder a pergunta em 10 segundos, depois de 5 segundos ira começar a tocar um som no buzzer para avisar que o tempo está acabando, porém o jogador consegue pular uma questão, caso ele já tenha pulada e questão e queira pular outro, não vai ser possível e o ele vai perder o jogo e ter que começar de novo. Não tivemos nenhuma dificuldade muito grande em fazer o jogo de perguntas.

Etapa 4:
Após terminar o jogo de perguntas, começamos a desenvolver o código da fase final, que possui apenas uma pergunta também de sim ou não e caso o jogador acerte a questão, toca um som de vitória no buzzer e uma mensagem no lcd de 'parabéns pela vitória'. Caso o jogador erre a pergunta final o jogo será reiniciado por completo, irá voltar para o inicio do jogo que é o jogo da memoria. Depois de terminar o código fizemos algumas alterações no que ia vim escrito no lcd, fizemos uma contagem de acertos no jogo de memoria e quando o jogador erra mostra o passo que ele errou, na fase de perguntas quando ele acerta a pergunta, o lcd também retorna que a resposta foi correta e caso ao contrario ele retorna que a resposta foi errada e avisa também que a questão foi pulada e na fase final, caso o jogador acerte a ultima questão, o lcd ira retornar que você venceu o jogo.

Funcionamento do Código:
O código foi dividido em funções que controlam cada fase do jogo
Fase da Memoria - utiliza LEDs para gerar uma sequência aleatória de que ira piscar 10 vezes, que o jogador deve memorizar e acertar nos botões do arduino. A cada acerto do jogador o buzzer ira reproduzir um som e caso o jogador erre, também vai reproduzir um outro som.
Fase de Perguntas - Nesta fase, pega 5 perguntas do banco de perguntas e jogador deve responder com apenas sim ou não. O jogador também pode pular uma questão, caso pule mais uma questão, o jogo reinicia e caso ele erre a questão, o jogo também reinicia.
Fase Final - Apenas uma pergunta final que também é de sim ou não. Caso o jogador acerte a questão, jogo é finalizado com um som de vitória e uma mensagem de que o jogador venceu o jogo e caso ele erre a pergunta, o jogo reinicia.

Dificuldades Enfrentadas:
Tivemos dificuldades em algumas coisas como:
Sequência aleatória - no inicio, a sequencia de LEDs, não estava sendo gerada corretamente, pois a mesma sequência era mostrada sempre e conseguimos resolver esse problema usando a função randomSeed() para garantir que a sequência fosse realmente aleatória.
Armazenamento das respostas - Outra dificuldade que tivemos foi em fazer com que o jogo reconhecesse a resposta correta do jogador. No começo o código não estava comparando a sequência correta, porém depois de alguns ajustes nas sequências e respostas, conseguimos resolver o problema.

Conclusão:
Com o jogo finalizado, conseguimos terminar as 3 fases do projeto, que utilizamos 4 componentes essências que foram LEDs, botões, buzzer e o display lcd. Enfrentamos algumas dificuldades no projeto, porém conseguimos arrumar tudo e entregar o código completo para o professor na data prevista.
![Imagem arduino 1](https://github.com/user-attachments/assets/7ac2ab5e-bf32-409a-a419-72b19bcd777b)
![Imagem arduino 2](https://github.com/user-attachments/assets/2a8bc8e3-c3a8-494e-860a-83ee1e726922)
![Imagem arduino 3](https://github.com/user-attachments/assets/3174a96e-9d65-4539-bc56-96784c7deab3)
