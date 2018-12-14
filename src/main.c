#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(int argc, char** argv){

    int sock;
    struct sockaddr_in server;
	struct hostent *hp;

    if(argc != 3){
        printf("Usage: echoclient <IP Address> <port>\n");
        exit(0);
    }

    if((sock = socket(PF_INET, SOCK_DGRAM, 0)) < 0){
        perror("Error creating socket");
        exit(1);
    }

    return 0;
}