/*
 * test.cpp
 *
 *  Created on: Jan 23, 2017
 *      Author: robertwinke
 */

#define CATCH_CONFIG_MAIN
#include <string>
#include <iostream>
#include "catch.hpp"
#include "Counter.h"


TEST_CASE("charCount") {
  Counter myCounter("alma");
  REQUIRE(myCounter.getCharCount() == 4);
}
TEST_CASE("wordCount") {
  Counter myCounter("alma bela");
  REQUIRE(myCounter.getWordCount() == 2);
}
TEST_CASE("lineCount") {
  std::string temp = "alma";
  temp += "\n";
  temp += "bela";
  Counter myCounter(temp);
  REQUIRE(myCounter.getLineCount() == 2);
}
