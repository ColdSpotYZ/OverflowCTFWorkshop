FROM alpine
RUN apk add --no-cache gcc
RUN apk add --no-cache socat
RUN apk add --no-cache libc-dev
RUN apk add --no-cache util-linux

WORKDIR /app
COPY . .

RUN gcc -o source source_actual.c

EXPOSE 8081

CMD ["socat", "TCP4-LISTEN:8081,fork", "EXEC:/app/source"]
