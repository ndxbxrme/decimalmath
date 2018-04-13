call npm version %1 --no-git-tag-version
git add --all
git commit -m %2
git push origin master
call bower version %1
git push origin --tags
npm publish