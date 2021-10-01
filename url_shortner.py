from pyshorteners import Shortener
shortner = Shortener()

API_key = "5b034617cfc50af8eacb4292c24224a291f4fe26"
shortner = Shortener(api_key = API_key)

long_url = "https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.pinterest.com%2Fprior1390%2Fpokemon-images%2F&psig=AOvVaw2_xjfKW_Nvh5Ujxmqf9kR0&ust=1632317830366000&source=images&cd=vfe&ved=0CAsQjRxqFwoTCIjVm_WXkPMCFQAAAAAdAAAAABAD"
short_url = shortner.bitly.short(long_url)
print(short_url)
