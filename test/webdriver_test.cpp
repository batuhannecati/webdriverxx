#include <webdriverxx.h>
#include <gtest/gtest.h>

const char* const kPhantomUrl = "http://localhost:7777/";

using namespace webdriverxx;

TEST(WebDriver, CanBeCreated) {
	WebDriver driver;
}

TEST(WebDriver, CanGetStatus) {
	WebDriver driver(kPhantomUrl);
	driver.GetStatus();
}
