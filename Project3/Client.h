#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <sys/socket.h>
#include <string>

using namespace std;

#define MAXLINE 15000

class Client
{
public:
    Client();

    int setConnection();

    void printText(const char *);

    int id, sockfd, server_port, status;
    char server_ip[16], errorMsg[MAXLINE], filename[100];
    struct sockaddr_in server_addr;
    FILE *file;
};

#endif