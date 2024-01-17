import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class UserService {

  
  SERVER_URL="http://localhost:3000/api";

  constructor(private http:HttpClient) { 

  }

  getAllUsers(){
    return this.http.get(this.SERVER_URL+"");

  }
  getOneUser(id:Number){
    return this.http.get(this.SERVER_URL+"");
  }


  
}
