#!/usr/bin/env python3
import argparse
"""Rew2SigmaStudio, a script to convert from REW to SigmaStudio MLSSA text format."""
parser = argparse.ArgumentParser(description='Convert REW files for use in SigmaStudio.')
parser.add_argument('input', help='Input File')
parser.add_argument('-o', '--output', help='Output File')
args = parser.parse_args()
if not args.output:
    args.output = '{}-MLSSA.txt'.format(args.input)
with open(args.input, 'r') as infile:
    with open(args.output, 'w') as outfile:
        print('"MLSSA text file for SigmaStudio converted from REW."', file=outfile)
        print('      "Hz"  "Mag (dB)"       "deg"', file=outfile)
        for line in infile:
            if not line.startswith('*'):
                tokens = line.split(maxsplit=3)
                print(', '.join([token.rjust(10) for token in tokens]), file=outfile)