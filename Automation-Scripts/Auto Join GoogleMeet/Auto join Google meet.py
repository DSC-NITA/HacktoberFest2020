# As google won't let you login from an automated script so used stackoverflow insted of Google
# Only dependency needed is selenium and webdriver_manager (pip install selenium webdriver_manager)
# put meeting link in line 17 , your gmail in line 24 and password in line 26
# Thats it you are ready to rock

# Additionally you can add this script to the task scheduler(windows) to run it automatically at time of meeting

from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager #Use to initialize driver in a better way without having chromedriver path mentioned. 
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import WebDriverWait
import time

driver = webdriver.Chrome(ChromeDriverManager().install())  #This installs or finds the new version of chrome driver if not available and links to path automatically.
driver.implicitly_wait(5)
meet_link ="meet link"

# Authenticating via stackoverflow
def authenticate_stackoverflow():
    driver.get("https://stackoverflow.com/users/login")
    driver.find_element_by_xpath('//*[@id="openid-buttons"]/button[1]').click()
    wait=WebDriverWait(driver, 10)
    wait.until(EC.element_to_be_clickable((By.XPATH, "//*[@id=\"identifierId\"]"))).send_keys("Your Gmail")
    driver.find_element_by_xpath('//*[@id="identifierNext"]/div/button/div[2]').click()
    wait.until(EC.element_to_be_clickable((By.XPATH, "//*[@id=\"password\"]/div[1]/div/div[1]/input"))).send_keys("Your Password")
    driver.find_element_by_xpath("//*[@id=\"passwordNext\"]/div/button/div[2]").click()


# Opening Meeting after logging in
def open_meet():
    driver.get(meet_link)
    wait = WebDriverWait(driver, 10)
    wait.until(EC.element_to_be_clickable((By.XPATH,"//*[@id=\"yDmH0d\"]/div[3]/div/div[2]/div[3]/div/span/span"))).click()
    driver.implicitly_wait(5)
    wait.until(EC.element_to_be_clickable((By.XPATH,"//*[@id=\"yDmH0d\"]/c-wiz/div/div/div[5]/div[3]/div/div/div[2]/div/div/div[2]/div/div[2]/div/div[1]/div/span/span"))).click()


authenticate_stackoverflow()

# important it takes time to load Stackoverflow so adjust according to your internet speed(time in sec)
time.sleep(10)

open_meet()
