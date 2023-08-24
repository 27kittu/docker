if [ $2 ='' ];then $2='Dockerfile'; fi
docker build -t d$1i -f $2 .
