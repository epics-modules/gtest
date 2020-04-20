#!/usr/bin/env perl
#*************************************************************************\
#* Copyright (c) 2020 ITER Organization.
#* This module is distributed subject to a Software License Agreement found
#* in file LICENSE that is included with this distribution.
#*************************************************************************/
#
#  Author: Ralph Lange <ralph.lange@gmx.de>
#
#	makeFromList.pl
#
#	called from RULES_GTEST
#
#	Usage: perl makeFromList <testname>
#              reads --gtest_list_tests output from file <testname>.list
#              and creates Makefile snippet <testname>.make

$gtest = $ARGV[0];
$testlist = "$gtest.list";
$maketestlist = "$gtest.make";

open IN, "< $testlist"
    or die "$0: Can't open $testlist, $!\n";

open OUT, "> $maketestlist"
    or die "$0: Can't create $maketestlist, $!\n";
print OUT "#This Makefile created by makeFromList.pl\n\n";

my @taps;
while( my $line = <IN>)  {
    if ($line =~ m/^[^[:space:]]*.$/) {
        $line =~ s/.$//;
        chomp($line);
        push @taps, "$line.tap"
    }
}

print OUT "${gtest}_TAPFILES += ", join(' ', @taps), "\n";
print OUT "\$(${gtest}_TAPFILES) ${gtest}.xml &: $gtest\$(EXE)\n";
print OUT "\t./\$< --gtest_output_tap --gtest_output=xml:$gtest.xml\n";

close IN;
close OUT;

#	EOF makeFromList.pl
