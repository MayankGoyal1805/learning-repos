import requests

try:
    # Use headers=api_headers (plural)
    response = requests.get()

    # Check the response status code BEFORE parsing JSON ===
    response.raise_for_status() # Raises an HTTPError exception for bad responses (4xx or 5xx)

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