#!/bin/bash

cp Template.java $1.java
sed -i "s/Template/$1/g" $1.java 
touch $1.test
