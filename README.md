# Chime: An Audio Data Transfer System Over Commodity Embedded Devices

Members: Cole Feely, Aidan Murray, Owen Lheron and Sashank Rao

Start Date: Sept. 27, 2022

Due Date: December 8, 2022

![My project-1 1](https://user-images.githubusercontent.com/65377055/206490235-eabfdbf4-235b-4cbc-a495-e6149f7aff4b.jpeg)


## Background
There are some communication methods of data transfer using sensing signals with low-cost sensors but these systems produce low sampling rates which are not as efficient than high cost solutions with high sampling rates. We will investigate how we can improve sensing signal data transfer with low-cost sensors with low sampling rates by minimizing the error and noise rates commonly encountered. 

## Goal
Encode data into an audio sensing signal and send it to a receiver where decoding algorithms will be performed to interpret the data. 

## Deliverables
Demonstrate our goal with a modulation that best circumvents noise from audio channels, human speech or other background interference. 
Demonstrate better a reduction in the error rate from these interferences than off the shelf solutions
Minimize decoding errors in the absence of symbol frame synchronization between the sender and receiver

## Hardware
Receiver/ Sender: Arduino Uno 
Speaker: Personal Computer Speaker or a Piezo Buzzer
Microphone: SparkFun Electret Microphone Breakout
Other: Power Supply, Capacitors, Resistors, Jumpers etc.   

## Team Roles
- Logistics: Cole Feely
- SBC: Cole Feely
- Hardware Filter: Aidan Murray
- FFT: Owen Lheron 
- Signal Deconstruction: Sash Rao 

## Block Diagram 

![SD Block Diagram ](https://user-images.githubusercontent.com/65377055/206256460-8ec77333-a1ae-4c95-b5f7-336dd3e7e460.jpeg)

## Hardware Setup


## Timeline 
#### October 12, 2022: Get something working HW

- Have speaker send sound and Microphone working
<img width="710" alt="Screen Shot 2022-12-07 at 3 19 23 PM" src="https://user-images.githubusercontent.com/65377055/206287030-3b6340cc-5003-4881-aa52-f9bef3ece410.png">

#### October 20, 2022: Get something working SW

- Get ‘Hello World’ version of the software for interpreting sound as information 

#### November 2, 2022 : Midway Design Review

- Have system finished which combines the components of the previous two milestones

#### December 8, 2022: Presentation Day

## Resources

Universal Timestamping with Ambient Sensing, SECON 2022

Google tone, 2015. (https://ai.googleblog.com/2015/05/tone-experimental-chrome-extension-for.html) 
 							
						 					
				
			
		





