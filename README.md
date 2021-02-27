# vicOS

## Installation

* Build image
`docker build build -t vicOS`

* Create container
`docker run --rm -it -v "$pwd":/root/env vicOS`

* Compile kernel
`make build-x86_64`

* Exit container interactive terminal 
`exit`

* Launch OS using Qemu
`qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`

