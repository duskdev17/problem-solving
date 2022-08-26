


<!DOCTYPE html>
<html>
<head>
	<title></title>
	<link rel="stylesheet" type="text/css" href="css/bootstrap.css" />

</head>





<body>
	<div>

	<div class="container"><br>

		<h1>Registration Form</h1></div>
		
		<div class="col-lg-6 m-auto d-block">
			
			<form action="connection.php" onsubmit="return validation()" class="bg-light">
				

				<div class="form-group">
					<label for="name" class="font-weight-bold"> Name: </label>
					<input type="text" name="name" class="form-control" id="name">
					<span id="war_name" class="text-danger font-weight-bold"> </span>
				</div>


				<div class="form-group">
					<label class="font-weight-bold"> Email: </label>
					<input type="text" name="email" class="form-control" id="email">
					<span id="war_email" class="text-danger font-weight-bold"> </span>
				</div>


				<div class="form-group">
					<label class="font-weight-bold"> UserName: </label>
					<input type="text" name="username" class="form-control" id="username">
					<span id="war_username" class="text-danger font-weight-bold"> </span>
				</div>


				<div class="form-group">
					<label class="font-weight-bold"> Password: </label>
					<input type="text" name="pass" class="form-control" id="pass">
					<span id="war_passwords" class="text-danger font-weight-bold"> </span>
				</div>

				<div class="form-group">
					<label class="font-weight-bold"> Confirm Password: </label>
					<input type="text" name="conpass" class="form-control" id="conpass">
					<span id="war_confrmpass" class="text-danger font-weight-bold"> </span>
				</div>

				<div class="form-group">
					<label class="font-weight-bold"> Date of Birth: </label>
					<input type="date" name="dob" class="form-control" id="dob">
					<span id="dob" class="text-danger font-weight-bold"> </span>
				</div>

				<div class="form-group">
					<label class="font-weight-bold"> Contact Number: </label>
					<input type="text" name="contactnumber" class="form-control" id="contactnumber">
					<span id="war_contact" class="text-danger font-weight-bold"> </span>
				</div>

				
				<input type="submit" name="submit" value="submit" class="btn btn-success">


			</form><br><br>


		</div>
	</div>


	<script type="text/javascript">
		

		function validation(){

			var name = document.getElementById('name').value;
			var email = document.getElementById('email').value;
			var username = document.getElementById('username').value;
			var pass = document.getElementById('pass').value;
			var confirmpass = document.getElementById('conpass').value;
			var contactnumber = document.getElementById('contactnumber').value;
			

			//name
			if(name == ""){
				document.getElementById('war_name').innerHTML =" ** Please fill the username field";
				return false;
			}
			if((name.length <= 2) || (name.length > 20)) {
				document.getElementById('war_name').innerHTML =" ** Username lenght must be between 2 and 20";
				return false;	
			}
			if(!isNaN(name)){
				document.getElementById('war_name').innerHTML =" ** only characters are allowed";
				return false;
			}


			//email
			if(email == ""){
				document.getElementById('war_email').innerHTML =" ** Please fill the email field";
				return false;
			}
			if(email.indexOf('@') <= 0 ){
				document.getElementById('war_email').innerHTML =" ** Invalid (@) Position";
				return false;
			}

			if((email.charAt(email.length-4)!='.') && (email.charAt(email.length-3)!='.')){
				document.getElementById('war_email').innerHTML =" ** Invalid (.) Position";
				return false;
			}


			//username
			if(username == ""){
				document.getElementById('war_username').innerHTML =" ** Please fill the username field";
				return false;
			}
			if((username.length <= 2) || (username.length > 20)) {
				document.getElementById('war_username').innerHTML =" ** Username lenght must be between 2 and 20";
				return false;	
			}



			//password
			if(pass == ""){
				document.getElementById('war_passwords').innerHTML =" ** Please fill the password field";
				return false;
			}
			if((pass.length <= 5) || (pass.length > 20)) {
				document.getElementById('war_passwords').innerHTML =" ** Passwords length must be between  5 and 20";
				return false;	
			}


			//confirm password
			if(pass!=confirmpass){
				document.getElementById('war_confrmpass').innerHTML =" ** Password does not match the confirm password";
				return false;
			}

			if(confirmpass == ""){
				document.getElementById('war_confrmpass').innerHTML =" ** Please fill the confirmpassword field";
				return false;
			}


			//contactnumber
			if(contactnumber == ""){
				document.getElementById('war_contact').innerHTML =" ** Please fill the mobile Number field";
				return false;
			}
			if(isNaN(contactnumber)){
				document.getElementById('war_contact').innerHTML =" ** user must write digits only not characters";
				return false;
			}
			if(contactnumber.length!=11){
				document.getElementById('war_contact').innerHTML =" ** Mobile Number must be 10 digits only";
				return false;
			}
			
		}

	</script>

</body>
</html>