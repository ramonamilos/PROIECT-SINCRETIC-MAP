FROM gcc:latest
COPY code.c /appCode/
WORKDIR /appCode
RUN gcc -o code code.c -lstdc++
CMD ["./code"]