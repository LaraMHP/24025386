//Exerc�cio 3
/*
//QUEST�O 1
    Como declarar o vetor cameraData
    int cameraData[10]

//QUEST�O 2
    A fun��o do c�digo caremraData[3]=analogRead(A1) � atribuir o valor retornado pela fun��o analogRead(A1),que faz a leitura do pino anal�gico A1,
    ao quarto elemento do vetor cameraDigital (a posi��o 3). Portanto, o valor lido no pino A1 ser� armazenaono �ndice 3 do vetor.

//QUEST�O 3

    //Vetor Temperaturas:
      float temperaturas[5] = {25.5, 26.0, 24.8, 27.3, 26.5};

    void setup()
    {
      // Inicializa a comunica��o serial
      Serial.begin(9600);

      for (int i = 0; i < 5; i++) {
        Serial.print("Temperatura: ");
        Serial.println(temperaturas[i]);
      }
    }

    void loop()
    {
    }

//QUEST�O 4
    A fun��o:
    for ( int i = 0; i < 4; i++)
    {
       Serial . println (ledPins[i]);
    }

    Vai iprimir no serial monitor o pino de cada um dos leds presentes no vetor ledPins. Esse vetor possui quatro elementos,
    os quais infomam onde est�o concetados cada um dos leds.


//QUEST�O 5

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


//QUEST�O 6
    Como implementar a fun��o random() :

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

//QUEST�O 7
    O c�digo:
    for(int i = 0; i < tamanhoVetor; i ++)
    {
        if (sensorReadings[ i ] == 150)
        {
            break ;
        }
    }
    Diz respeito a implementa��o de um vetor tamanhoVetor que possui x elementos. O la�o for percorre esse vetor, e se a leitura do �ndice (i) desse vetor
    for equivalente a 150, o la�o � quebrado. Oo seja, quando em uma determinada posi��o do vetor estiver o elemento 150, o la�o for � interrompido.

//QUEST�O 8
    A fun��o da instru��o sizeof(sensorData) / sizeof(sensorData[0]) � informar o tamanho de elementos em um vetor, determinando o n�mero de elementos
    que est�o presentes nele. No caso da fun��o sizeof(sensorData) vai informar o tamanho inteiro do vetor, realizando a multplica��o da quantidade de
    elementos no vetor por 4 bytes (que � o tamannho de um �nico elemento), j� a fun��o sizeof(sensorData[0] informa o tamanho de um �nico elemento do
    vetor. Dessa forma, a divis�o sizeof(sensorData) / sizeof(sensorData[0]) = quantidade de elementos * 4 bytes/4 bytes, assism, o resultado ser� a
    a quantidade de elementos no vetor, que representa o seu tamanho

*/
