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
    if(this.user.email=="" || this.user.username=="" || this.user.password1=="" || this.user.password2=="" ){
      Swal.fire({
        icon:'warning',
        title: 'Oooops!',
        text: 'Please Fill all the Fields'
      })
    }
    else if(this.user.password1 !== this.user.password2){
      Swal.fire({
        icon:'warning',
        title: 'Oooops!',
        text: 'Password doesnt match'
      })
    }
    else{
      Swal.fire({
        icon:'success',
        title: 'Good',
        text: 'you have succesfully sign up.'
      })
    }

   
  }


  
}
