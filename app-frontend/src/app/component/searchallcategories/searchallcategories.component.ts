import { Component } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { FormsModule } from '@angular/forms';
import Swal from 'sweetalert2'; 

@Component({
  selector: 'searchallcategories',
  standalone: true,
  imports: [ 
    FormsModule],
  templateUrl: './searchallcategories.component.html',
  styleUrl: './searchallcategories.component.scss'
})
export class SearchallcategoriesComponent {
  
  inputData: string = '';


  GetSearchedData() {
    

  this.inputData="";

  if(this.inputData !==""){
    Swal.fire({
      icon:"success",
      title:'You are at search area.',
      text:'you are looking for '+this.inputData +' Product it will be provided once the APIs are inserted',
      timer:3000
    })
    this.inputData=""
  }
  else{
    Swal.fire({
      icon:'warning',
      title:'oooops!',
      text:'Please enter a keyword to look for',
      timer:3000
    })
    this.inputData=""

  }
}
}
