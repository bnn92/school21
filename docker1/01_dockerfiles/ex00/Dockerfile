FROM alpine

RUN apk update && \
	apk upgrade && \
	apk add emacs

ENTRYPOINT emacs

# docker build -t ex00 .
# docker run --rm -it ex00