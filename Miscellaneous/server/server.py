from aiohttp import web

#async server using aiohttp module

app = web.Application()

#setting up func to return text in html format
async def index(request):

    return web.Response(text = "Hello! " , content_type  = 'text/html')

#adding the func to a router via get request method
app.router.add_get('/' , index)


async def page(request):
    data = {'msg': 'This is the page func'}
    return web.json_response(data)

app.router.add_get('/page' , page)

#setting up func to return  in json format
async def post_id(request):

    #doing exception handling
    
    try:
        user_id = request.query['id']

        resp = { 'status_code' : '200' , 'id_val' : str(user_id) }
        
        return web.json_response(resp)
    
    except Exception as e:
        
        print(e)
        resp  = { 'status_code' : '500', 'reason': str(e) }
        return web.json_response(resp)

#adding the func to a router via post request method
app.router.add_post('/user', post_id)
    


if __name__ == "__main__":
    print("Running \n")
    web.run_app(app)