FROM debian

ENV TS3SERVER_LICENSE=accept

EXPOSE 9987/udp 10011 30033

WORKDIR /home/Teams3

RUN apt-get update && \
	apt-get upgrade -y && \
	apt-get install -y wget bzip2 && \
	wget https://files.teamspeak-services.com/releases/server/3.9.1/teamspeak3-server_linux_amd64-3.9.1.tar.bz2 && \
	tar -xvf teamspeak3-server_linux_amd64-3.9.1.tar.bz2

WORKDIR /home/Teams3/teamspeak3-server_linux_amd64

ENTRYPOINT sh ts3server_minimal_runscript.sh

# docker build -t ex01 .
# docker run --rm -p 9987:9987/udp -p 10011:10011 -p 30033:30033 ex01