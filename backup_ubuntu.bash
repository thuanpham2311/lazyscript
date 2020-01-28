#!/bin/bash
# necessary
sudo apt-get install ttf-mscorefonts-installer tmux curl wget git fish neofetch htop mpv gnome-tweaks trash-cli openssh-client openssh-server ibus-unikey flameshot python3-pip python-pip tldr net-tools libreoffice preload krita xclip speedtest-cli mysql-server neovim fd-find aria2c tree -y
sudo snap innstall grv
ibus restart

# chrome
wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
sudo dpkg -i google-chrome-stable_current_amd64.deb
rm -rf google-chrome-stable_current_amd64.deb

# Python setup
sudo apt-get install -y python3-pandas python3-matplotlib python3-pygame
sudo pip install csvkit
sudo pip install opencv-python
sudo pip3 install notebook
sudo pip3 install pylint
sudo pip3 install numpy

# nvim setup
curl -fLo ~/.local/share/nvim/site/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
nvim +{PlugInstall}

chsh -s "$(which fish)"
ssh-keygen
echo "
hide top bar extension
"
