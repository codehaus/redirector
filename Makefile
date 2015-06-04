update:
	git push origin
	ssh root@redirector.codehaus.org "cd /etc/httpd && ./update-redirector"

connect:
	ssh root@redirector.codehaus.org