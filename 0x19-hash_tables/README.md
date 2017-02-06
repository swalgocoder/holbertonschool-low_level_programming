0x19. C - Hash tables



The issue is your usage of the -std=c99 option. Since strndup() isn't part of C99, and you're asking the compiler to go into standards compliant mode, it won't provide the prototype for it. It still links of course, because your C library has it.

While you may be able to coax gcc into providing it by specifying feature macros yourself, I'd say it doesn't make much sense to be in C99 compliance mode and ask for GNU extensions for example. gcc already provides a mode for this, which will solve your warning: -std=gnu99.

