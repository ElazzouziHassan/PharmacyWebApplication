import { Component } from '@angular/core';
import { RouterLink, RouterLinkActive } from '@angular/router';
import { MainComponent } from './main/main.component';
import { OwlComponent } from './owl/owl.component';


@Component({
  selector: 'home',
  standalone: true,
  imports: [RouterLink,RouterLinkActive,MainComponent,OwlComponent],
  templateUrl: './home.component.html',
  styleUrl: './home.component.scss'
})
export class HomeComponent {

}
