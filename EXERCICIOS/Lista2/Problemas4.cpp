//Desafio 4
/*
    //QUEST�O A
        Na primeira linha da matriz ambientData est�o contidas as temperaturas do ambiente em cinco momentos diferentes. Nesse sentido, na primeira
        leitura registrous-e temperatura de 22�C, em seguida 25�C, e assim por diante at� chegar no �ltimo registro, que foi de 24�C.

    //QUEST�O B
    M�dia da umidade = (45 + 38 + 42 + 40 + 37)/5
    M�dia da umidade = 40,4%

    Portanto, a m�dia da umidade do solo nos cinco momentos registrados no segundo local de monitoramento � de 40,4%.

    //QUEST�O C
    O valor m�ximo de concentra��o de CO2 no terceiro local foi de 420 ppm, que ocorreu no terceiro momento.

     //QUEST�O D
    int totalLocais = 3;
    int totalLeituras = 5;
    int somaTemperaturas = 0;
    float mediaTemperatura = 0;
    // a temperatura est� sempre na primeira linha da matriz.
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
        // Reseta a soma das temperaturas para o pr�ximo local
        somaTemperaturas = 0;
        mediaTemperatura = 0;

        for (int j = 0; j < totalLeituras; j++)
        {
          somaTemperaturas += ambientData[i][j];
        }
        mediaTemperatura = somaTemperaturas / float(totalLeituras);

        //M�dia temperaturas
        Serial.print("M�dia de temperatura no local ");
        Serial.print(": ");
        Serial.println(mediaTemperatura);


        // Aguarda um tempo antes de repetir o c�lculo (por exemplo, 5 segundos)
        delay(5000);
    }
*/
