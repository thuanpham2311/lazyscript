#!/bin/bash

# necessary
sudo apt-get install ttf-mscorefonts-installer neovim tmux curl wget git fortune fish neofetch htop mpv gnome-tweaks cowsay trash-cli openssh-client openssh-server ibus-unikey flameshot vifm audacity python3-pip python-pip tldr simplescreenrecorder net-tools npm nodejs nmap whois cmus bucklespring libreoffice gconftool audacity gimp preload olive-editor transmission krita xclip cmatrix -y
ibus restart
chsh -s "$(which fish)"

# chrome
wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
sudo dpkg -i google-chrome-stable_current_amd64.deb
rm -rf google-chrome-stable_current_amd64.deb

# Python setup
sudo apt-get install -y python3-pandas
sudo apt-get install python3-matplotlib
pip3 install notebook
pip3 install pylint
pip3 install numpy

# nvim setup
curl -fLo ~/.local/share/nvim/site/autoload/plug.vim --create-dirs \
    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
nvim +{PlugInstall}

ssh-keygen
