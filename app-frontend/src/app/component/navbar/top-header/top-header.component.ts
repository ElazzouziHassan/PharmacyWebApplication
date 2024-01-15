import { CommonModule } from '@angular/common';
import { Component, EventEmitter, Output } from '@angular/core';
import { RouterLink } from '@angular/router';

@Component({
  selector: 'top-header',
  standalone: true,
  imports: [RouterLink,CommonModule],
  templateUrl: './top-header.component.html',
  styleUrl: './top-header.component.scss'
})
export class TopHeaderComponent {
  
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
}
