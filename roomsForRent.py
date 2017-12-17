from craigslist import CraigslistHousing
import json

count = 0
jsonData = '{"a": 1, "b": 2, "c": 3, "d": 4, "e": 5}'
loadedJson = json.loads(jsonData)
file = open('craigslistRooms.json', 'w')
file.truncate() #erases existing file content

housingQuery = CraigslistHousing(site='sfbay', area='sfc', category='rooms-shares',
                         filters={'max_price': 800, 'min_price': 500,
                         'private_room': True, 'private_bath': True,
                         'has_image': True, 'search_distance': 2})

for result in housingQuery.get_results(sort_by='newest', geotagged=True):
    if count < 10:
        listing = result['name'] + "\n" + result['url'] + "\n\n"
        print(listing)
        file.write(listing)
        count += 1
    else:
        break
file.close()
