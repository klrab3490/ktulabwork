#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <time.h>

#define PORT 12345
#define MAX_BUFFER_SIZE 1024

int main() {
    int serverSocket;
    struct sockaddr_in serverAddr;

    // Create a UDP socket
    serverSocket = socket(AF_INET, SOCK_DGRAM, 0);
    if (serverSocket < 0) {
        perror("Error creating server socket");
        exit(EXIT_FAILURE);
    }

    // Initialize server address structure
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(PORT);

    // Bind socket to address
    if (bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Error binding server socket");
        close(serverSocket);
        exit(EXIT_FAILURE);
    }

    printf("Server listening!\n");

    // Server loop
    while (1) {
        struct sockaddr_in clientAddr;
        socklen_t clientAddrLen = sizeof(clientAddr);
        char buffer[MAX_BUFFER_SIZE];

        // Receive request from client
        ssize_t receivedBytes = recvfrom(serverSocket, buffer, sizeof(buffer), 0, (struct sockaddr *)&clientAddr, &clientAddrLen);
        if (receivedBytes < 0) {
            perror("Error receiving data from client");
            continue;
        }

        // Null-terminate received data to make it a valid C string
        buffer[receivedBytes] = '\0';

        printf("Received request from client: %s\n", buffer);

        // Get current time
        time_t currentTime;
        time(&currentTime);
        char *timeString = ctime(&currentTime);

        // Send time to client
        ssize_t sentBytes = sendto(serverSocket, timeString, strlen(timeString), 0, (struct sockaddr *)&clientAddr, clientAddrLen);
        if (sentBytes < 0) {
            perror("Error sending data to client");
        }

        printf("Sent time to client: %s\n", timeString);
    }

    // Close the server socket
    close(serverSocket);
    return 0;
}
