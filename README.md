![License](https://img.shields.io/badge/license-Apache--2.0-blue.svg)
![Language](https://img.shields.io/badge/language-C-blue.svg)

# C Programming

Repositório de aprendizado e prática da linguagem C, cobrindo desde fundamentos de sintaxe até conceitos avançados como concorrência, threads e gerenciamento de processos.

## 📚 Tópicos

| Diretório | Descrição |
|-----------|-----------|
| `hello_world/` | Primeiro programa em C e sintaxe básica |
| `variables/` | Declaração, inicialização e escopo de variáveis |
| `types/` | Tipos de dados primitivos (`int`, `float`, `char`, `double`) |
| `operators/` | Operadores aritméticos, lógicos e relacionais |
| `boolean/` | Valores booleanos e expressões lógicas |
| `io/` | Entrada e saída padrão (`printf`/`scanf`) |
| `io-bin/` | Leitura e escrita em arquivos binários |
| `file/` | Manipulação de arquivos de texto |
| `control_flow/` | Estruturas de decisão (`if`, `else`, `switch`) |
| `looping/` | Estruturas de repetição (`for`, `while`, `do-while`) |
| `arrays/` | Vetores e arrays unidimensionais |
| `matriz/` | Matrizes e arrays multidimensionais |
| `strings/` | Manipulação de strings e biblioteca `string.h` |
| `functions/` | Funções, parâmetros e retorno |
| `recursion/` | Recursão (ex: algoritmo de MDC) |
| `pointers/` | Ponteiros e aritmética de ponteiros |
| `dynamic_mem/` | Alocação dinâmica (`malloc`, `calloc`, `free`) |
| `structured_data/` | Estruturas (`struct`) e dados compostos |
| `enums/` | Enumerações |
| `modules/` | Modularização de código (`.h` e `.c`) |
| `top-down/` | Programação top-down e decomposição de problemas |
| `logging/` | Sistemas de log |
| `debug/` | Técnicas de depuração |
| `valgrind/` | Análise de memória com Valgrind |
| `mutex/` | Exclusão mútua em programação concorrente |
| `pthreads/` | Threads POSIX |
| `processes/` | Processos e `fork` |
| `exerc/` | Exercícios práticos |

## ⚙️ Pré-requisitos

- **Compilador C:** GCC ou Clang
- **Ambiente:** Linux, macOS ou WSL
- **Ferramentas opcionais:** Valgrind (análise de memória)

## 🚀 Como Compilar e Executar
```bash
# Compilação padrão
gcc programa.c -o programa

# Com suporte a threads (módulos pthreads/mutex)
gcc programa.c -o programa -lpthread

# Executar
./programa

# Análise de memória com Valgrind
valgrind --leak-check=full ./programa

```


📄 Licença Distribuído sob a Apache License 2.0. 

Veja o arquivo [LICENSE](https://www.apache.org/licenses/LICENSE-2.0) para mais detalhes.

👤 Autor weder96

GitHub: weder96