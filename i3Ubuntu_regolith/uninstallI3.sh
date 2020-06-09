#!/usr/bin/env bash
sudo apt remove regolith-desktop i3xrocks-net-traffic i3xrocks-cpu-usage i3xrocks-time -y
sudo apt autoremove -y
sudo add-apt-repository --remove ppa:regolith-linux/release
