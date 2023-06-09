# 42cursus 01 Libft
<p align="center">
	<a href="#"><img src="https://game.42sp.org.br/static/assets/achievements/libftm.png"/></a>
</p>
<p align="center">
    <a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/clgz3vp5u001608l5gzuhclek/project/3083798" alt="evportel's 42 Libft Score" /></a>
</p>
<p>
    Your first own library - Summary: The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects
</p>
<p>
    Programming in C can be very tedious when you don't have access to these highly useful standard functions. This project makes you take the time to rewrite these functions, understand them, and learn how to use them. This library will help you in all your future C projects.<br>Through this project, we also give you the opportunity to expand the list of functions with your own. Take the time to expand your freedom throughout the year.
</p>
<strong>Developed during the step cadet, May 2023 - The 42 Cursus.</strong><br>

<p><h3><code>.c</code> Files</h3>Where all of your functions will be written in.</p>
<p><h3><code>.h</code> (Header)</h3>
Your header file is useful for 2 things:

First, instead of doing for example #include <code><unistd.h></code> in all of your <code>.c</code> files, you just write it once in your header and all of your <code>.c</code> files will read it from your header file.
Secondly, let's say one of your <code>.c</code> files uses another function from another <code>.c</code> file, well instead of writting that function above, just write #include <code>libft.h</code> and it will find it in your header file.
Make sure you add #include <code>libft.h</code> in all of your <code>.c</code> files.</p>

<p><h3>Makefile</h3>
Makefile is where you will create a file to compile your projects. Remember how in the piscine, you created an int main and gcc to compile the projects, well with a <strong>Makefile</strong>, you don't have to do that anymore, you just type make once you have created your Makefile.</p>

### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character.
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

Compilation command:
``` sh
make
```

[![flow-with-norm-build-tests](https://github.com/evertonportela/42cursus-01-Libft/actions/workflows/flow-with-norm-build-tests.yml/badge.svg)](https://github.com/evertonportela/42cursus-01-Libft/actions/workflows/flow-with-norm-build-tests.yml)