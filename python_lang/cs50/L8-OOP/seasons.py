import inflect
from datetime import date , timedelta
import sys
def main():
    try:
        date_inp = date.fromisoformat(input("Date of Birth: ").strip())
        print(date_to_minuteString(date_inp))
    except ValueError :
        sys.exit("Invalid date")


def date_to_minuteString(date_inp):
    minutes = int(((date.today()-date_inp).total_seconds())//60)
    return inflect.engine().number_to_words(minutes).capitalize().replace(" and","")+" minutes"


if __name__ == "__main__":
    main()
