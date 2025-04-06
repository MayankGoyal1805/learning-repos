import spotipy
from spotipy.oauth2 import SpotifyOAuth
from constants import *

# Set up authentication
scope = "user-read-playback-state,user-modify-playback-state"
sp = spotipy.Spotify(auth_manager=SpotifyOAuth(
    client_id= CLIENT_ID,
    client_secret=CLIENT_SECRET,
    redirect_uri="hgncb",
    scope=scope
))

# Play a specific track (requires an active Spotify client)
sp.start_playback(uris=["spotify:track:6rqhFgbbKwnb9MLmUQDhG6"])

# Control playback
# sp.pause_playback()
# sp.next_track()
# sp.previous_track()