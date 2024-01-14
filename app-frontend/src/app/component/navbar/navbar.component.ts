import { Component } from '@angular/core';
import { RouterLink, RouterLinkActive, RouterOutlet } from '@angular/router';
import { TopHeaderComponent } from './top-header/top-header.component';
import { MiddleHeaderComponent } from './middle-header/middle-header.component';

@Component({
  selector: 'navbar',
  standalone: true,
  imports: [RouterLink,RouterLinkActive,RouterOutlet,TopHeaderComponent,MiddleHeaderComponent],
  templateUrl: './navbar.component.html',
  styleUrl: './navbar.component.scss'
})
export class NavbarComponent {

}
