**To make Repo in git :

```
		- make directory 
		        - inside directory ---> git init 
```
         - to configure the the github account 
		        git config --global user.name alaaAbdelrahman
		        git config --global user.email a.abdelrahman1399@gmail.com

           -to add the file to stage 
                    git add filename
                     or 
                     git add -A // to add everything in your directory
                     
          -to make a commit 
		          commit -m "commit message"
		  -to show history 
			  git log 
		         
		  - to discard changes in working directory 
				   git restore filename
		  - to make a branch 
					git branch branchName
		- to switch to branch 
			          git checkout branchName
		- to create branch and switch to it 
					  git checkout -b branchName
		- to merge branch 
		    go to branch merging happens 
				   git merge branchName
		- to delete the branch 
				git branch -d or -D nameOfBranch
		- to go to specified commit or action
		      git reset --hard or soft hashcommit
		- to see all the  changes in and history 
				git reflog
		difference between the reset and revert revert make a commit 
		 you can make sof reset using reveret --no-commit
		 - revert command
		  git revert commitHash
***merge conflict*** : happens when there is a many branches edit the same file and same lines and want to merge these branches which change will keep 

```


```
**To push to version control server**:
		- link your local repo with remote repo 
```
			git remote add nameforRepo  url
```   
		- to know remote available
				git remote 
		 - to remove linked repo 
				  git remote remove repoName
			
		- to upload the repo on version control server
			   git push -u (for upstream )  repoName branchName
**To see all branches local and remote **
```
		git branch -a
```
to push  branch to remote Repo
```
	  git push -d  remoteRepoName  branch
```
to delete  branch  from remote Repo
```
	  git push -d  remoteRepoName  branch
```

