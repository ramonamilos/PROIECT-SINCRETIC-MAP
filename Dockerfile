FROM gcc:latest
COPY code.c /usr/src/appCode
WORKDIR /usr/src/appCode
RUN gcc -o code code.c -lstdc++
CMD ["./code"]