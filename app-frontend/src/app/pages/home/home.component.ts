import { Component } from '@angular/core';
import { RouterLink, RouterLinkActive } from '@angular/router';
import { MainComponent } from './main/main.component';
import { OwlItemComponent } from './owl/owl-item/owl-item.component';
import { OwlStageComponent } from './owl/owl-stage/owl-stage.component';


@Component({
  selector: 'home',
  standalone: true,
  imports: [RouterLink,RouterLinkActive,MainComponent,OwlItemComponent,OwlStageComponent],
  templateUrl: './home.component.html',
  styleUrl: './home.component.scss'
})
export class HomeComponent {

}
