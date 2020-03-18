#Homework Unit 2

//getting a repository of git

git init//create a .git-laced subdirectory to contain the necessary files from a repository

git status//serves to determine which files are and in which command status

git add // it serves to add a new repository

git commit // is used to save in a repository and serves to confirm the changes made

git config --list // to show a list about repository information

git config --global user.name// serves to introduce your users

git config --global user mail// serves to introduce your email

git checkout //serves to undo a modified file or to recover files

git commit --amend //serves to redo the confirmation

git reset HEAD <file>//serves to undo the preparation

git revert // it is for return to an operation

git commit// to write a mensage or to confirm cato write a message or to confirm changes

git remote//show each of the remotes in your repository

git remote -v // To show the URLs that git has associated with the name

git remote add //to add a new remote

git fetch //to display the information in a file

git fetch origin //serves to show all the new work that's been sent to that server since you cloned it

git pull // serves to automatically bring and combine the remote branch with your current branch

git push origin master //it is used to share a remote file and send it to the origin of a server

git remote show //serves to see more information from a particular remote

git remote rename // serves to rename a remote

git remote rm // to delate a remote

tracked files//archivos rastread(no es comando)

Untracked files//archivos no rastreados(no es comando)

cat.ignore //list files you don't want to appear

git diff //it's to know that you've modified it into a file

git rm // used to remove git files (remove them from the preparation area)

git rm --cached //it serves to remove a file from your preparation area but without deleting it from your working directory

git mv // serves to rename a file

git clone // serves to clone a project

git log //serves to view the history of confirmation

git log -p // Shows the differences entered in each confirmation

git log --stat // serves to view statistics about modified files in each confirmation

git log --shortstat //serves to view statistics on modified files in each summarized confirmation

git log --name-only // serves to display the list of affected files

git log --name-status //serves to display the list of affected, added, modified or deleted files

git log --abbrev-commit //shows only the first few characters of the SHA-1 sum

git log --relative-date //shows documents from a certain time

git log --graph //serves to show an ASCII graph with the history of the ramifications and unions

git log --pretty //shows confirmations using an alternative format

git log --since// show confirmations since a point of time

git log --until // show the confirmation until a point of time

//fundamentals of git tagged

git tag //is to list available tagged in git

git tag -l //it's used to look for tagged with a similar pattern

git tag -a //serves to create an annotated tagged

git tag -a v1.4 -m"// -m serves to write a message

git show //serves to display the tagged information

git tag [Tagged] //  it is to create a lightweight tag

git push origin [Tagged] //it serves to share a tag

git push origins --tags //it serves to share some tags

// git alias

git config --global alias.co cheackout// serves to convert cheackout in an alias .co

git config --global alias.br branch // serves to convert branch in an alias .br

git config --global alias.ci commit // serve to convert commit in an alias .ci

git config --global alias.st status // serve to convert status in an alias .st


#3rd Unit

git branch  // serves to create a new branch

git log --online--decorate //serves to show where each branch is aimed

git checkout //serves to jump from one branch to another

git log --online --decorate --graph --all // serves to show the history of your confirmations, indicating where the pointers of your branches are and how your history has diverged

git checkout -b // Serves to create a new branch and jump  into one 

git checkout master //serves to jump a master branch

git merge //is used to merge one or more branches within wich you are 

git mergetool //it serves to start the corresponding visualization tool and will allow you to solve conflicts with it

git branch (without parameters// shows you a list of the branches present in your project

git branch -v //serves to show the last confirmation changes in each branch

git --merged // Serves to show the merged branches to which it is activated

git --no-merged //Serves to shos all branches containing un merged jobs

git fetch //serves to update your remote references

git remote //Serves to list the remote connections you have with other repositories

git remote add // Serves to create a new connection to a remote repositories

git fetch  // Retrieve all content from remote

git push [remote] [branch] //serves to throws the branch into the remote

git -vv //Serves to show you the monitoring branches you have assigned

git push origin --delete [name] //Serves to delete remotes branches

git rebase // Serves to collect one by one the changes confirmed in one branch, and reapply them on another

