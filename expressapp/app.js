var express=require('express');
var bodyParser=require('body-parser');
var path=require('path');
var pug= require('pug');

var app=express();

var port=3000;

app.use(function(req,res,next){
	console.log('time: ', Date.now());
	next();
});

app.set('view engine','pug');
app.set('views',path.join(__dirname,'views'));

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended:false}));
app.use(express.static(path.join(__dirname,'public')));

app.get('/',function(req,res){ 
	//res.send('hello sharma');
	res.render('index',{
		title:'hello world prabhat',
		showTitle: true,
		people:['prabhat','vivek','aman']
	});
});

app.get('/about',function(req,res){
	res.render('about');
	
});
app.get('/contact',function(req,res){
	res.render('contact');
});


app.listen(port);
console.log('server started on'+ port);

module.exports=app;
