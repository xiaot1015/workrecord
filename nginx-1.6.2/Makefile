
default:	build

clean:
	rm -rf Makefile objs

build:
	$(MAKE) -f objs/Makefile
	$(MAKE) -f objs/Makefile manpage

install:
	$(MAKE) -f objs/Makefile install

upgrade:
	~/webroot/nginx162/sbin/nginx -t

	kill -USR2 `cat ~/webroot/nginx162/logs/nginx.pid`
	sleep 1
	test -f ~/webroot/nginx162/logs/nginx.pid.oldbin

	kill -QUIT `cat ~/webroot/nginx162/logs/nginx.pid.oldbin`
