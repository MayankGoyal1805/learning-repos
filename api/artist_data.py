from access_token_generation import get_acccess_token
import requests , json


# curl "https://api.spotify.com/v1/artists/4Z8W4fKeB5YxbusRsdQVPb" \
#      -H "Authorization: Bearer  BQDBKJ5eo5jxbtpWjVOj7ryS84khybFpP_lTqzV7uV-T_m0cTfwvdn5BnBSKPxKgEb11"


try:

    header={
        "Authorization": f"Bearer {get_acccess_token()}"
    }

    artist_id="2FXC3k01G6Gw61bmprjgqS?si=HMgJwN1rR4Ki7cyi2hNs9Q"
    artist_url = f"https://api.spotify.com/v1/artists/{artist_id}"

    response = (requests.get(url=artist_url,headers=header))
    # Check the response status code BEFORE parsing JSON ===
    response.raise_for_status() # Raises an HTTPError exception for bad responses (4xx or 5xx)

    print(json.dumps(response.json(),indent=2))

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