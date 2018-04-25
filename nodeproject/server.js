var http=require('http');
var fs=require('fs');



var host='127.0.0.1';
var port='5000';

fs.readFile('./index.html',function(err,html){
	if(err){
		console.log(err);
		return;
	}
	
	var server=http.createServer(function(req,res){
		res.statusCode=200;
		res.setHeader('Content-Type','Text/html');
		res.write(html);
		res.end();
	});

	server.listen(port,host,function(){
		console.log("server is running on port"+port);
	});


});







