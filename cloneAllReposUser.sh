#! /usr/bin/env sh
# change thuanpham2311 to user you want
# this's not include private repos
# not using ssh
# if have so many repos - more 100 repos stuff like that
# change page=1 to page=2 and continue to the end
curl -s 'https://api.github.com/users/thuanpham2311/repos?page=1&per_page=100' | grep \"clone_url\" | awk '{print $2}' | sed -e 's/"//g' -e 's/,//g' | xargs -n1 git clone
