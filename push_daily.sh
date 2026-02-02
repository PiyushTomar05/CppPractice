#!/bin/bash

DATE=$(date +"%Y-%m-%d")
MSG="Daily C++ practice - $DATE"

git add .
git commit -m "$MSG"
git push origin main
