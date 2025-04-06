from um import count

def test_count_in_between_word():
    assert(count("human"))==0
    assert(count("thumb"))==0
    assert(count("mummy"))==0

def test_count_just_um():
    assert(count("um"))==1
    assert(count("UM"))==1
    assert(count("Um"))==1

def test_count_in_between_string():
    assert(count("um I am stuttering um yeah"))==2
    assert(count("I need to um really work um on um thing um"))==4
    assert(count("Hello um,I um like you um Um I like um you"))==5