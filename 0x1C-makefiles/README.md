# 0x1C. C - Makefiles

```c
███╗   ███╗ █████╗ ██╗  ██╗███████╗███████╗██╗██╗     ███████╗
████╗ ████║██╔══██╗██║ ██╔╝██╔════╝██╔════╝██║██║     ██╔════╝
██╔████╔██║███████║█████╔╝ █████╗  █████╗  ██║██║     █████╗
██║╚██╔╝██║██╔══██║██╔═██╗ ██╔══╝  ██╔══╝  ██║██║     ██╔══╝
██║ ╚═╝ ██║██║  ██║██║  ██╗███████╗██║     ██║███████╗███████╗
╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚══════╝
```

## Learning Objectives

### General

* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Environment

<div>
<!-- Ubuntu --> <a href="https://ubuntu.com/" target="_blank"><img height="36px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/ubuntu-icon.svg" alt="Ubuntu"> </a> <!-- GNU Bash --> <a href="https://www.gnu.org/software/bash/" target="_blank"><img height="36px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/gnu-bash-logo.svg" alt="GNU Bash"> <!-- Vim --> <a href="https://www.vim.org/" target="_blank"><img height="36px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/Vimlogo.svg" alt="Vim text editor"> </a> <!-- c --> <a href="https://www.cprogramming.com/" target="_blank"><img height="36px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/language_c-programming.svg" alt="C programming language"> </a>
</div>

* OS: Ubuntu 20.04 LTS
* Terminal: Bash 5.0.17
* Editor: VIM 8.1
* Language: c
* Compiler: gcc 9.3.0
* ```make```: GNU Make 4.2.1
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## help

[wildcard function](https://www.gnu.org/software/make/manual/html_node/Wildcard-Function.html)
[pathsubst](https://www.gnu.org/software/make/manual/html_node/Text-Functions.html#Text-Functions)

## How to

> run the following command in the terminal:

```bash
make -f Makefile_name
```

> call an specific target

```bash
make all -f 3-Makefile
make all -f 3-Makefile
gcc  holberton.o  main.o -o school
```

```bash
make oclean -f 3-Makefile
make oclean -f 3-Makefile
rm -f  holberton.o  main.o
```

### example

```bash
$ make -f 0-Makefile
gcc main.c school.c -o school
Makefiles$ ./school
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
$
```

## Autor

>```Ronald Rivero```

## Connect

<br>
<div>
<!-- Twitter -->
<a href="https://twitter.com/ralex_uy" target="_blank"> <img align="left" alt="Ronald Rivero | Twitter" src="https://img.shields.io/twitter/follow/ralex_uy?style=social"/> </a>
<!-- Linkedin -->
<a href="https://www.linkedin.com/in/ronald-rivero/" target="_blank"> <img align="left" alt="Ronald Rivero | LinkedIn" src="https://img.shields.io/badge/LinkedIn-Follow-blue?style=social&logo=linkedin"/> </a>
<!-- Github -->
<a href="https://github.com/ralexrivero/" target="_blank"> <img align="left" src="https://img.shields.io/github/followers/ralexrivero?style=social" alt="Ralex | Github"> </a>
</br>
</div>
