binvcs
------------------------------------------------------
###### Simple Version Control System for binary files.

This is centralized VCS to control versions of assets and other binary files on project.

User decides whether should commit have rollback capability or not. If the commit has rollback 
capability, then it is called checkpoint. The key idea of this VCS is to hold whole copies
(not just deltas) of files on every checkpoint and give user capability to decide if checkpoint
should store files or not. It is designed so to keep size of file storage low.

##### Usage

```
`binvcs init`                                      - create new repository.
`binvcs add <list-of-files-and-directories>`       - add files and directories to stage.
`binvcs rm <list-of-files-and-directories>`        - remove files and directories from head and stage.
`binvcs commit [--checkpoint] <commentary>`        - commit files to head. If `checkpoint` flag is set then create a checkpoint for future rollback.
`binvcs diff <first-commit-id> <second-commit-id>` - display differences between commits.
`binvcs status`                                    - display current stage status.
`binvcs branches`                                  - display all available branches of repository.
`binvcs branch <branch-id>`                        - switch to other branch or create new branch.
`binvcs remove-branch <branch-id>`                 - remove branch from repository (HEAD can't be removed).
`binvcs rename-branch <old-id> <new-id`>           - change branch id from <old-id> to <new-id>.
`binvcs unstage`                                   - clear stage.
`binvcs help`                                      - show brief help on commands.
`binvcs checkpoints`                               - display all available checkpoints.
`binvcs extract <commit-id>`                       - extracts stored at the time of commit project files. Commit must have a checkpoint to enable extraction.
`binvcs remove-checkpoint <commit-id>`             - make commit unrollable (if you need to free space from old checkpoints).
`binvcs checkpoint <commentary>`                   - shortcut for `binvcs commit --checkpoint <commentary>`.
`binvcs recommit [--checkpoint] <commentary>`      - revert last commit and commit changes once again. It works only if there were no changes on filesystem.
```

##### Release history

No release yet
