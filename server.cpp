// Server.cpp for TCP/IP connection
// Server will accept the client's connection attempt,
// which opens up a channel of communication between the two socket endpoints.
// Server has to establish connection with 5 clients, simultaneously

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#define MAXLINE 20
#define SERV_PORT // CHECK FOR THE LOCAL PORT

int main(int argc, char *argv)
{
	// Implement the socket function
	// Your task is to complete the entire server function
	// which would accept the string from the client, and displays
	// it in reverse
	// Also, check for exception if connection cannot be established
	int sfd, len;
	char str_buf[2048];
	struct sockaddr_in servaddr, clientaddr;
	socklen_t addrlen;
	sfd = socket(...);
	
	while(1) {
		
		strrev(str_buf,len); // function to reverse the string. This should be implemented in client.cpp
		
	}
	return 0;
}
	
}