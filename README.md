# GDB
> GDB: The GNU Project Debugger

![Official-GDB-logo](https://www.sourceware.org/gdb/images/archer.svg)

Welcome, This is my research about this awesome software for the Holberton School

## Intro
This project is an intorduction about GNU Project Debugger, the [[test]] folder

## The Logo
![Arch-fish](https://i.imgur.com/6xd9QwW.gif)  
The logo of GDB is an Archer fish
> The archer fish is known to shoot down bugs from low hanging plants by spitting water at them. 
for more information about this check the [logo's page][logo-info]

## Source
### Documents
* [PDF-MANUAL][manual]
* [GDB-QUICK-REF][qref1]
* [Presentation][slider]
* [GDB-Dashboard][gdb-dashboard]
* [VIM-setup][vim-gdb]
### Videos
#### English
* [9.2 - Debugging - GDB Tutorial][youtube-Chris-Bourke]
* [Introduction to GDB a tutorial - Harvard CS50][youtube-loveuala]
#### Spanish
[![](https://img.youtube.com/vi/3kcUNBnG_C0/hqdefault.jpg)][youtube-intro-gdb]

### Commands
|Code                    |Description            |
|:---------------------  |:----------------------|
|`help word`         | help of a word ex `help x`  |
|`start < file`      | start a file as stdin |
|`start args`         | start with arguments |
|`tui [enable/disbable]` | enable or disable tui                   |
|`layout [src/split/asm]` | enable or disable tui                   |
|`info stack`             | show the lines of every function call   |
|`info br`                | show the break points information       |
|`x/fmt variable`         | print variable with format `fmt=[c/s/a/d]`  |


<!--links-->
[manual]:https://sourceware.org/gdb/current/onlinedocs/gdb.pdf
[qref1]:https://users.ece.utexas.edu/~adnan/gdb-refcard.pdf
[youtube-Chris-Bourke]:https://www.youtube.com/watch?v=bWH-nL7v5F4
[youtube-loveuala]:https://www.youtube.com/watch?v=sCtY--xRUyI
[youtube-intro-gdb]:https://www.youtube.com/watch?v=3kcUNBnG_C0
[logo-info]:https://www.sourceware.org/gdb/mascot/
[slider]:https://docs.google.com/presentation/d/1CAL3Pbv0ti_6yp8Im5O9Ov-vmtcUpQ14EM8IPQNGBy8/edit?usp=sharing
[gdb-dashboard]:https://github.com/cyrus-and/gdb-dashboard
[vim-gdb]:https://www.dannyadam.com/blog/2019/05/debugging-in-vim/
