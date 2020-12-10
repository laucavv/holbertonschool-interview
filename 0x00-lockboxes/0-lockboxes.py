#!/usr/bin/python3
""" method that determines if all the boxes can be opened."""


def canUnlockAll(boxes):
    """ method that determines if all the boxes can be opened. """

    if type(boxes) is list:
        keys = [0]
        for k in keys:
            for x in boxes[k]:
                if x not in keys and x < len(boxes):
                    keys.append(x)
        if len(keys) == len(boxes):
            return True
        else:
            return False
