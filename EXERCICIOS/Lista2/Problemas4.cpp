//Desafio 4
/*
    //QUESTÃO A
        Na primeira linha da matriz ambientData estão contidas as temperaturas do ambiente em cinco momentos diferentes. Nesse sentido, na primeira
        leitura registrous-e temperatura de 22°C, em seguida 25°C, e assim por diante atá chegar no último registro, que foi de 24°C.

    //QUESTÃO B
    Média da umidade = (45 + 38 + 42 + 40 + 37)/5
    Média da umidade = 40,4%

    Portanto, a média da umidade do solo nos cinco momentos registrados no segundo local de monitoramento é de 40,4%.

    //QUESTÃO C
    O valor máximo de concentração de CO2 no terceiro local foi de 420 ppm, que ocorreu no terceiro momento.

     //QUESTÃO D
    int totalLocais = 3;
    int totalLeituras = 5;
    int somaTemperaturas = 0;
    float mediaTemperatura = 0;
    // a temperatura está sempre na primeira linha da matriz.
    int i = 0;
    int ambientData[3][5] =
    {
      {22, 25, 23, 21, 24},
      {45, 38, 42, 40, 37},
      {400, 380, 420, 410, 390}
    };

    void setup ()
    {
       Serial.begin(9600);
    }
    void loop()
    {
        // Reseta a soma das temperaturas para o próximo local
        somaTemperaturas = 0;
        mediaTemperatura = 0;

        for (int j = 0; j < totalLeituras; j++)
        {
          somaTemperaturas += ambientData[i][j];
        }
        mediaTemperatura = somaTemperaturas / float(totalLeituras);

        //Média temperaturas
        Serial.print("Média de temperatura no local ");
        Serial.print(": ");
        Serial.println(mediaTemperatura);


        // Aguarda um tempo antes de repetir o cálculo (por exemplo, 5 segundos)
        delay(5000);
    }
*/
