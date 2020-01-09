# Some useful commands

## Vim 

:noh	shortcut for :nohlsearch

gg=G	fix indentation

ctrl+o	last cursor position
ctrl+i	next cursor position

#### git
[c	prev git hunk
	
]c	next git hunk

leader hs  stage hunk

#### youcompleteme

Create file *.ycm_extra_conf.py* with
```
def Settings( **kwargs ):
  return {
    'flags': [ '-x', 'c++', '-Wall', '-Wextra', '-Werror' ],
  }
```
Add `let g:ycm_global_ycm_extra_conf = <filepath>'
============================

## linux

'''
Create virutal memory:

[root@]# mkdir /opt/images/
[root@]# rm -rf /opt/images/swap
[root@]# dd if=/dev/zero of=/opt/images/swap bs=1024 count=2048000
[root@]# mkswap /opt/images/swap
[root@]# swapon /opt/images/swap

Disable virtual memory:

[root@]# swapoff swap
[root@]# rm -f /opt/images/swap      //optional, could leave it for future use.
'''
