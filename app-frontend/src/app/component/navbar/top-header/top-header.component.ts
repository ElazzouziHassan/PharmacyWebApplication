import { CommonModule, Location } from '@angular/common';
import { Component, EventEmitter, Output } from '@angular/core';
import { Router, RouterLink,RouterOutlet } from '@angular/router';
import { routes } from '../../../app.routes';

@Component({
  selector: 'top-header',
  standalone: true,
  imports: [RouterLink,CommonModule,RouterOutlet],
  templateUrl: './top-header.component.html',
  styleUrl: './top-header.component.scss'
})
export class TopHeaderComponent {

  constructor(private route:Router,private location: Location){

  }

back() {
this.route.navigateByUrl("/home");
}
  
  isLoginDisplayed:boolean=false;

  @Output() toggleDisplayLogin = new EventEmitter();
  toggleLogin(){
    this.toggleDisplayLogin.emit();
    if(this.isLoginDisplayed==true){
      this.isLoginDisplayed=false
    }else{
      this.isLoginDisplayed=true
    }
  }


  changeUrlOnClickToLogin() {
    this.location.go('/login');
  }

  changeUrlOnClickToHome(){
    this.location.go('/home');
  }
  
}
