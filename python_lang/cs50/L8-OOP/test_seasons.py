from seasons import date_to_minuteString
import pytest
from datetime import date, timedelta

def test_365_day_ago():
    test_date = date.today() - timedelta(days=365)
    result = date_to_minuteString(test_date)
    assert result == "Five hundred twenty-five thousand, six hundred minutes"

def test_one_day_ago():
    test_date = date.today() - timedelta(days=1)
    result = date_to_minuteString(test_date)
    assert result == "One thousand, four hundred forty minutes"



def test_same_day():
    test_date = date.today()
    result = date_to_minuteString(test_date)
    assert result == "Zero minutes"

