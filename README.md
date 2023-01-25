# Lab 2
[Fork](https://docs.github.com/en/get-started/quickstart/fork-a-repo) this repo and clone it to your machine to get started!

## Team Members
- Eric Chen

## Lab Question Answers

Answer for Question 1:  
    After imposing a 50% loss to my local environment, some digits were not transmitted over to the other end of my UDP server. This occurred because the added 50% loss to my local environment significantly decreased the reliability of my UDP server because UDP has no lost packet retransmission, resulting in missing or incomplete data at my other end. Hence the 50% loss impacted the reliability of UDP.

Answer for Question 2:  
    The reliability of TCP did not change, all the digits that were sent on one end were received on the other. The reason for that is because TCP ensures that data is not damaged, lost, duplicated, or delivered out of order to a receiving process. Hence the 50% loss will not decrease its reliability.

Answer for Question 3:  
    The speed of receiving a transmission is significantly slower with the imposed 50%. Since some packets are lost from the imposed penalty, the TCP re-transmits the message until the other end receives it. But this causes “lag”, and pushes back other transmissions that were already sent on my ends. Hence the loss impacted the speed of TCP transmission.

Answer for 2.1:  
  
    argc is an integer that indicates how many arguments were entered in the command 
    line at execution.  
      
    argv is an array of pointers to arrays of character objects.  

Answer for 2.2:  
  
    An UNIX file descriptor is an unique number that identifies an open file in a computer's operating system. The descriptor describes a data resource, and how that resource may be accessed.  
      
    A file descriptor table is the collection of integer array indices that are file descriptors which then have pointers to file table entries.  

Answer for 2.3:  
  
    A struct is a way to group several related variables into one object type  
      
    sockaddr_in is a struct with 4 variables, short sin_family, unsigned short sin_port, struct in_addr sin_addr the in_addr struct then constains one variable unsigned_long s_addr and finally the last variable char* sin_zero  

Answer for 2.4:  
  
    The input parameters are: int domain, int type, and int protocol
  
    It returns a non-negative integer, the socket file descriptor. Otherwise, a value of -1 is returned to indicate the error.  

Answer for 2.5:
  
    Input parameters of bind: int socket, int address, and int address_len  
      
    Input parameters of listen: int socket, int backlog  

Answer for 2.6:  
  
     By using while(1) we run infinitely until the code reaches an error. This allows us to continuously communicate through the socket. This approach will run into a problem for multiple simultaneous connections because by having the while(1) to swtich connections we must terminate the current session. Hence we cannot achieve simultaneous connections because we are limited to one live session.  

Answer for 2.7: 
  
    The fork() command creates a new process, called the child process, which will then run concurrently with the process that made the fork(), aka the parent process.  
      
    By creating a number of child processes at startup, when a new client connection is received, the parent process would assign it to one of the child processes. The child process then handles the communication with the client and the parent process continues listening for new connections. This will ultimately allow the code here to handle multiple connections since we'd have the parent listening and not missing connections and child processes handling the communications so transmission is not stopped.  

Answer for 2.8:
  
    A system call is a request made by a program to the operating system to perform a specific task.  
      
    In other words to request services from the kernel, we would have to perform system calls. This would then allow the program to use controls of the computer's hardware and system resources.  












