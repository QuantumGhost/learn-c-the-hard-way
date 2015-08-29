#!/usr/bin/env python
# coding=utf-8
from __future__ import (
    absolute_import, division,
    print_function, unicode_literals
)
import subprocess
import random

OPS = ['l', 'a', 'n', 'e', 's', 'w']


def test_with_random_ops(proc, num=10000):
    op_seq = '\n'.join([random.choice(OPS) for _ in range(num)]) + '\n'
    stdoutdata, stderrdata = proc.communicate(op_seq)
    if proc.returncode:
        print(proc.returncode)
        print(stderrdata)
        exit(proc.returncode)


def main():
    proc = subprocess.Popen(
        './ex19', stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    test_with_random_ops(proc, 100000)


if __name__ == '__main__':
    main()
