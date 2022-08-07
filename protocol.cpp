#include<iostream>
#include<WS2tcpip.h>
#include<string>
#pragma comment (lib,"Ws2_32.lib")
class IUDP {
	virtual  void send(char* arr,int len) = 0 ;
	virtual void listener(int port) = 0;

};
class IOBSERVER {
	virtual void GetDAta(char* arr) = 0;
};
class UdpProtocol : public IUDP {
private:
	int port;
	std::string IP;
public:
	UdpProtocol(int port) {
		this->port = port;
		listener(port);
	}
	void send(char* arr, int len) {
		WSADATA data;
		WORD version = MAKEWORD(2, 2);
		int wsa = WSAStartup(version, &data);
		if (wsa != 0) {
			std::cout << "winsocket could not start" << std::endl;
			return;
		}
		sockaddr_in server;
		server.sin_family = AF_INET;
		server.sin_port = htons(port);
		inet_pton(AF_INET, "127.0.0.1", &server.sin_addr);
		//socket creation 
		SOCKET out = socket(AF_INET, SOCK_DGRAM, 0);
		int sendok = sendto(out, arr, len, 0, (sockaddr*)&server, sizeof(server));
		if (sendok == SOCKET_ERROR)
			std::cout << "Failed To SEND!!" << std::endl;
		closesocket(out);
		WSACleanup();
	}
	void listener(int port) {
		WSADATA data;
		WORD version = MAKEWORD(2, 2);
		int wsa = WSAStartup(version, &data);
		if (wsa != 0) {
			std::cout << "winsocket could not start" << std::endl;
			return;
		}
		//binding the socket 
		SOCKET in = socket(AF_INET, SOCK_DGRAM, 0);
		sockaddr_in serverhint;
		serverhint.sin_addr.S_un.S_addr = ADDR_ANY;
		serverhint.sin_family = AF_INET;
		serverhint.sin_port = htons(port);
		if (bind(in, (sockaddr*)&serverhint, sizeof(serverhint) == SOCKET_ERROR)) {
			std::cout << "binding the socket failed !!";
			return;
		}
		//holding the client info!!
		sockaddr_in cleint;
		int clientlen = sizeof(cleint);
		ZeroMemory(&cleint, clientlen);
		char buff[2048];
		while (true) {
			//message listening loop
			ZeroMemory(buff, 2048);
			int bytes = recvfrom(in, buff, 2048, 0, (sockaddr*)&cleint, &clientlen);
			if (bytes == SOCKET_ERROR) { std::cout << "Error While Receiving" << std::endl; continue; }
			char client_ip[256];
			ZeroMemory(client_ip, 256);
			inet_ntop(AF_INET, &cleint.sin_addr, client_ip, 256);
			std::cout << "Message Receieved From ::" << client_ip << "Message  :" << buff << std::endl;


		}
		closesocket(in);
		WSACleanup();

	}
};