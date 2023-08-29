#pragma once

[Introdu��o]
Ol� a todos!Sejam bem - vindos ao canal Jonny Dev Studio.


No v�deo de hoje, vamos explorar um tema fundamental na programa��o : as vari�veis.





[O que � uma Vari�vel]
Primeiro, vamos entender o que exatamente � uma vari�vel.Em termos simples,
uma vari�vel � um espa�o de armazenamento no computador que pode conter diferentes tipos de dados e ser manipulada durante a execu��o de um programa.






[Import�ncia e Fun��o]
Voc� deve estar se perguntando : por que as vari�veis s�o t�o importantes ? 
Bem, elas desempenham um papel crucial ao permitir que os programas guardem e manipulem informa��es din�micas.
Imagine - como recipientes flex�veis que podem conter diversos tipos de dados, como n�meros, texto e valores l�gicos.



Mas antes de nos aprofundarmos nas vari�veis, vamos fazer uma r�pida explana��o sobre a arquitetura b�sica de um computador.





[Arquitetura B�sica do Computador]
Composta por :

- CPU(Processador) - O c�rebro do computador que executa as instru��es.
- Mem�ria RAM(VOL�TIL) - Como um bibliotec�rio que guarda temporariamente informa��es para r�pida manipula��o.
- Mem�ria Secund�ria(N�o Vol�til) - Semelhante a estantes de livros em uma biblioteca, onde dados s�o armazenados mesmo quando o computador � desligado.
- Dispositivos de Entrada de Dados - Como o atendente da biblioteca, aceitando suas solicita��es.


ta Jonny e porque voce esta falando sobre isso ...

[Papel da Mem�ria RAM]
A Mem�ria RAM � , pois ela � vol�til, servindo como um espa�o tempor�rio para armazenar e ler informa��es.
� onde as vari�veis entram em cena 
- elas s�o armazenadas na RAM enquanto o programa est� em execu��o.







[Exemplo com o Microsoft Word]
Para entender isso, pense em estar digitando um documento no  Word.Cada vez que voc� escreve algo, uma vari�vel � criada para armazenar esse texto temporariamente na RAM.
Apenas quando voc� salva o documento, o conte�do � transferido para a mem�ria secund�ria(disco r�gido).







[Import�ncia da Mem�ria RAM]
A volatilidade da RAM � evidente quando ocorre um corte de energia antes de salvar.O conte�do tempor�rio � perdido, assim como as vari�veis armazenadas.






---------------------------

[Aprofundando - se nas Vari�veis]
Agora que compreendemos a base, vamos mergulhar mais fundo no conceito de vari�veis.

Uma vari�vel � um tipo de dado armazenado no computador que pode ser modificado e manipulado.
Ela � como um compartimento onde podemos guardar informa��es que podem mudar ao longo da execu��o do programa.

[Exemplo com N�meros em C++]
Vamos ver um exemplo em C++ que envolve vari�veis num�ricas :

```cpp
#include <iostream>

int main()
{
    int idade = 25;  // Declara��o de uma vari�vel inteira chamada "idade" com valor 25
    std::cout << "Minha idade �: " << idade << std::endl;
    return 0;
}
