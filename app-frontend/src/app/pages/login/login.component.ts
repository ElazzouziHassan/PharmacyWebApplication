import { Component, EventEmitter, Output } from '@angular/core';
/* import { SweetAlert2Module } from '@sweetalert2/ngx-sweetalert2'; */
/* import { BrowserModule } from '@angular/platform-browser'; */
import { NgModule } from '@angular/core';
import { NgForm } from '@angular/forms';
import { Title } from '@angular/platform-browser';
import Swal from 'sweetalert2';
import { FormsModule } from '@angular/forms';
import { RouterLink } from '@angular/router';
import { CommonModule,Location } from '@angular/common';
import { SignupComponent } from '../signup/signup.component';


@Component({
  selector: 'app-login',
  standalone: true,
  imports: [ FormsModule,RouterLink,CommonModule,SignupComponent],
  templateUrl: './login.component.html',
  styleUrl: './login.component.scss'
})
export class LoginComponent {

  user = { username: '', password: '' };
onSubmit() {

  if(this.user.password=="" && this.user.password==""){
    Swal.fire({
      icon:"warning",
      title:'Oooops!',
      text:'Please fill all the fields',
      timer:3000
    })
  }
  else{
    Swal.fire({
      title:'You are at search area.',
      text:'You are trying to get connected with the username :  '+ this.user.username+' and the password :' + this.user.password + ' once the APIs are inserted this functionality will be active',
      timer:3000
    })
  }


}
  constructor(private location:Location){

  }

  
 

  /*
  @Output() emitEventToDisplaySignUpComponent = new EventEmitter();
  displaySignUp(){
    this.emitEventToDisplaySignUpComponent.emit();
  }
  */
  afficherSignUp:boolean=false;

  toggleSignUp(){
    if(this.afficherSignUp==false){
      this.afficherSignUp=true;
    }else{
      this.afficherSignUp=false
    }
  }

  changeUrlOnClickToSignUp() {
    this.location.go('/Sign-up');
  }
}
