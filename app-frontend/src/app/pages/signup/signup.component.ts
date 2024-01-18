import { Component } from '@angular/core';
import { NgModule } from '@angular/core';
import { NgForm } from '@angular/forms';
import { Title } from '@angular/platform-browser';
import Swal from 'sweetalert2';
import { FormsModule } from '@angular/forms';
import { RouterLink } from '@angular/router';


@Component({
  selector: 'app-signup',
  standalone: true,
  imports: [FormsModule, RouterLink],
  templateUrl: './signup.component.html',
  styleUrl: './signup.component.scss'
})
export class SignupComponent {
  user = { email:'', username: '', password1: '', password2: '' };
  onSubmit() {

    Swal.fire({
      title: 'Good',
      text: 'the email is = '+this.user.email+'you have inserted login = ' + this.user.username + ' and the password = ' + this.user.password1 +
      'confirmed password is ' + this.user.password2
    })
  }


  
}
