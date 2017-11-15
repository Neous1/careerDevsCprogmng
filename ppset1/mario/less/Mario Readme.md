Table of Contents

* [tl;dr](https://docs.cs50.net/problems/mario/less/mario.html#tl-dr)
* [Background](https://docs.cs50.net/problems/mario/less/mario.html#background)
* [Specification](https://docs.cs50.net/problems/mario/less/mario.html#specification)
* [Walkthrough](https://docs.cs50.net/problems/mario/less/mario.html#walkthrough)
* [Usage](https://docs.cs50.net/problems/mario/less/mario.html#usage)
* [Testing](https://docs.cs50.net/problems/mario/less/mario.html#testing)
  - [Correctness](https://docs.cs50.net/problems/mario/less/mario.html#correctness)
  - [Style](https://docs.cs50.net/problems/mario/less/mario.html#style)
* [Staff Solution](https://docs.cs50.net/problems/mario/less/mario.html#staff-solution)
* [Hints](https://docs.cs50.net/problems/mario/less/mario.html#hints)

# Mario

## [tl;dr](https://docs.cs50.net/problems/mario/less/mario.html#tl-dr)

Implement a program that prints out a half-pyramid of a specified height, per the below.

```
$ <span class="underline">./mario</span>
Height: <span class="underline">5</span>
    ##
   ###
  ####
 #####
######

$ <span class="underline">./mario</span>
Height: <span class="underline">3</span>
  ##
 ###
####
```

## [Background](https://docs.cs50.net/problems/mario/less/mario.html#background)

Toward the end of World 1-1 in Nintendo's Super Mario Brothers, Mario must ascend a "half-pyramid" of blocks before leaping (if he wants to maximize his score) toward a flag pole. Below is a screenshot.

## [Specification](https://docs.cs50.net/problems/mario/less/mario.html#specification)

* Write, in a file called `mario.c` in `~/workspace/pset1/mario/less/`, a program that recreates this half-pyramid using hashes (`#`) for blocks.
* To make things more interesting, first prompt the user for the half-pyramid's height, a non-negative integer no greater than `23`. (The height of the half-pyramid pictured above happens to be `8`.)
* If the user fails to provide a non-negative integer no greater than `23`, you should re-prompt for the same again.
* Then, generate (with the help of `printf` and one or more loops) the desired half-pyramid.
* Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window.

## [Walkthrough](https://docs.cs50.net/problems/mario/less/mario.html#walkthrough)

## [Usage](https://docs.cs50.net/problems/mario/less/mario.html#usage)

Your program should behave per the example below. Assumed that the underlined text is what some user has typed.

```
$ <span class="underline">./mario</span>
Height: <span class="underline">4</span>
   ##
  ###
 ####
#####
```

```
$ <span class="underline">./mario</span>
Height: <span class="underline">0</span>
```

```
$ <span class="underline">./mario</span>
Height: <span class="underline">-5</span>
Height: <span class="underline">4</span>
   ##
  ###
 ####
#####
```

```
$ <span class="underline">./mario</span>
Height: <span class="underline">-5</span>
Height: <span class="underline">five</span>
Height: <span class="underline">40</span>
Height: <span class="underline">24</span>
Height: <span class="underline">4</span>
   ##
  ###
 ####
#####
```

## [Testing](https://docs.cs50.net/problems/mario/less/mario.html#testing)

### [Correctness](https://docs.cs50.net/problems/mario/less/mario.html#correctness)

```
check50 cs50/2017/fall/mario/less
```

### [Style](https://docs.cs50.net/problems/mario/less/mario.html#style)

```
style50 mario.c
```

## [Staff Solution](https://docs.cs50.net/problems/mario/less/mario.html#staff-solution)

```
~cs50/pset1/mario
```

## [Hints](https://docs.cs50.net/problems/mario/less/mario.html#hints)

Try to establish a relationship between (a) the height the user would like the pyramid to be, (b) what row is currently being printed, and (c) how many spaces and how many hashes are in that row. Once you establish the formula, you can translate that to C!
