

# C++

<img src="./images/Why C++ is so popular among game developers_ _ Geekboots.jpeg" width="800">

## Module 00:
    Module 00 is designed as Day 1 of your OOP education, giving you the essential vocabulary and basic tools you need before moving on to more advanced OOP concepts like inheritance, polymorphism, operator overloading, etc. in the subsequent modules.
    In this module we are going to learn Namespace,  classes, member functions, stdio streams,
    initialization lists, static, const, and some other basic stuf

## The purpose of OOP :
    Write code once, use it many times through classes and objects
    Reduces code duplication and development time
    Makes code more intuitive and easier to understand

## Some vids:

| Topic               | Link |
|---------------------|------|
| 🚁 C++ OOP - Introduction to classes and objects for beginners| [Watch here](https://www.youtube.com/watch?v=iVLQeWbgbXs&list=PL43pGnjiVwgTJg7uz8KUGdXRdGKE0W_jN&ab_channel=CodeBeauty) |    
| 🚁 Bro code           | [Watch here](https://www.youtube.com/watch?v=-TkoO8Z07hI&ab_channel=BroCode) |    
| 🚁 One of the best courses     | [Watch here](https://www.youtube.com/watch?v=ZzaPdXTrSb8&ab_channel=ProgrammingwithMosh) |     
 





<!-- -------------------------------------------------------------------------

# what is OOP
# how can OOP will help me in my project 


## What to study :   
-  **1.Networking Basics:**   
         - TCP/IP Addressing: Understand IP addresses, subnet masks, and routing.   
         - Devices like routers and how they interact in a network.   
         - Common networking issues and troubleshooting strategies.    
-------

-  **2.Practical Network Configuration:**   
         - How to set up and configure networks to make them functional.  
         - Reading and interpreting network diagrams.  
-------
-  **3.Using the Training Interface:**  
         - Familiarize yourself with the provided web-based training platform.  
-------

-  **4.Logs and Error Diagnosis:**    
         - Understand how to use logs to identify and fix configuration problems. 
-------
======= -->


Let's go to learn new things:   
# Namespace:
    This helps you to have same name function without any throwing any errors
    ## More Complex C++ Examples

**Class Example:**
```markdown
```cpp
#include <iostream>

namespace Grade3
{
	void alex()
	{
		std::cout << " I am alex from 3nd Grade" << std::endl;
	}
}

namespace Grade2
{
	void alex()
	{
		std::cout << " I am alex from 2nd Grade" << std::endl;
	}
}

int main()
{

	Grade3::alex();
	Grade2::alex();
	return 0;
}
``` 
## Where are we going to use it in this module?
The exercises don't require you to create custom namespaces. You'll focus on:

    Classes (PhoneBook, Contact, Account)
    Member functions
    Standard library usage
*Required by rules*: Document forbids using namespace std;
*Remember: Every time you use standard library features, you MUST prefix them with std:: - this is your main namespace usage in Module 00!*
## Key OOP Principles:

1. Encapsulation: Hide internal details, expose only what's necessary   
2. Inheritance  : Create new classes based on existing ones    
3. Polymorphism : Same interface, different implementations    
4. Abstraction  : Focus on what an object does, not how it does it

## Type of Netwok:   
      We have 4 type of networking    
         1.PAN  (Personal Area Network):   
                  for Personal devive    
                  (e.g. Phone, computer, other device..)   
         2.LAN (Local Area Network) :           
                  Group of devives that connnected to the Wi-Fi (inside of our Wi-fi box has a switch and router do not worry about that we will clarify it more)   
                  (e.g: cluster, home)    
         3.WAN (Wide Area Network) :    
                  is a group of LAN    
                \t  e.g: group of houses.   
         4.MAN (Metropolitan Area Network):    
                  e.g: A company with offices in different cities or countries connected to the same network.   
## router, hub and switch:

## Hub: 
     🚀 Hub: Imagine we have 4 devices (hosts), and I want to send a message from host-1 to host-4. I would need a hub, which will broadcast the message to all the hosts—host-1, host-2, host-3, and host-4. The hub doesn’t filter the traffic, so it sends the message to everyone in the network.

---
## Switch:
    🚀 Switch: Now, imagine the same scenario with a switch. Instead of sending the message to all devices, the switch will intelligently forward the message from host-1 to host-4 without broadcasting it to the other hosts. The switch creates a more efficient and focused communication path.
---
💜 .Conclusion: Both the hub and the switch help create a network, but while the hub broadcasts data to all devices, the switch directs it to the intended destination only.

## Router:  
    🚀 Router: Now, let's introduce a router. Suppose we have 4 different networks, each consisting of a switch and several hosts. If I want to send a message from net-1-host-2 to net-3-host-1, I need a router to connect these networks. The router ensures that messages can travel between different networks, enabling communication between hosts in different locations.

💜 .Conclusion: The router connects networks together, enabling communication across different segments.

## Summary:  

🚀 **Summary**:
- **Hub**: Broadcasts messages to all devices.  
- **Switch**: Directly sends messages to the correct device, improving efficiency.  
- **Router**: Connects different networks, allowing communication across them.

# TCP/IP Overview

TCP/IP is a suite of communication protocols used to interconnect network devices on the internet. It consists of four layers, each with specific rules (protocols) that define how data moves through a network. Below is a breakdown of each layer and its purpose.

---

## Layers of TCP/IP

### 1. Application Layer (What You See: Audio, Websites, Emails)
📌 **Purpose**: Handles user interactions, such as opening a website or sending an email.  
📌 **Main Protocols**:  
- **HTTP/HTTPS**: Browsing websites.  
- **FTP**: Transferring files.  
- **SMTP/POP3/IMAP**: Sending and receiving emails.  
- **DNS**: Converts domain names (e.g., `google.com`) into IP addresses.  

---

### 2. Transport Layer (Data Control)
📌 **Purpose**: Ensures reliable or fast delivery of data.  
📌 **Main Protocols**:  
- **TCP**: Reliable, checks for errors (e.g., web browsing, emails).  
- **UDP**: Fast, no error checking (e.g., video calls, gaming).  

📢 **Easy Way to Remember**:  
- **TCP** = "Phone Call" 📞 (Ensures you hear every word).  
- **UDP** = "Shouting in a Crowd" 📢 (Fast but may miss words).  

---

### 3. Internet Layer (Addressing & Routing)
📌 **Purpose**: Finds the best path for data to travel between devices.  
📌 **Main Protocols**:  
- **IP (Internet Protocol)**: Assigns addresses (e.g., `192.168.1.1`).  
- **ICMP**: Error reporting (used by `ping` to check if a server is online).  
- **ARP**: Finds MAC addresses for a given IP.  

📢 **Easy Way to Remember**:  
- **IP** = "Address on a Letter" 🏠 (Tells where to send data).  
- **ICMP** = "Mailman Ringing Your Doorbell" 🔔 (Checking if you're home).  
- **ARP** = "Asking for Directions" 🗺️ (Finding the exact house).  

---

### 4. Network Access Layer (Physical Connection)
📌 **Purpose**: Moves raw data through wires, Wi-Fi, or cables.  
📌 **Main Protocols**:  
- **Ethernet**: Used in wired networks.  
- **Wi-Fi**: Wireless connections.  
- **PPP (Point-to-Point Protocol)**: Used for direct connections (e.g., VPNs).  

📢 **Easy Way to Remember**:  
This is like the roads for your data! 🚗🚦 (Wi-Fi or cables carry the info).  

---

## Summary
TCP/IP is a simplified version of the OSI model, focusing on how data transmission occurs across networks. Each layer plays a critical role in ensuring data is sent and received accurately and efficiently.  

<img src="/images/Screen Shot 2025-02-02 at 01.29.53.png" width="800">

---


---------

" they're teaching you how to think like a software architect, not just a coder "
Wa_hassan </>                  