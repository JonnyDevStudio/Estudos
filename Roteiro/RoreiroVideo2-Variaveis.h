#pragma once

[Introdução]
Olá a todos!Sejam bem - vindos ao canal Jonny Dev Studio.


No vídeo de hoje, vamos explorar um tema fundamental na programação : as variáveis.





[O que é uma Variável]
Primeiro, vamos entender o que exatamente é uma variável.Em termos simples,
uma variável é um espaço de armazenamento no computador que pode conter diferentes tipos de dados e ser manipulada durante a execução de um programa.






[Importância e Função]
Você deve estar se perguntando : por que as variáveis são tão importantes ? 
Bem, elas desempenham um papel crucial ao permitir que os programas guardem e manipulem informações dinâmicas.
Imagine - como recipientes flexíveis que podem conter diversos tipos de dados, como números, texto e valores lógicos.



Mas antes de nos aprofundarmos nas variáveis, vamos fazer uma rápida explanação sobre a arquitetura básica de um computador.





[Arquitetura Básica do Computador]
Composta por :

- CPU(Processador) - O cérebro do computador que executa as instruções.
- Memória RAM(VOLÁTIL) - Como um bibliotecário que guarda temporariamente informações para rápida manipulação.
- Memória Secundária(Não Volátil) - Semelhante a estantes de livros em uma biblioteca, onde dados são armazenados mesmo quando o computador é desligado.
- Dispositivos de Entrada de Dados - Como o atendente da biblioteca, aceitando suas solicitações.


ta Jonny e porque voce esta falando sobre isso ...

[Papel da Memória RAM]
A Memória RAM é , pois ela é volátil, servindo como um espaço temporário para armazenar e ler informações.
É onde as variáveis entram em cena 
- elas são armazenadas na RAM enquanto o programa está em execução.







[Exemplo com o Microsoft Word]
Para entender isso, pense em estar digitando um documento no  Word.Cada vez que você escreve algo, uma variável é criada para armazenar esse texto temporariamente na RAM.
Apenas quando você salva o documento, o conteúdo é transferido para a memória secundária(disco rígido).







[Importância da Memória RAM]
A volatilidade da RAM é evidente quando ocorre um corte de energia antes de salvar.O conteúdo temporário é perdido, assim como as variáveis armazenadas.






---------------------------

[Aprofundando - se nas Variáveis]
Agora que compreendemos a base, vamos mergulhar mais fundo no conceito de variáveis.

Uma variável é um tipo de dado armazenado no computador que pode ser modificado e manipulado.
Ela é como um compartimento onde podemos guardar informações que podem mudar ao longo da execução do programa.

[Exemplo com Números em C++]
Vamos ver um exemplo em C++ que envolve variáveis numéricas :

```cpp
#include <iostream>

int main()
{
    int idade = 25;  // Declaração de uma variável inteira chamada "idade" com valor 25
    std::cout << "Minha idade é: " << idade << std::endl;
    return 0;
}
