#!/bin/bash

function factorial()
{
    if [[ $1 -gt 1 ]]
    then
    {
        i=$(( $1 * $(factorial $(( $1 - 1 )) ) ))
        echo "$i"
    }
    else
    {
        echo "1"
    }
    fi
}

factorial $1
