import sys

from util import httprequest

from codeforces_importer.util.urlbuilder import Urlbuilder
from config import Codeforces
from config import PublicMethods
from exception import RequestFailureException


def fetch_problems_by_category():

    try:
        url = Urlbuilder(Codeforces.API_URL, PublicMethods.PROBLEM_SET)
        try:
            response = httprequest.send_get_request(url.get_url())
        except RequestFailureException as ex:
            raise ex
        else:
            json = response.json()
            if 'status' in json:
                if json['status'] == 'OK':
                    result = json['result']
                    problem_list = result['problems']
                    return problem_list
                else:
                    raise RequestFailureException('Request Failed: ' + json['comment'])
            else:
                raise RequestFailureException('Request Failed: Invalid response')
    except RequestFailureException as ex:
        print ex.message
        sys.exit(1)
