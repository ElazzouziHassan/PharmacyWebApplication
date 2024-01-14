import { Component } from '@angular/core';
/* import { SweetAlert2Module } from '@sweetalert2/ngx-sweetalert2'; */
/* import { BrowserModule } from '@angular/platform-browser'; */
import { NgModule } from '@angular/core';
import { NgForm } from '@angular/forms';
import { Title } from '@angular/platform-browser';
import Swal from 'sweetalert2';
import { FormsModule } from '@angular/forms';


@Component({
  selector: 'app-login',
  standalone: true,
  imports: [ FormsModule],
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

  
 


}
