//Exercício 3
/*
//QUESTÃO 1
    Como declarar o vetor cameraData
    int cameraData[10]

//QUESTÃO 2
    A função do código caremraData[3]=analogRead(A1) é atribuir o valor retornado pela função analogRead(A1),que faz a leitura do pino analógico A1,
    ao quarto elemento do vetor cameraDigital (a posição 3). Portanto, o valor lido no pino A1 será armazenaono índice 3 do vetor.

//QUESTÃO 3

    //Vetor Temperaturas:
      float temperaturas[5] = {25.5, 26.0, 24.8, 27.3, 26.5};

    void setup()
    {
      // Inicializa a comunicação serial
      Serial.begin(9600);

      for (int i = 0; i < 5; i++) {
        Serial.print("Temperatura: ");
        Serial.println(temperaturas[i]);
      }
    }

    void loop()
    {
    }

//QUESTÃO 4
    A função:
    for ( int i = 0; i < 4; i++)
    {
       Serial . println (ledPins[i]);
    }

    Vai iprimir no serial monitor o pino de cada um dos leds presentes no vetor ledPins. Esse vetor possui quatro elementos,
    os quais infomam onde estão concetados cada um dos leds.


//QUESTÃO 5

   int ledPins[3]={3,4,5};

   void setup()
   {
       for(int i = 0; i < 3; i++)
       {
           pinMode(ledPins[i], OUTPUT);
       }
       Serial.begin(9600);
   }
   void loop()
   {
       for ( int i = 0; i < 4; i ++)
    {
       Serial.println(ledPins[i]);
    }
   }


//QUESTÃO 6
    Como implementar a função random() :

    int randomValues[5];

    void setup()
   {
       for(int i = 0; i < 5; i++)
       {
           pinMode(randomValues[i], OUTPUT);
       }
       Serial.begin(9600);
   }
   void loop()
   {
       randomValues[i] = random(3, 13);

       for ( int i = 0; i < 5; i ++)
    {
       Serial.println(randomValues[i]);
    }
   }

//QUESTÃO 7
    O código:
    for(int i = 0; i < tamanhoVetor; i ++)
    {
        if (sensorReadings[ i ] == 150)
        {
            break ;
        }
    }
    Diz respeito a implementação de um vetor tamanhoVetor que possui x elementos. O laço for percorre esse vetor, e se a leitura do índice (i) desse vetor
    for equivalente a 150, o laço é quebrado. Oo seja, quando em uma determinada posição do vetor estiver o elemento 150, o laço for é interrompido.

//QUESTÃO 8
    A função da instrução sizeof(sensorData) / sizeof(sensorData[0]) é informar o tamanho de elementos em um vetor, determinando o número de elementos
    que estão presentes nele. No caso da função sizeof(sensorData) vai informar o tamanho inteiro do vetor, realizando a multplicação da quantidade de
    elementos no vetor por 4 bytes (que é o tamannho de um único elemento), já a função sizeof(sensorData[0] informa o tamanho de um único elemento do
    vetor. Dessa forma, a divisão sizeof(sensorData) / sizeof(sensorData[0]) = quantidade de elementos * 4 bytes/4 bytes, assism, o resultado será a
    a quantidade de elementos no vetor, que representa o seu tamanho

*/
