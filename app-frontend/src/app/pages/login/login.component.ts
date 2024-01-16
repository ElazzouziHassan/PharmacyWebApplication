import { Component, EventEmitter, Output } from '@angular/core';
/* import { SweetAlert2Module } from '@sweetalert2/ngx-sweetalert2'; */
/* import { BrowserModule } from '@angular/platform-browser'; */
import { NgModule } from '@angular/core';
import { NgForm } from '@angular/forms';
import { Title } from '@angular/platform-browser';
import Swal from 'sweetalert2';
import { FormsModule } from '@angular/forms';
import { RouterLink } from '@angular/router';
import { CommonModule } from '@angular/common';
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

  Swal.fire({
    title:'Good',
    text:'you have inserted login = ' + this.user.username + ' and the password = ' +this.user.password
  })
}
  constructor(){

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
}
