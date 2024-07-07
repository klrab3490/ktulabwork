#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 12345

typedef struct packet {
	int number;
} Packet;

typedef struct frame {
	int frame_kind; // ACK: 0
	int sq_no;
    int ack;
    Packet packet;
} Frame;

int main() {
    int sockfd;
    struct sockaddr_in serverAddr, clientAddr;
    socklen_t addr_size;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&serverAddr, 0,  
    sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    if (bind(sockfd, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port %d\n", PORT);

    Frame frame_recv;
    Frame frame_ack;

   
 while (1) {
        addr_size = sizeof(clientAddr);
        recvfrom(sockfd, &frame_recv,  
        sizeof(Frame), 0, (struct sockaddr  
        *)&clientAddr, &addr_size);
        printf("[+]Received number: %d\n", frame_recv.packet.number);

        // Prepare acknowledgment frame
        frame_ack.frame_kind = 0; // ACK
        frame_ack.sq_no = frame_recv.sq_no;
        frame_ack.ack = 1;

        // Send acknowledgment
        sendto(sockfd, &frame_ack, sizeof(Frame), 0, (struct sockaddr *)&clientAddr, addr_size);
        printf("[+]Sent acknowledgment for: %d\n", frame_recv.sq_no);
    }

    close(sockfd);
    return 0;
}
