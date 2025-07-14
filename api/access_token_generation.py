import requests
from constants import *

# curl -X POST "https://accounts.spotify.com/api/token" \
#      -H "Content-Type: application/x-www-form-urlencoded" \
#      -d "grant_type=client_credentials&client_id=your-client-id&client_secret=your-client-secret"

def main():
    print(get_acccess_token())

def get_acccess_token():

    try:

        headers = {
            "Content-Type": "application/x-www-form-urlencoded"
        }

        data = {
            "grant_type":"client_credentials",
            "client_id" : CLIENT_ID,
            "client_secret":CLIENT_SECRET
        }

        post_url = "https://accounts.spotify.com/api/token"

        response = (requests.post(url=post_url,data=data,headers=headers))

        # Check the response status code BEFORE parsing JSON ===
        response.raise_for_status() # Raises an HTTPError exception for bad responses (4xx or 5xx)

        # If raise_for_status() didn't raise an exception, the request was successful (2xx status code)


        response = response.json()
        return response["access_token"]



    # --- Error Handling ---
    except requests.exceptions.HTTPError as http_err:
        # Handle specific HTTP errors (like 401 Unauthorized, 403 Forbidden, 404 Not Found)
        print(f"HTTP error occurred: {http_err}")
        print(f"Status Code: {response.status_code}")
        print(f"Response Body: {response.text}") # Show error message from Spotify if available
        if response.status_code == 401:
            print(">>> Your Access Token is expired or invalid.")
        elif response.status_code == 403:
            print(">>> Your token doesn't have the right permissions (scopes) or is blacklisted.")

if __name__ == "__main__":
    main()