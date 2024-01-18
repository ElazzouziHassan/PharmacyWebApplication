import { Component } from '@angular/core';
import Swal from 'sweetalert2';
import { FormsModule } from '@angular/forms'; 

@Component({
  selector: 'app-footer',
  standalone: true,
  imports: [ FormsModule],
  templateUrl: './footer.component.html',
  styleUrl: './footer.component.scss'
})
export class FooterComponent {

  subscribedEmail:string="";

Subscribe() {

  if(this.subscribedEmail !==""){
    Swal.fire({
      icon:"success",
      title:'Congratulations',
      text: this.subscribedEmail +' Will be subscribed to Our newsletter',
      timer:3000
    })
    this.subscribedEmail=""
  }
  else{
    Swal.fire({
      icon:'warning',
      title:'oooops!',
      text:'Please enter your E-mail',
      timer:3000
    })
    this.subscribedEmail=""

  }
 

}

}
