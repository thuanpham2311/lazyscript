sudo snap refresh
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get autoremove -y
sudo apt-get autoclean
sudo apt-get clean
nvim -c "PlugUpdate | qa"
notify-send "software fresh"


cp ~/.gitconfig  ~/git/dotfiles/git/ ; cp ~/.tmux.conf ~/git/dotfiles/tmux ; cat ~/.config/nvim/init.vim > ~/.vimrc ; cp ~/.vimrc ~/git/dotfiles/vim ; cp ~/.config/nvim/init.vim ~/git/dotfiles/nvim ; cp ~/.bashrc ~/git/dotfiles/bash ; cp ~/.config/fish/config.fish ~/git/dotfiles/fish/ ; cp ~/.config/vifm/vifmrc ~/git/dotfiles/vifm/ ; cp ~/.config/vifm/colors/Default.vifm ~/git/dotfiles/vifm/colors/ ; cp ~/.ssh/config ~/git/dotfiles/ssh/ ; cd ~/git/dotfiles ; 
git add -A ; git commit -m "$(curl -s whatthecommit.com/index.txt)"
git push

cd ~/git/dotfiles-termux ; 
git add -A ; git commit -m "$(curl -s whatthecommit.com/index.txt)"
git push

cd ~/git/mywebsite/ 
git add -A ; git commit -m "$(curl -s whatthecommit.com/index.txt)"
git push

cd ~/git/pomodoro/ 
git add -A ; git commit -m "$(curl -s whatthecommit.com/index.txt)"
git push

cd ~/git/study 
git add -A ; git commit -m "$(curl -s whatthecommit.com/index.txt)"
git push

cd ~/git/lazyscript ; git add -A
git commit -m "$(curl -s whatthecommit.com/index.txt)"
git push

cd ~/tools/hacking/sherlock/ ; git pull
cd ~/git/dotfiles ; git pull
cd ~/git/dotfiles-termux ; git pull
cd ~/git/study ; git pull
cd ~/git/mywebsite ; git pull
cd ~/git/pomodoro ; git pull
cd ~/git/lazyscript ; git pull
notify-send "git fresh"
