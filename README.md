![GitHub Org's stars](https://img.shields.io/github/stars/camilafernanda?style=social)
<h1 align="center" >MahindraGame-Challenge</h1> 

Este é um projeto de jogo para a Mahindra Racing utilizando Arduino. O jogador controla um carro que deve desviar de obstáculos na pista. O jogo oferece feedback visual e sonoro através de um display LCD, LEDs e um buzzer. O código, escrito em Arduino, inclui uma contagem regressiva antes do início da partida e uma melodia de fundo durante o jogo.

# Engajamento do Público:
<p>A Fórmula E é uma categoria de automobilismo que promove a sustentabilidade, a educação e a inovação. Ao criar um jogo interativo que simula uma corrida dessa categoria, o projeto se alinha perfeitamente aos valores da Fórmula E e atrai a atenção de um público amplo, incluindo entusiastas de tecnologia, aficionados por automobilismo e adeptos da sustentabilidade.</p>

> 1) Engajamento do Público: Atraindo entusiastas de tecnologia e automobilismo, o jogo simula corridas da Fórmula E, alinhando-se aos seus valores de sustentabilidade e inovação.

> 2) Visibilidade da Fórmula E: Proporciona uma experiência imersiva, tornando a Fórmula E mais acessível e estimulando o interesse do público.

> 3) Promoção da Sustentabilidade e Inovação: Destaca o compromisso da Fórmula E com a tecnologia sustentável, educando os jogadores sobre seu impacto positivo.
  
> 4) Interação e Engajamento: Incentiva os usuários a se envolverem mais profundamente com a Fórmula E, aumentando a base de fãs e o acompanhamento das corridas reais.

# Funcionamento do Jogo

## Detalhes Técnicos

### Componentes utilizados:

- Arduino Uno
- Fotoresistor (LDR - Light Dependent Resistor)
- Display LCD
- Potenciômetro
- Sensor de temperatura
- LEDs (verde, amarelo e vermelho)
- Buzzer
- Resistores
- Protoboard
- Jumpers

#### Desenvolvimento do Código
> O código do jogo foi desenvolvido em C++ utilizando a IDE do Arduino. Ele é composto por diversas funções que controlam o funcionamento do jogo. Abaixo estão as principais funcionalidades do código:

#### Configuração Inicial: 
> Inicialização do display LCD, criação de caracteres personalizados para representar o carro e os obstáculos, e configuração dos pinos do Arduino.

#### Contagem Regressiva:
> Antes do início do jogo, uma contagem regressiva é exibida no display LCD, acompanhada por acionamentos de LEDs e sons do buzzer para aumentar a expectativa.

#### Movimento dos Obstáculos:
> Durante o jogo, os obstáculos se movem pela pista em direção ao carro. Isso é feito por meio de uma função que atualiza as posições dos obstáculos a cada ciclo do loop.

#### Atualização da Tela: 
> A cada ciclo do loop, a tela é atualizada para exibir o carro e os obstáculos em suas novas posições. Isso é feito por meio da comunicação com o display LCD.

#### Verificação de Colisão:
> É verificado se houve colisão entre o carro e algum dos obstáculos. Se isso ocorrer, o jogo é reiniciado e uma mensagem de "Você Bateu!" é exibida no display.

#### Reinicialização do Jogo: 
> Após uma colisão, o jogo é reiniciado, retornando à tela de contagem regressiva e preparando-se para uma nova partida.

# Montagem do Circuito
  O circuito do jogo foi montado utilizando uma protoboard e os componentes eletrônicos listados acima. Os LEDs são utilizados para indicar as ações e eventos do jogo, enquanto o potenciômetro controla o movimento do carro e o buzzer emite sons para aumentar a imersão na experiência de corrida.
  
![tinker](https://github.com/KheyThay/MahindraGame-Challenge/assets/137129051/62de32db-e17a-46b0-8466-ff8c34d75102)


[Projeto no Tinkercad](https://www.tinkercad.com/things/3wEDWqVpDMl-mahindra-racing-game)


# Funcionamento Geral

O jogador controla o carro utilizando um botão conectado ao Arduino. Os LEDs indicam as condições do jogo, como início da partida. O display LCD exibe informações importantes para o jogador, como contagem regressiva, pontuação e mensagens de status. O buzzer emite sons de acordo com as ações do jogo, como aceleração, música e colisão.

# Conclusão

O jogo interativo de corrida desenvolvido neste projeto oferece uma experiência imersiva no mundo automobilístico, incentivando os usuários a conhecer e se envolver com a Fórmula E. Combinando componentes eletrônicos simples com programação criativa, este projeto demonstra o potencial do Arduino para criar soluções interativas e divertidas.
## Projeto desenvolvido por:

<br>Eric Megherdijian Darakjian   - RM: 557082
<br>Gabriel Miranda de F. Carpino - RM: 559102
<br>Gustavo Pierri Santos Silva   - RM: 558928
<br>Kheyla Thais Q. Paucara       - RM: 558434
<br>Vinicius Henrique Oliveira    - RM: 556908


<h5>1ESPK - Challenge || máteria de Edge computing e computer systems</h5>
