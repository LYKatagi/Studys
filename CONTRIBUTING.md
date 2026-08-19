# Contributing to Studys

Obrigado por querer contribuir com o Studys! Este documento descreve como adicionar novos exercícios, como executar os testes localmente e o fluxo recomendado para PRs.

## Como adicionar um novo exercício

1. Crie uma nova pasta na linguagem desejada seguindo a estrutura:

   - Exemplo: `src/c/exercises/02-control-flow/my-exercise/`
   - Dentro da pasta do exercício, inclua:
     - o(s) arquivo(s) de implementação (.c / .cpp)
     - `include/` com headers públicos (se necessário)
     - `tests/test.c` com os testes automatizados
     - `README.md` com descrição, requisitos e instruções de compilação

2. Nomeie a pasta seguindo o padrão `NN-description` (ex.: `01-basics`, `02-control-flow`) para manter a ordem por dificuldade.

3. Os testes devem compilar e rodar com GCC usando o comando mostrado nos READMEs:

```bash
# exemplo na raiz do exercício
gcc implementation.c tests/test.c -Iinclude -o test
./test