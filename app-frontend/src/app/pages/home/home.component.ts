import { Component } from '@angular/core';
import { RouterLink, RouterLinkActive } from '@angular/router';
import { MainComponent } from './main/main.component';
import { OwlItemComponent } from './owl/owl-item/owl-item.component';


@Component({
  selector: 'home',
  standalone: true,
  imports: [RouterLink,RouterLinkActive,MainComponent,OwlItemComponent],
  templateUrl: './home.component.html',
  styleUrl: './home.component.scss'
})
export class HomeComponent {

}
