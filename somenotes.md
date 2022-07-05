# Some useful commands

## Vim 
| command    | explain                  |
|------------|--------------------------|
| K          | check manual<br>         |
| :noh       | shortcut for :nohlsearch |
|------------|--------------------------|
| gg=G       | fix indentation          |
| zz         | set current line center  |
|------------|--------------------------|
| ctrl+o     | last cursor position<br> |
| ctrl+i     | next cursor position<br> |
|------------|--------------------------|
| [c         | prev git hunk<br>        |
| ]c         | next git hunk<br>        |
| leader hs  | stage hunk<br>           |
|------------|--------------------------|
| ys         | add surrounding          |
| ds         | delete surrounding       |
| cs         | change surrounding  s    |
|------------|--------------------------|
| :ls        | list bffers              |
| :b<number> | switch to buffer         |
| :bn        | next buffer              |
| :bp        | previous buffer          |
| :bd        | delete current buffer    |
|------------|--------------------------|
| <c-w>hjkl  | navigating splits        |


### MarkdownPreview
MarkdownPreview<br>
MarkdownPreviewStop<br>
MarkdownPreviewToggle<br>
TableModeToggle<br>

### Tagbar
need to install ctags

#### YouCompleteMe

Create file *.ycm_extra_conf.py* with
```
def Settings( **kwargs ):
  return {
    'flags': [ '-x', 'c++', '-Wall', '-Wextra', '-Werror' ],
  }
```
Add `let g:ycm_global_ycm_extra_conf = 'filepath'` to .vimrc


## linux

Create virutal memory:

```
[root@]# mkdir /opt/images/
[root@]# rm -rf /opt/images/swap
[root@]# dd if=/dev/zero of=/opt/images/swap bs=1024 count=2048000
[root@]# mkswap /opt/images/swap
[root@]# swapon /opt/images/swap

```
Disable virtual memory:

```
[root@]# swapoff swap
[root@]# rm -f /opt/images/swap      //optional, could leave it for future use.
```

### Tools
| Name   | explain               |
|--------|-----------------------|
| ranger | terminal file manager |

