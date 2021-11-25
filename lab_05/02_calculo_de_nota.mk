Função para média das notas, situação e nota necessária

Implemente uma função que receba como parâmetros de entrada três números reais
maiores ou iguais a 0. A função a ser implementada deve armazenar em um primeiro parâmetro a média
das notas. Em um segundo parâmetro, a função deve armazenar verdadeiro caso o aluno precise
fazer a prova de reposição (as 3 notas são maiores ou iguais a 3.0 e a média é menor que 5.0)
ou falso caso contrário. Em um terceiro parâmetro, a função deve armazenar a nota necessária para o aluno
ser aprovado (caso esteja na prova de reposição), de acordo com a regra da UFRN.

Implemente também a função main, que deve ler do usuário três números reais maiores ou iguais a 0
para as notas e exibir três tipos de mensagem, de acordo com o resultado da função:
* "Media X: aprovado"
* "Media X: em reposicao (nota necessaria: Y)"
* "Media X: reprovado" 
Exiba a média com duas casas decimais inserindo "#include <iomanip>" e "cout << fixed << setprecision(2);"
(este comando na primeira linha da função main).

Entrada: 3.2 4 3.6                 Saída: Media: 3.60: em reposicao (nota necessaria: 7.40)