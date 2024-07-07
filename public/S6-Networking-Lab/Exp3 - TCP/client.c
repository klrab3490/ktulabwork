#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    char *ip = "127.0.0.1";
    int port = 5566;
    int sock;
    struct sockaddr_in addr;
    socklen_t addr_size;
    char buffer[1024];
    int n;

    // Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("[-]Socket error");
        exit(1);
    }
    printf("[+]TCP client socket created.\n");

    // Initialize server address structure
    memset(&addr, '\0', sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = port;
    addr.sin_addr.s_addr = inet_addr(ip);

    // Connect to server
    connect(sock, (struct sockaddr*)&addr, sizeof(addr));
    printf("Connected to the server.\n");

    // Communication loop
    while (1) {
        // Clear buffer
        bzero(buffer, 1024);

        // Get user input
        printf("Enter message: ");
        fgets(buffer, 1024, stdin);
        printf("Client: %s\n", buffer);

        // Send message to server
        send(sock, buffer, strlen(buffer), 0);

        // Clear buffer
        bzero(buffer, 1024);

        // Receive response from server
        recv(sock, buffer, sizeof(buffer), 0);
        printf("Server: %s\n", buffer);
    }

    // Close socket
    close(sock);
    printf("Disconnected from the server.\n");

    return 0;
}
