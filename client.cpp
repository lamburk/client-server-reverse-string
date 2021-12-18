#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#define MAXLINE 20 
#define SERV_PORT 5777

// client program to send data to server
// server can take request from 5 client, simultaneously

int main(int argc,char *argv)
{
		char sendline[MAXLINE],revline[MAXLINE];
		int sockfd;
		struct sockaddr_in servaddr;
		
		// use the connect function to establish the connection
		connect(...);
		
}