FROM --platform=amd64 archlinux:latest
RUN pacman -Sy base-devel arm-none-eabi-gcc arm-none-eabi-newlib git python-pip python-crcmod --noconfirm && \
    pacman -Scc --noconfirm --ask=4

WORKDIR /app
# COPY . .

# RUN git submodule update --init --recursive
#RUN make && cp firmware* compiled-firmware/
