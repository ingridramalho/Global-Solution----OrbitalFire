## OrbitalFire – Sistema Inteligente de Monitoramento de Queimadas

**Descrição do Projeto**

O OrbitalFire é uma solução desenvolvida para monitorar condições ambientais associadas ao risco de queimadas. O projeto utiliza sensores conectados a um Arduino para coletar dados de temperatura, umidade e presença de fumaça em tempo real.

A proposta foi inspirada no uso de tecnologias de monitoramento remoto e processamento local de dados (Edge Computing), permitindo identificar rapidamente situações de risco e emitir alertas preventivos.

---

**Objetivo da Solução**

O objetivo do projeto é auxiliar na prevenção de queimadas por meio do monitoramento contínuo de variáveis ambientais críticas.

A solução busca identificar cenários de risco com base nos dados coletados pelos sensores, classificando o ambiente em níveis de risco baixo, médio ou crítico e acionando alertas visuais e sonoros quando necessário.

---

**Componentes Utilizados**

* Arduino Uno
* Sensor DHT22 (Temperatura e Umidade)
* Sensor MQ2 (Detecção de Fumaça e Gases)
* Display LCD 16x2 com interface I2C
* LED Verde
* LED Amarelo
* LED Vermelho
* Buzzer
* Resistores de 220Ω
* Protoboard
* Cabos de conexão

---

**Explicação do Funcionamento**

O sistema realiza a leitura contínua dos sensores DHT22 e MQ2.

Os dados obtidos são processados localmente pelo Arduino, que determina o nível de risco ambiental.

Risco Baixo

* Temperatura inferior a 30°C
* Baixa concentração de fumaça
* Acionamento do LED verde

Risco Médio

* Temperatura entre 30°C e 40°C
* Concentração moderada de fumaça
* Acionamento do LED amarelo

Risco Crítico

* Temperatura elevada e/ou alta concentração de fumaça
* Acionamento do LED vermelho
* Emissão de alerta sonoro pelo buzzer
* Exibição da mensagem de alerta no display LCD

Além disso, todas as leituras são exibidas no Monitor Serial para acompanhamento em tempo real.

---

**Estrutura do Circuito**

Sensor DHT22

* VCC → 5V
* DATA → Pino Digital 7
* GND → GND

Sensor MQ2

* VCC → 5V
* A0 → A0
* GND → GND

LEDs

* LED Verde → Pino 2
* LED Amarelo → Pino 3
* LED Vermelho → Pino 4

Buzzer

* Positivo → Pino 8
* Negativo → GND

LCD I2C

* SDA → A4
* SCL → A5
* VCC → 5V
* GND → GND

---

**Instruções de Execução**

1. Abrir o projeto no simulador Wokwi.
2. Iniciar a simulação.
3. Alterar os valores do sensor DHT22 para simular diferentes condições de temperatura e umidade.
4. Alterar os valores do sensor MQ2 para simular diferentes níveis de fumaça.
5. Observar as respostas do sistema através dos LEDs, buzzer, display LCD e Monitor Serial.
6. Verificar a mudança automática entre os níveis de risco baixo, médio e crítico.

---

**Tecnologias Utilizadas**

* Arduino C/C++
* Wokwi Simulator
* Edge Computing
* Internet das Coisas (IoT)

---

**Integrantes**

* Ingrid Ramalho Santos de Jesus
* Letícia Moreira Almeida da Silva
* Danielle Rodrigues de Freitas

---

**Link do Projeto**
- Simulação Wokwi: https://wokwi.com/projects/465672112562831361

