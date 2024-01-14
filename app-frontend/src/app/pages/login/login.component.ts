import { Component } from '@angular/core';
/* import { SweetAlert2Module } from '@sweetalert2/ngx-sweetalert2'; */
/* import { BrowserModule } from '@angular/platform-browser'; */
import { NgModule } from '@angular/core';
import Swal from 'sweetalert2';


@Component({
  selector: 'app-login',
  standalone: true,
  imports: [ ],
  templateUrl: './login.component.html',
  styleUrl: './login.component.scss'
})
export class LoginComponent {
  constructor(){

  }
  addedToCart(){
  
     Swal.fire({
      title: "Product Added",
      text: " Added To the card",
      icon: "success",
      timer:1500,
      timerProgressBar:true
    }); 
  }
  


}
