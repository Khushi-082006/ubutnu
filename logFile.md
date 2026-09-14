
TASK 1 COMMANDS

//output 

cd project4
khushi@LAPTOP-5BUIUSVC:~/project4$ pwd
/home/khushi/project4
khushi@LAPTOP-5BUIUSVC:~/project4$ ls -la
total 44
drwxr-xr-x  3 khushi khushi 4096 Sep 14 05:02 .
drwxrwxrwx 11 khushi sudo   4096 Sep 14 04:44 ..
-rw-r--r--  1 khushi khushi    0 Sep 14 04:45 1.config
-rw-r--r--  1 khushi khushi   51 Sep 14 05:00 1.congig
-rw-r--r--  1 khushi khushi  188 Sep 14 05:00 README.txt
-rw-r--r--  1 khushi khushi  529 Sep 14 05:02 application.log
-rw-r--r--  1 khushi khushi  203 Sep 14 05:02 debug.log
-rw-r--r--  1 khushi khushi  362 Sep 14 05:01 main.c
-rw-r--r--  1 khushi khushi  122 Sep 14 05:02 notes.txt
drwxr-xr-x  2 khushi khushi 4096 Sep 14 05:03 src
-rw-r--r--  1 khushi khushi  177 Sep 14 05:01 test.c
-rw-r--r--  1 khushi khushi    0 Sep 14 04:45 utilis.c
-rw-r--r--  1 khushi khushi  349 Sep 14 05:01 utlis.c
khushi@LAPTOP-5BUIUSVC:~/project4$ cat README.txt && head application.log
Student Project

Project: Linux Shell Practice
Language: C
Owner: Training Lab

Files include C source code, notes, and application logs.
Search keywords for practice: TODO, malloc, ERROR
2026-09-10 09:15:02 INFO Application started
2026-09-10 09:16:11 INFO Loading configuration
2026-09-10 09:17:45 ERROR Failed to connect to database
2026-09-10 09:18:03 INFO Retrying connection
2026-09-10 09:18:15 ERROR Connection timeout
2026-09-10 09:19:21 WARNING Using fallback configuration
2026-09-10 09:20:10 INFO Service running
2026-09-10 09:22:42 ERROR Failed to read user data
2026-09-10 09:23:17 INFO Request completed
2026-09-10 09:24:08 ERROR Invalid configuration value
khushi@LAPTOP-5BUIUSVC:~/project4$

// commands used
for navigation cd
for displaying current directory pwd
for display content in long format including hidden files ls(list) -l(long format) a(hidden files)  ls -la
for display content of readme.txt used cat with && since we are combing two commands one for readme.txt display and one for display of head of application.log
 cat README.txt && head application.log
 



 TASK 2


//output 

 cd project4
khushi@LAPTOP-5BUIUSVC:~/project4$ ls
1.config  1.congig  README.txt  application.log  debug.log  main.c  notes.txt  src  test.c  utilis.c  utlis.c
khushi@LAPTOP-5BUIUSVC:~/project4$ mkdir backup logs
khushi@LAPTOP-5BUIUSVC:~/project4$ ls
1.config  1.congig  README.txt  application.log  backup  debug.log  logs  main.c  notes.txt  src  test.c  utilis.c  utlis.c
khushi@LAPTOP-5BUIUSVC:~/project4$ mv *.log logs/
khushi@LAPTOP-5BUIUSVC:~/project4$ cd logs
khushi@LAPTOP-5BUIUSVC:~/project4/logs$ ls
application.log  debug.log
khushi@LAPTOP-5BUIUSVC:~/project4/logs$ cd
khushi@LAPTOP-5BUIUSVC:~$ cd project4
khushi@LAPTOP-5BUIUSVC:~/project4$ cp main.c backup/
khushi@LAPTOP-5BUIUSVC:~/project4$ ls
1.config  1.congig  README.txt  backup  logs  main.c  notes.txt  src  test.c  utilis.c  utlis.c
khushi@LAPTOP-5BUIUSVC:~/project4$ cd backup
khushi@LAPTOP-5BUIUSVC:~/project4/backup$ ls
main.c
khushi@LAPTOP-5BUIUSVC:~/project4/backup$ cd project4
-bash: cd: project4: No such file or directory
khushi@LAPTOP-5BUIUSVC:~/project4/backup$ cd
khushi@LAPTOP-5BUIUSVC:~$ cd project4
khushi@LAPTOP-5BUIUSVC:~/project4$ mv notes.txt project_notes.txt
khushi@LAPTOP-5BUIUSVC:~/project4$ ls
1.config  1.congig  README.txt  backup  logs  main.c  project_notes.txt  src  test.c  utilis.c  utlis.c

// commands used
for creating folders backup and logs in one command   mkdir backup logs
for moving all logs file to logs folder mv(move command) *.log(wildcard) logs/(directory name)
for creating backup of main used copy command cp(copy) main.c(filename) backup/(destination)
for renaming used move command mv notes.txt(original name) project_notes.txt(new name)



TASK 3

// OUTPUT
find *.c */*.c
main.c
test.c
utilis.c
utlis.c
backup/main.c
src/helper.c
src/old.c
khushi@LAPTOP-5BUIUSVC:~/project4$ find */
backup/
backup/main.c
logs/
logs/debug.log
logs/application.log
src/
src/helper.c
src/old.c
khushi@LAPTOP-5BUIUSVC:~/project4$  grep "malloc" -n *.c
main.c:6:    int *values = malloc(n * sizeof(int));
utlis.c:9:    int *arr = malloc(n * sizeof(int));
khushi@LAPTOP-5BUIUSVC:~/project4$ grep -r "TODO" .
./project_notes.txt:TODO: Review memory allocation in utils.c
./project_notes.txt:TODO: Add more test cases
./utlis.c:/* TODO: Add input validation */
./src/helper.c:/* TODO: Improve helper error reporting */
./src/old.c:/* TODO: Remove this legacy module */
./README.txt:Search keywords for practice: TODO, malloc, ERROR
khushi@LAPTOP-5BUIUSVC:~/project4$


//command used
 for all c file jused find command to search c file and wildcard for all find *.c */*.c
 for all repository find */
 for malloc word and line numbers grep "malloc" -n(no of line) *.c(all c files)
 for recursive i used -r grep  -r(recursive) "TODO" .(in all files)
 ls


 TASK 4

 // output
 khushi@LAPTOP-5BUIUSVC:~/project4$ ls *.c
main.c  test.c  utilis.c  utlis.c
khushi@LAPTOP-5BUIUSVC:~/project4$ ls | find *.c
main.c
test.c
utilis.c
utlis.c
khushi@LAPTOP-5BUIUSVC:~/project4/logs$ grep "ERROR" application.log | sort  >> error_report.txt
khushi@LAPTOP-5BUIUSVC:~/project4/logs$ cat error_report.txt
2026-09-10 09:17:45 ERROR Failed to connect to database
2026-09-10 09:18:15 ERROR Connection timeout
2026-09-10 09:22:42 ERROR Failed to read user data
2026-09-10 09:24:08 ERROR Invalid configuration value
khushi@LAPTOP-5BUIUSVC:~/project4$ echo "NEW LOG ENTRY" >> logs/error_report.txt
khushi@LAPTOP-5BUIUSVC:~/project4$ wc -l logs/error_report.txt
9 logs/error_report.txt
khushi@LAPTOP-5BUIUSVC:~/project4$ cut -d ';' -f3 README.txt
Student Project

Project: Linux Shell Practice
Language: C
Owner: Training Lab

Files include C source code, notes, and application logs.
Search keywords for practice: TODO, malloc, ERROR

// commands 
for display all c file ls *.c
for display using pipe ls |find *.c
for application log error   grep(for finding word) "ERROR" application.log(file name) | sort(for sort0)  >> error_report.txt(for appending result)
for display line count wc -l
for reqired field cut -d(deliminator) ";" (content) -f(for field) 


//task 5
khushi@LAPTOP-5BUIUSVC:~/project4$ gcc main.c -o main.o
khushi@LAPTOP-5BUIUSVC:~/project4$ ./main.exe
Project started successfully
