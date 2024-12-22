#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

int main(int argc, char const* argv[]) {
    char msg[200];
    int sersid = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in servAddr;

    servAddr.sin_family = AF_INET;
    servAddr.sin_port = htons(9001);
    servAddr.sin_addr.s_addr = INADDR_ANY;

    bind(sersid, (struct sockaddr*)&servAddr, sizeof(servAddr));
    listen(sersid, 1);

    int clientSocket = accept(sersid, NULL, NULL);

    send(clientSocket, "hello Client", strlen("hello Client"), 0);

    close(clientSocket);
    close(sersid);

    return 0;
}
