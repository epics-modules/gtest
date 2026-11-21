#!/usr/bin/env perl
#*************************************************************************\
#* Copyright (c) 2025 ITER Organization.
#* This module is distributed subject to a Software License Agreement found
#* in file LICENSE that is included with this distribution.
#*************************************************************************/
#
#  Author: Ralph Lange <ralph.lange@gmx.de>
#
#	testSuiteList.pl
#
#	called from RULES_GTEST
#
#	Usage: perl testSuiteList.pl < <output of test-exe --gtest_list_tests>
#              returns the names of reported test suites (lines ending in dot)
#
# (Reads a file instead of a pipe: under cmd.exe, a pipe into
# "C:/path/to/perl" fails, as cmd parses "/path" as a switch.)
#
# Put in a minimal script as the appearance of '$' characters
# inside a 'perl -e' expression cannot be written inside a Makefile
# in a way that is portable between Windows (bash, command.com) and Linux

while (my $line = <STDIN>)  {
    if ($line =~ m/^[^[:space:]]*.$/) {
        $line =~ s/.$//;
        print $line;
    }
}
