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
    argc is an integer that indicates how many arguments were entered in the command line at execution.  
    argv is an array of pointers to arrays of character objects.  

Answer for 2.2:  
    An UNIX file descriptor is an unique number that identifies an open file in a computer's operating system. The descriptor describes a data resource, and how that resource may be accessed.  
    A file descriptor table is the collection of integer array indices that are file descriptors which then have pointers to file table entries.  

Answer for 2.3:  
    A struct is a way to group several related variables into one object type  
    sockaddr_in is a struct with 4 variables, short sin_family, unsigned short sin_port, struct in_addr sin_addr the in_addr struct then constains one variable unsigned_long s_addr and finally the last variable char* sin_zero  

Answer for 2.4:  






