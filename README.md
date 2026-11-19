## PI - Terminal Project
Projeto desenvolvido em linguagem C como parte da disciplina de Projeto Integrador (PI) da PUC.

O objetivo é desenvolver uma aplicação de terminal capaz de executar diferentes operações por meio de comandos digitados pelo usuário, incluindo manipulação de arquivos, leitura de textos e criptografia.

Funcionalidades
O projeto reúne diferentes funcionalidades acessíveis por meio de uma interface de linha de comando (CLI).

Comandos disponíveis

Comando	Descrição
help	Exibe a lista de comandos disponíveis.
exit	Encerra a execução do programa.
ec	Lê e imprime um texto no terminal.
create	Cria um arquivo e permite inserir seu conteúdo.
cat	Exibe no terminal o conteúdo de um arquivo.
caesar-encrypt	Criptografa um texto utilizando a Cifra de César.
caesar-decrypt	Descriptografa um texto utilizando a Cifra de César.
Funcionalidades planejadas
As seguintes funcionalidades também estão previstas no projeto, mas ainda não possuem implementação completa:

register: cadastro de usuários.
login: autenticação de usuários.
logout: encerramento da sessão.
whoami: identificação do usuário autenticado.
encrypt: criptografia de arquivos ou textos.
decrypt: descriptografia de arquivos ou textos.
Tecnologias utilizadas
Linguagem C: desenvolvimento da aplicação.
Biblioteca stdio.h: entrada e saída de dados.
Biblioteca stdlib.h: funções auxiliares e gerenciamento do programa.
Biblioteca string.h: manipulação de strings.
Biblioteca ctype.h: classificação e manipulação de caracteres.
Estrutura do projeto

text
PI-TerminalProject/
│
├── main.c           # Arquivo principal e gerenciamento dos comandos
├── ajuda.c          # Exibição das instruções de uso
├── catFunction.c    # Leitura e exibição de arquivos
├── cesarcifrar.c    # Criptografia e descriptografia de César
├── criar.c          # Criação e escrita de arquivos
├── ec.c             # Leitura e impressão de textos
│
└── README.md        # Documentação do projeto
Criptografia: Cifra de César
Uma das funcionalidades implementadas é a Cifra de César, um método clássico de criptografia por substituição.

O algoritmo desloca cada letra do texto de acordo com uma chave numérica informada pelo usuário.

O projeto permite:

Criptografar mensagens utilizando uma chave.
Descriptografar mensagens utilizando a chave correspondente.
Trabalhar com letras maiúsculas e minúsculas.
Aceitar chaves negativas.
Manipulação de arquivos
O projeto também disponibiliza operações básicas com arquivos:

Criação: permite criar um arquivo de texto e inserir conteúdo.
Leitura: permite informar o caminho de um arquivo e exibir seu conteúdo no terminal.
Desenvolvimento
Este projeto está em desenvolvimento e corresponde a uma entrega acadêmica inicial.

Embora algumas funcionalidades já estejam implementadas, outras ainda precisam de ajustes, correções e desenvolvimento.

Os próximos passos incluem:

Finalizar os comandos de autenticação.
Implementar as operações gerais de criptografia e descriptografia.
Corrigir inconsistências entre os comandos e suas respectivas funções.
Melhorar o tratamento de erros e entradas do usuário.
Aprimorar a organização e a documentação do código.
Autores
Projeto desenvolvido em grupo como parte da disciplina de Projeto Integrador da PUC.

Instituição: Pontifícia Universidade Católica (PUC).

Repositório: GS-PUC/PI-TerminalProject

Projeto acadêmico desenvolvido para aplicar conceitos de programação em C, manipulação de arquivos, algoritmos e desenvolvimento de aplicações de terminal.
