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

