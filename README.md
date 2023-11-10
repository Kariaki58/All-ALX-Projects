### Shell Basics

Learning about shell

- ls 
- cd
- pwd
- and others
In order to test your scripts, you will need to use this command: chmod u+x file.
We will see later what does chmod mean and do, but you can have a look at man chmod if you are curious.

Example

In order to test your scripts, you will need to use this command: chmod u+x file.
We will see later what does chmod mean and do, but you can have a look at man chmod if you are curious.

Example

```
julien@ubuntu:/tmp$ ls

12-file_type
lll

julien@ubuntu:/tmp$ ls -la lll
-rw-rw-r-- 1 julien julien 15 Sep 19 21:05 lll

julien@ubuntu:/tmp$ cat lll
#!/bin/bash
ls

julien@ubuntu:/tmp$ ls -l lll
-rw-rw-r-- 1 julien julien 15 Sep 19 21:05 lll

julien@ubuntu:/tmp$ chmod u+x lll # you do not have to understand this yet

julien@ubuntu:/tmp$ ls -l lll
-rwxrw-r-- 1 julien julien 15 Sep 19 21:05 lll

julien@ubuntu:/tmp$ ./lll
12-file_type
lll

julien@ubuntu:/tmp$
```
