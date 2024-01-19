import { Component } from '@angular/core';
import { OwlItemComponent } from './owl-item/owl-item.component';
import { OwlStageComponent } from './owl-stage/owl-stage.component';

@Component({
  selector: 'owl-carousel',
  standalone: true,
  imports: [OwlItemComponent,OwlStageComponent],
  templateUrl: './owl.component.html',
  styleUrl: './owl.component.scss'
})
export class OwlComponent {

  items:any=["Fresh Fruit","Vegetables","Just Fruit :D"]
}
