import random

when = ['A long time ago', 'Yesterday', 'Before you were born', 'In future', 'Before Thanos arrived']
who = ['Shazam', 'Iron Man', 'Batman', 'Superman', 'Captain America']
went = ['Arkham Asylum', 'Gotham City', 'Stark Tower', 'Bat Cave', 'Avengers HQ']
what = ['to eat a lot of cakes', 'to fight for justice', 'to steal ice cream', 'to dance']

print(random.choice(when) + ', ' + random.choice(who) + ' went to ' + random.choice(went) + ' ' + random.choice(what) + '.')