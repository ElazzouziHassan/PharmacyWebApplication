import { ComponentFixture, TestBed } from '@angular/core/testing';

import { LeftasideallcategoriesComponent } from './leftasideallcategories.component';

describe('LeftasideallcategoriesComponent', () => {
  let component: LeftasideallcategoriesComponent;
  let fixture: ComponentFixture<LeftasideallcategoriesComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [LeftasideallcategoriesComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(LeftasideallcategoriesComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
