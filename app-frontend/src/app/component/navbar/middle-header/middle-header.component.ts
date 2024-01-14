import { Component } from '@angular/core';
import { RouterLink, RouterLinkActive } from '@angular/router';

@Component({
  selector: 'middle-header',
  standalone: true,
  imports: [RouterLink,RouterLinkActive],
  templateUrl: './middle-header.component.html',
  styleUrl: './middle-header.component.scss'
})
export class MiddleHeaderComponent {

}
