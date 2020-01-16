#!/bin/bash

awk '{if (($2 == "Bomber" || $1 == "Bomber") && ($1 == "nicolas" || $2 == "Nicolas")) print $3}' $1
