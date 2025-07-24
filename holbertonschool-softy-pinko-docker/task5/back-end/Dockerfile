FROM ubuntu:latest
RUN apt-get update && apt-get upgrade -y
RUN apt install python3 -y
RUN apt install python3-pip -y
RUN rm /usr/lib/python*/EXTERNALLY-MANAGED
RUN pip3 install flask
RUN pip3 install flask-cors
COPY api.py /app/api.py
WORKDIR /app
EXPOSE 5252
CMD ["python3", "api.py"]
