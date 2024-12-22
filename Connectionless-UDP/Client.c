#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define PORT 8080
#define MAXLINE 1024

int main() {
    int sockfd;
    char buffer[MAXLINE];
    char *hello = "Hello from client";
    struct sockaddr_in servaddr;

    // Creating socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Clear the structure
    memset(&servaddr, 0, sizeof(servaddr));

    // Setting up server address
    servaddr.sin_family = AF_INET; // IPv4
    servaddr.sin_port = htons(PORT);

    // Set the server IP address (Replace with the actual IP address of the server)
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Server's IP (Localhost in this case)

    // Send message to server
    sendto(sockfd, (const char *)hello, strlen(hello), MSG_CONFIRM, (const struct sockaddr *) &servaddr, sizeof(servaddr));
    printf("Hello message sent.\n");

    int n, len;
    len = sizeof(servaddr);

    // Receive server's reply
    n = recvfrom(sockfd, (char *)buffer, MAXLINE, MSG_WAITALL, (struct sockaddr *)&servaddr, &len);
    if (n < 0) {
        perror("recvfrom failed");
        exit(EXIT_FAILURE);
    }

    buffer[n] = '\0';  // Null-terminate the received string
    printf("Server : %s\n", buffer);

    close(sockfd);  // Close the socket after communication
    return 0;
}
