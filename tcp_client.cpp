#include <string> 
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <sys/socket.h> 
#include <netdb.h>
#include <netinet/in.h> 
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[]) 
{ 
	
	// Server info
	string server_ip = "localhost";
	//string server_ip = "172.20.10.12"; // uncomment this line to communicate with rpi server
	string server_port = "8881";

	int opt = 1;
	int tcp_socket = -1;

	// Create a TCP socket()
	tcp_socket = socket(AF_INET, SOCK_STREAM, 0);

	// Enable reusing address and port
	if (setsockopt(tcp_socket, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) { 
		return -1;
	}

	// Check if the client socket was set up properly
	if(tcp_socket == -1){
		printf("Error- Socket setup failed");
		return -1;
	}
	
	// Helping you out by pepping the struct for connecting to the server
	struct addrinfo hints;
	struct addrinfo *server_addr;
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	getaddrinfo(server_ip.c_str(), server_port.c_str(), &hints, &server_addr);

	// Connects the client socket to server
	if (connect(tcp_socket, server_addr->ai_addr, sizeof(*server_addr)) != 0) {
        	cout << "Connection with the server failed..." << endl;
        	return -1;
    	}
    	else{
    		cout << ("Connected to the server!") << endl;
    	}
    	
    	// Initializes a char array to store the user's message
    	char usr_msg [1000];
    	memset(usr_msg, '\0', sizeof(usr_msg)); // Clears the user message buffer
    
	
	// Retreives user input
	printf("Enter your message: ");
    	cin >> usr_msg;
	
	
	// Sends the user input to the server
	if(send(tcp_socket, usr_msg, strlen(usr_msg), 0) < 0){
		cout << "Unable to send message" << endl;
		return -1;
    	}
	
	// Recieve any messages from the server and print it here. Don't forget to make sure the string is null terminated!
	// Initializes a char array to store the server's message
	char ser_msg[1000];
	memset(ser_msg, '\0', sizeof(ser_msg));// Clears the server message buffer
	
	if(recv(tcp_socket, ser_msg, sizeof(ser_msg), 0) < 0){
		cout << "Error while receiving server's msg" << endl;
		return -1;
    	}
    	cout << "Server's response: " << ser_msg << endl;
 
    	
	
	// Close the socket
	close(tcp_socket);

	return 0; 
} 
