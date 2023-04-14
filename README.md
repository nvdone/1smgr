# 1smgr
1C Session Manager\
\
Консольный менеджер сеансов 1С, не требующий регистрации COM-компоненты утилиты администрирования сервера 1С (динамические библиотеки папки bin 1С нужной версии и соответствующей разрядности по-прежнему необходимы).\
\
Использование: **1smgr <list [-sort:SessionId|UserName|Started|LastActive] | kill [-session:X]> [-path:"Путь к папке bin 1С"] [-server:"имясервера:порт"] [-cluster:"имя кластера 1С"] [-login:"имя администратора кластера 1С"] [-password:"пароль администратора кластера 1С"] **\
\
**list** - вывести список сеансов\
**-sort** - колонка для сортировки по команде list\
\
**kill** - завершить сеанс\
**-session:X** - номер сеанса, который необходимо завершить; если параметр не определен, или X = 0, будут закрыты все сеансы\
**-path** - путь к папке bin 1С; необходимы только содержащиеся в папке bin файлы .dll\
**-server** - имя и порт сервера 1С\
**-cluster** - наименование кластера 1С, которой необходимо обработать; если параметр не определен, будут обработаны все кластеры 1С\
**-login** - имя администратора кластера 1С; если администратор кластера не установлен, параметр определять не следует\
**-password** - пароль администратора кластера 1С; если администратор кластера не установлен, параметр определять не следует\
\
Пример: 1smgr kill -session:1234 -path:"C:\Program Files\1cv8\8.3.12.3456\bin" -server:"server.local:1540" -cluster:"Локальный кластер" -login:"clusteradmin" -password:"verysecretpassword"\
\
\
Console 1C session manager; does not require registration of 1C cluster manager COM component (dynamically-linked libraries of 1C bin installation folder of the relevant version and corresponding bitness are still required).\
\
Usage: **1smgr <list [-sort:SessionId|UserName|Started|LastActive] | kill [-session:X]> [-path:"1C installation bin folder path"] [-server:"1CServerName:port"] [-cluster:"1C cluster name"] [-login:"1C cluster admin login"] [-password:"1C cluster admin password"]**\
\
**list** - list sessions\
**-sort** - column to sort output of list command by\
\
**kill** - terminate session\
**-session:X** - id of the session to terminate. If this parameter is not defined, or its value is 0, all the sessions will be terminated\
**-path** - path to 1C bin folder; only .dll files of 1C installation are needed\
**-server** - name and port of 1C server\
**-cluster** - 1C cluster name to process; if this parameter is not defined, all 1C clusters are processed\
**-login** - 1C cluster administrator name; if no cluster administrator is set, this parameter should not be provided\
**-password** - 1C cluster administrator password; if no cluster administrator is set, this parameter should not be provided\
\
Example: 1smgr kill -session:1234 -path:"C:\Program Files\1cv8\8.3.12.3456\bin" -server:"server.local:1540" -cluster:"Local cluster" -login:"clusteradmin" -password:"verysecretpassword"
