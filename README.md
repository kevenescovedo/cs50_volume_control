
# PSET 4 Volume
![wav](https://assets-v2.circle.so/e26bo04aud1368fwaldh9ir6fthc)

Os arquivos WAV são um formato de arquivo comum para representar áudio. Os arquivos WAV armazenam áudio como uma sequência de “amostras”: números que representam o valor de algum sinal de áudio em um determinado momento. Os arquivos WAV começam com um “cabeçalho” de 44 bytes que contém informações sobre o próprio arquivo, incluindo o tamanho do arquivo, o número de amostras por segundo e o tamanho de cada amostra. Após o cabeçalho, o arquivo WAV contém uma sequência de amostras, cada uma com um único inteiro de 2 bytes (16 bits) representando o sinal de áudio em um determinado momento.

Escalar cada valor de amostra por um determinado fator tem o efeito de alterar o volume do áudio. Multiplicar cada valor de amostra por 2,0, por exemplo, terá o efeito de dobrar o volume do áudio de origem. Multiplicar cada amostra por 0,5, entretanto, terá o efeito de cortar o volume pela metade.

## Tipos

Até agora, vimos vários tipos diferentes em C, incluindo int, bool, char, double, float e long. Dentro de um arquivo de cabeçalho chamado stdint.h estão as declarações de vários outros tipos que nos permitem definir com muita precisão o tamanho (em bits) e o sinal (com ou sem sinal) de um inteiro. Dois tipos em particular serão úteis para nós neste laboratório.

**uint8_t**:  é um tipo que armazena um inteiro sem sinal de 8 bits (ou seja, não negativo). Podemos tratar cada byte do cabeçalho de um arquivo WAV como um valor uint8_t.

**int16_t**: é um tipo que armazena um inteiro com sinal de 16 bits (ou seja, positivo ou negativo). Podemos tratar cada amostra de áudio em um arquivo WAV como um valor int16_t.
**Contagem/Tally**: Uma vez que todos os eleitores indicaram todas as suas preferências, determine, para cada par de candidatos, quem é o candidato preferido e com que margem ele é preferido.

# EXEMPLO
```Run
$ ./volume input.wav output.wav 2.0
```


