#!/bin/bash

if [ -d "/usr/bin/blikvm" ]
then
    echo '/usr/bin/blikvm exists'
else
    mkdir -p "/usr/bin/blikvm"
fi

cp /opt/bin/blikvm/src/kvmd-main /usr/bin/blikvm/kvmd-main

mkdir -p "/usr/lib/systemd/system"
cp kvmd-main.service "/usr/lib/systemd/system"

systemctl enable kvmd-main.service
echo "install kvmd main ok"