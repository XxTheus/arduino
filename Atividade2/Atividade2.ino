#define botao1 2 //definindo uma variável para o botão na entrada digital 2
#define led1 3 //definindo uma variável para o led na entrada digital 3
#define led2 4 //definindo uma variável para o led na entrada digital 4
#define led3 5 //definindo uma variável para o led na entrada digital 5

void setup() { //Função de configuração/definição
  pinMode(botao1, INPUT); //Define o modo do pino na variável botão1 como entrada
  pinMode(led1, OUTPUT); //Define o modo do pino na variável led1 como saída
  pinMode(led2, OUTPUT); //Define o modo do pino na variável led2 como saída
  pinMode(led3, OUTPUT); //Define o modo do pino na variável led3 como saída
}

void loop() { //Ciclo de repetição
  //se
if (digitalRead(2)) { //Realiza a leitura do botão1 que está na entrada 2
  digitalWrite(3, HIGH); //Escreve led1(saída 3) como true(ligado)
  digitalWrite(4, HIGH); //Escreve led2(saída 4) como true(ligado)
  digitalWrite(5, HIGH); //Escreve led3(saída 5) como true(ligado)
  //senão
} else {
  digitalWrite(3, LOW); //Escreve led1(saída 3) como false(desligado)
  digitalWrite(4, LOW); //Escreve led2(saída 4) como false(desligado)
  digitalWrite(5, LOW); //Escreve led3(saída 5) como false(desligado)
}}
