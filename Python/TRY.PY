import requests
from bs4 import BeautifulSoup
from colorama import init, Fore, Style
import sys
import os
import time

# Initialize Colorama
init(autoreset=True)

# Function to get the price
def get_price(url, asset):
    try:
        # Response from the url
        response = requests.get(url)
        response.raise_for_status()  # Raise an error for bad status codes
        # Soup object of the html content
        soup = BeautifulSoup(response.content, 'html.parser')
        # For bitcoin
        if asset == 'btc':
            price = soup.find('span', {'class': 'price'}).text  # Bitcoin works faster with the price class
        # For other altcoins
        else:
            price = soup.find('span', {'class': 'woobJfK-Xb2EM1W1o8yoE'}).text  # Other altcoins only work with this class
        return float(price.replace(",", ""))
    except AttributeError:
        print("The asset doesn't exist or it's not supported!")
        sys.exit()
    except requests.RequestException as e:
        print(f"Error fetching data: {e}")
        sys.exit()

# Asset choice
asset = input('Abbreviation of the asset: ').lower()
url = f'https://cryptowat.ch/assets/{asset}'

# Clear console
if sys.platform == 'win32':
    os.system('cls')
else:
    os.system('clear')

# Initialize the last price
last_price = 0

# Loop to continuously check the price
while True:
    # Getting the price
    price = get_price(url, asset)
    # Coloring the price according to the change
    if price > last_price:
        color = Fore.GREEN
    elif last_price > price:
        color = Fore.RED
    else:
        color = Style.RESET_ALL
  
