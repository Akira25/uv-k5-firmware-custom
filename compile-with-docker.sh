#!/bin/sh
docker build -t uvk5 .
docker run --rm -v ${PWD}/compiled-firmware:/app/compiled-firmware uvk5 /bin/bash -c "cd /app && make && cp firmware* compiled-firmware/"

# custom build command martin
podman run --rm -v ${PWD}:/app:z -v ${PWD}/compiled-firmware:/app/compiled-firmware:z uvk5 /bin/bash -c "cd /app && make clean && make && cp firmware* compiled-firmware/"
