import { Component } from '@angular/core';
import { RouterLink, RouterLinkActive } from '@angular/router';
import { MainComponent } from './main/main.component';


@Component({
  selector: 'home',
  standalone: true,
  imports: [RouterLink,RouterLinkActive,MainComponent],
  templateUrl: './home.component.html',
  styleUrl: './home.component.scss'
})
export class HomeComponent {

}
