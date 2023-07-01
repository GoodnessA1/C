#!/bin/ruby
#Does ruby regex

line = "Cat eats Meat"

if ( line =~ /Cat(.*)/)
  puts "There is a cat in the line"
end
