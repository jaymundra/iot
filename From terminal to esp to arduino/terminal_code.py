import socket

UDP_IP_ADDRESS ="192.168.43.48"
UDP_PORT_NO = 3333

sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
while True:
    Message = input()
    sock.sendto(Message.encode('utf-8'),(UDP_IP_ADDRESS,UDP_PORT_NO))