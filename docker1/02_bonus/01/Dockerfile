FROM debian

RUN apt-get update && apt-get upgrade -y && \
	apt-get install -y cowsay fortune lolcat

ENTRYPOINT /usr/games/cowsay | /usr/games/fortune | /usr/games/lolcat

# docker build -t 01 .
# docker run --rm -it 01
