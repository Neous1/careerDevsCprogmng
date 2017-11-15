
# Initials

## [tl;dr](https://docs.cs50.net/problems/initials/less/initials.html#tl-dr)

Implement a program that, given a person's name, prints a person's initials, per the below.

```
$ ./initials
Regulus Arcturus Black
RAB
```

## [Specification](https://docs.cs50.net/problems/initials/less/initials.html#specification)

Design and implement a program, `initials`, that, given a person's name, prints a person's initials.

* Implement your program in a file called `initials.c` in a directory called `initials`.
* Your program should prompt a user for their name using `get_string` to obtain their name as a `string`.
* You may assume that the user's input will contain only letters (uppercase and/or lowercase) plus single spaces between words. You don't need to worry about names like `Joseph Gordon-Levitt`, `Conan O&#x2019;Brien`, or `David J. Malan`!
* Your program should print the user's initials (i.e., the first letter of each word in their name) with no spaces or periods, followed by a newline (`\n`).

## [Walkthrough](https://docs.cs50.net/problems/initials/less/initials.html#walkthrough)

## [Usage](https://docs.cs50.net/problems/initials/less/initials.html#usage)

Your program should behave per the examples below. Assumed that the underlined text is what some user has typed.

```
$ <span class="underline">./initials</span>
<span class="underline">Zamyla Chan</span>
ZC
```

```
$ <span class="underline">./initials</span>
<span class="underline">robert thomas bowden</span>
RTB
```

## [Testing](https://docs.cs50.net/problems/initials/less/initials.html#testing)

### [`check50`](https://docs.cs50.net/problems/initials/less/initials.html#code-check50-code)

```
check50 cs50/2017/x/initials/less
```

## [Staff's Solution](https://docs.cs50.net/problems/initials/less/initials.html#staff-s-solution)

```
~cs50/pset2/initials
```

## [FAQs](https://docs.cs50.net/problems/initials/less/initials.html#faqs)

<dl>
<dt>Might the user&#x2019;s input start or end with spaces?</dt>
<dd>
<p>No, you may assume that the only spaces in the user&#x2019;s input will be single spaces between words. A previous version of this problem&#x2019;s walkthrough incorrectly stated that there might be spaces at the start or end of the user&#x2019;s input, but the video has since been fixed! Apologies for any confusion!</p>
</dd>
</dl>

## [Changelog](https://docs.cs50.net/problems/initials/less/initials.html#changelog)

* 2016-09-14
  - Corrected walkthrough, added FAQ about spaces at input's start and end.
* 2016-09-09
  - Initial release.
