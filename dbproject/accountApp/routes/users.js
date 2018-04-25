var express=require('express');
var router= express.Router();

//LOGIN get 
router.get('/login',function(req,res){
	res.render('login');
});
//registratin Get
router.get('/register',function(req,res){
	res.render('register');
});


module.exports=router;