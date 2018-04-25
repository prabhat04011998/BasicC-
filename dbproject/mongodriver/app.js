const MongoClient=require('mongodb').MongoClient; 

//connection url
const url='mongodb://localhost:27017/myproject';

MongoClient.connect(url,function(err,db){
	if(err){
		return console.dir(err);
	}
	console.log('Connected to mongodb');
	/*

	InsertDocument(db,function(){
		db.close();
	});
	*/
	/*

	InsertDocuments(db,function(){
		db.close();
	});
	*/
	
	FindDocuments(db,function(){
		db.close();
	});
	
	

/*
	QueryDocuments(db,function(){
		db.close();
	});
	*/
	/*
	
	UpdateDocument(db,function(){
		db.close();
	});
	*/
	/*

	removeDocuments(db,function() {
		db.close();
		
	});
	*/
	
});
//insert single doc
const InsertDocument=function(db,callback){
	//Get collection
	const collection=db.collection('users');
	//Insert some docs.
	collection.insert({
		name:'prabhat',
		email:'prabhat@gamil.com'
	},function(err,result){
		if(err){
			return console.dir(err);

		}
		console.log('Inserted document');
		console.log(result);
		callback(result);

	});

}


//insert multiple docs

const InsertDocuments=function(db,callback){
	//get collection
	const collection=db.collection('users');
	collection.insertMany([
	{
		name:'pikachu',
		email:'hello@gmai.com'
	},
	{
		name:'pks',
		email:'pks@gmai.com'
	},
	{
		name:'sharma',
		email:'sharma@gmai.com'
	}


		],

		function(err,result){
			if(err){
			return console.dir(err);
			}
			console.log('Inserted '+result.ops.length+' documents');
			
			callback(result);

		});
}

//find documents

const FindDocuments=function(db,callback){
	//get collection
	const collection=db.collection('users');

	collection.find({}).toArray(function(err,docs){
		if(err){
			return console.dir(err);
		
		}
		console.log('found the followind records');
		console.log(docs);
		callback(docs);


	});
}
//query documents
const QueryDocuments=function(db,callback){
	//get collection
	const collection=db.collection('users');
	collection.find({'name':'prabhat'}).toArray(function(err,docs){
		if(err){
			return console.dir(err);
		
		}
		console.log('found the followind records');
		console.log(docs);
		callback(docs);
	});


}
const UpdateDocument=function(db,callback){
	//get collection
	const collection=db.collection('users');
	collection.updateOne({name:'sharma'},
		{$set:{email:'prakks@something.com'}},
		function(err,result){
			if(err){
				return console.dir(err);
			}
			console.log('Updated documents');
			callback(result);
		});

}

//Remove Documents

const removeDocuments=function(db,callback){
	const collection=db.collection('users');
	collection.deleteOne({name:'sharma'},function(err,result){
		if(err){
			return console.dir(err);
		}
		console.log("Entry deleted ");
		console.log(result);
		callback(result);

	});
}