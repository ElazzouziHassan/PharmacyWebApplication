import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class CategoryService {

  SERVER_URL="http://localhost:3000/api";

  constructor(private http:HttpClient) { 

  }


  getAllProducts(){
    return this.http.get(this.SERVER_URL+"");

  }
  getOneProduct(id:Number){
    return this.http.get(this.SERVER_URL+"");
  }

  getProductsByCategory(category:String){
    return this.http.get(this.SERVER_URL+"");
  }
}
