FROM gcc:latest
WORKDIR /usr/src/appCode
COPY code.c .
RUN gcc -o code code.c -lstdc++
CMD ["./code"]